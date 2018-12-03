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

contact_p initContact()     
{
	contact_p ct_ = (contact_p)malloc(sizeof(contact_t) + INIT * sizeof(people_t));
	if (ct_ == NULL)
	{
		perror("malloc");
		return NULL;
	}
	ct_ ->cap = INIT;
	ct_ ->size = 0;
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




void addPeople(contact_p ct_,people_p p_)
{
	assert(ct_);
	assert(p_);

	if (isFull(ct_))
	{
		log("WARNING","Contact is Full!\n");
	}
	else
	{
		int index_ = ct_->size;
		memcpy(&((ct_ ->people)[index_]) ,p_,sizeof(people_t));
		(ct_->size)++;
		log("INFO", "Add people is done!\n");
	}
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

