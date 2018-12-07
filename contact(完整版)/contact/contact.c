#include "contact.h"



static void showPeople(people_p p_)
{
	assert(p_);

	printf("|%-5s|%-5c|%-5d|%-15s|%-15s|\n", \
		p_->name, p_->sex, p_->age, p_->telphone, p_->address);
}

void log(char *level_, char *msg_)     //INFO  WARNING   ERROR
{
	assert(level_);
	assert(msg_);

	printf("%s  :  %s", level_, msg_);
}

contact_p initContact(const char * file_)     
{
	FILE *fp = fopen(file_,"rb");
	if (fp == NULL)
	{
		contact_p ct_ = (contact_p)malloc(sizeof(contact_t)+INIT * sizeof(people_t));
		if (ct_ == NULL)
		{
			perror("malloc");
			return NULL;
		}
		ct_->cap = INIT;
		ct_->size = 0;
		return ct_;

	}
	contact_t ct;
	fread(&ct, sizeof(ct), 1, fp);
	contact_p ct_ = (contact_p)malloc(sizeof(contact_t)+ct.cap * sizeof(people_t));
	if (NULL == ct_)
	{
		log("ERROR","malloc error");
		return NULL;
	}
	memcpy(ct_, &ct, sizeof(ct));
	fread(ct_->people, sizeof(people_t) * ct_->size, 1, fp);
	fclose(fp);
	return ct_;

}

void destoryContact(contact_p ct_)
{
	assert(ct_);

	free(ct_);
	log("INFO", "destoryContact is done !\n");
}

// Full is 1,noFull is 0.
static int isFull(contact_p ct_)
{
	assert(ct_);
	if (ct_ ->cap == ct_ ->size)
		return 1;
	return 0;
}


void save(contact_p ct_,const char *file_)
{
	FILE *fp = fopen(file_,"wb");
	if (!fp)
	{
		log("ERROR","Fopen file error!");
		return;
	}
	fwrite(ct_, sizeof(contact_t) + ct_->size * sizeof(people_t),1,fp);

	fclose(fp);
}

void addPeople(contact_pp ct_,people_p p_)
{
	assert(ct_);
	assert(p_);

	if (isFull(*ct_))
	{
		log("WARNING","Contact is full.Begin increase!\n");
		if (Inc(ct_))
		{
			log("INFO","increase success!\n");
		}
		else
		{
			log("ERROR","increase is failed!\n");
			return;
		}
	}
	memcpy(&(((*ct_) ->people)[(*ct_)->size]) ,p_,sizeof(people_t));
	((*ct_)->size)++;
	log("INFO", "Add people is done!\n");
}

static int Inc(contact_pp ct_)
{
	assert(ct_);
	int cap_ = (*ct_)->cap * 2;
	int new_size = (*ct_)->cap * 2 * sizeof(people_t) + sizeof(contact_t);
	contact_p p = (contact_p)realloc(*ct_, new_size);
	if (p)
	{
		p->cap = cap_;
		*ct_ = p;
		return 1;
	}
	log("WARNING","increase is failed\n");
	return 0;
}



//empty is 1,else 0
int isEmpty(contact_p ct_)
{
	assert(ct_);

	return (ct_->size) == 0 ? 1 : 0;
}

void deletePeople(contact_p ct_,char * name_)
{
	assert(ct_);
	assert(name_);

	int i = 0;
	int size = ct_->size;
	if (isEmpty(ct_))
	{
		log("ERROR", "Contact is empty!\n");
	}
	else
	{
		for (; i < size; i++)
		{

			if (strcmp(((ct_->people[i]).name), name_) == 0)
			{
				ct_->people[i] = ct_->people[size - 1];
				(ct_->size)--;
				log("INFO", "Delete people is done!\n");
				return;
			}
		}
		log("ERROR", "Can not find people!\n");
	}
}



void clearContact(contact_p ct_)
{
	assert(ct_);
	ct_->size = 0;
	log("INFO","Clear contact is done!\n");
}
void displayPeople(contact_p ct_)
{
	if (isEmpty(ct_))
	{
		log("WARNING","Contact is empty!");
		return;
	}
	else
	{
		int i = 0;
		for (; i < ct_->size; i++)
		{
			printf("|%-5s|%-5c|%-5d|%-15s|%-15s|\n", \
				((ct_->people)[i]).name, ((ct_->people)[i]).sex, ((ct_->people)[i]).age, ((ct_->people)[i]).telphone, ((ct_->people)[i]).address);
		}
		return;
	}
}

void searchPeople(contact_p ct_,char * name_)
{
	assert(ct_);
	assert(name_);

	
	if (isEmpty(ct_))
	{
		log("ERROR", "Contact is empty!\n");
	}
	else
	{
		int i = 0;
		for (; i < ct_->size; i++)
		{
			if (strcmp(((ct_->people[i]).name), name_) == 0)
			{
				showPeople(&((ct_->people)[i]));
				return;
			}
		}
		log("ERROR", "Can not search the people\n");
	}
}

void updatePeople(contact_p ct_, char * name_)
{
	assert(ct_);
	assert(name_);

	int i = 0;
	if (isEmpty(ct_))
	{
		log("WARNING", "Contact is empty!\n");
	}
	else
	{
		for (; i < ct_->size; i++)
		{
			if (strcmp(((ct_->people[i]).name), name_) == 0)
			{
				printfPeople(&((ct_->people)[i]));
				log("INFO", "Update people is done!\n");
				return;

			}

		}
		log("ERROR", "Can not search the people for update!\n");
	}

}

