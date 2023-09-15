#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

struct empo
{
	int eid;
	char name[20];
	char sex;
	int salary;
};

int main()
{
	addemp(1, "Kunal ", 'M', 100);
	addemp(2, "ajay", 'M', 200);
	addemp(3, "Vaibhav", 'M', 300);
	addemp(4, "Rohan", 'M', 400);
	addemp(5, "Priya", 'F', 500);
	addemp(6, "Mayuri", 'F', 600);
	addemp(7, "Tejsvi", 'M', 700);
	addemp(8, "sarvashri", 'M', 800);
	change_sal(1, 1000);
	disemp();
	_getch();
	return 0;
}

void addemp(int eid, char *name, char sex, int salary)
{
	struct empo help;
	FILE *fp;
	fp = fopen("Emp.txt", "rb+");
	if (fp == NULL)
		fp = fopen("Emp.txt", "wb");
	fseek(fp, 0, SEEK_END);
	help.eid = eid;
	strcpy(help.name, name);
	help.sex = sex;
	help.salary = salary;
	fwrite(&help, sizeof(help), 1, fp);
	fclose(fp);
}

void change_sal(int id, int new_salary)
{
	struct empo help;
	int size = sizeof(help);
	FILE *fp;
	fp = fopen("Emp.txt", "rb+");
	if (fp == NULL)
		fp = fopen("Emp.txt", "wb");
	while (fread(&help, sizeof(help), 1, fp) == 1)
	{
		if (help.eid == id)
		{
			fseek(fp, -size, SEEK_CUR);
			help.salary = new_salary;
			fwrite(&help, sizeof(help), 1, fp);
			break;
		}
	}
	fclose(fp);

}

void delemp(int id)
{
	struct empo help;
	int size = sizeof(help);
	FILE *fp;
	fp = fopen("Emp.txt", "rb+");
	if (fp == NULL)
		fp = fopen("Emp.txt", "wb");
	while (fread(&help, sizeof(help), 1, fp) == 1)
	{
		if (help.eid == id)
		{
			fseek(fp, -size, SEEK_CUR);
			help.salary = 0;
			fwrite(&help, sizeof(help), 1, fp);
			break;
		}
	}
	fclose(fp);
}

void disemp()
{
	struct empo help;
	FILE *fp;
	fp = fopen("Emp.txt", "rb");
	if (fp == NULL)
	{
		puts("\nFile is unable to open or did not exist.\nExiting. . .");
		exit(1);
	}
	while (fread(&help, sizeof(help), 1, fp) == 1)
	{
		printf("\n%2d", help.eid);
		printf("\t%-20s", help.name);
		printf("\t%c", help.sex);
		printf("\t%d\n", help.salary);
	}
	fclose(fp);
}