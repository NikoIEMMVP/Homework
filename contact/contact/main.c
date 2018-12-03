#include "contact.h"


void menu()
{
	printf("#################################\n");
	printf("#################################\n");
	printf("##  1.     添加联系人信息      ##\n");
	printf("##  2.     删除联系人信息      ##\n");
	printf("##  3.     查找联系人信息      ##\n");
	printf("##  4.     修改联系人信息      ##\n");
	printf("##  5.     显示联系人信息      ##\n");
	printf("##  6.     清空联系人信息      ##\n");
	printf("##  0.      退出通讯录         ##\n");
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
			printf("输入错误，请重新输入\n");
			break;

		}

	}
	printf("退出成功！\n");
	system("pause");
	return 0;
}