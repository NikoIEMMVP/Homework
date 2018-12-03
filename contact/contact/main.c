#include "contact.h"


void menu()
{
	printf("#################################\n");
	printf("#################################\n");
	printf("##  1.     �����ϵ����Ϣ      ##\n");
	printf("##  2.     ɾ����ϵ����Ϣ      ##\n");
	printf("##  3.     ������ϵ����Ϣ      ##\n");
	printf("##  4.     �޸���ϵ����Ϣ      ##\n");
	printf("##  5.     ��ʾ��ϵ����Ϣ      ##\n");
	printf("##  6.     �����ϵ����Ϣ      ##\n");
	printf("##  0.      �˳�ͨѶ¼         ##\n");
	printf("#################################\n");
	printf("#################################\n");
}

void printfPeople(people_p p)
{
	assert(p);

	printf("Please Enter Your Name: ");
	scanf("%s", p->name);

	printf("Please Enter Your Sex<m,w>: ");
	scanf(" %c", &(p->sex));

	printf("Please Enter Your Age: ");
	scanf(" %d", &(p->age));

	printf("Please Enter Your Telphone: ");
	scanf(" %s", p->telphone);

	printf("Please Enter Your Address: ");
	scanf(" %s", p->address);
}

int main()
{
	int select = 0;
	int quit = 0;
	contact_p ct = initContact();
	people_t p;
	char name_[NAME_SIZE];

	while (!quit)
	{
		menu();
		printf("Please Enter : ");
		scanf("%d", &select);
		switch(select)
		{
		case 0:
			quit = 1;
			break;
		case 1:
			printfPeople(&p);
			addPeople(ct,&p);
			break;
		case 2:
			printf("Please enter the name for delete:");
			scanf("%s", name_);
			deletePeople(ct, name_);
			break;
		case 3:
			printf("Please enter the name for search:");
			scanf("%s", name_);
			searchPeople(ct, name_);
			break;
		case 4:
			printf("Please enter the name for update:");
			scanf("%s", name_);
			updatePeople(ct, name_);
			break;
		case 5:
			displayPeople(ct);
			break;
		case 6:
			clearContact(ct);
			break;
		default:
			printf("�����������������\n");
			break;

		}

	}
	printf("�˳��ɹ���\n");
	system("pause");
	return 0;
}