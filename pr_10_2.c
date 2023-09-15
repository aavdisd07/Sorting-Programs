#include<stdio.h>
#include<conio.h>
void main() { //to get input in file
FILE *fp;
char ch;
struct blood {
 char name[50];
 char adr[50];
 int age;
 int bld;
 }b;

fp=fopen("hospital_data.txt","rb");
if(fp==NULL) {
printf("cannot open source file!\n\n");

}
while(fscanf(fp,"%s\t%s\t%d\t%d",&b.name,&b.adr,&b.age,&b.bld)!=EOF)
if(b.age<25 && b.bld==2) {
printf("\n%s\t %s\t%2d\t %d",b.name,b.adr,b.age,b.bld);
}
fclose(fp);
getch();
}