#include <stdio.h>
#include <string.h>
struct menu
{
  char Type_of_food[50];
  int no;
  struct subtype
  {
    char food_name[50];
    int place[50];
    int rate[50];
  };
};
void main()
{
  int n,i=0;
  struct menu m1;
  m1.Type_of_food;
  printf("Enter how much variety of food is available today:");
  scanf("%d", &n);
  if(1)
  printf("Enter Name of available  food variety ");

  for (i = 0; i < n; i++)
  {
    scanf("%s", &m1.Type_of_food[i]);
  }

 
  printf("\n\t\t***Hey Todays available variety is:***\t\t");
   if(1)
 do
  {
    printf("%s\t\t", m1.Type_of_food);
    i++;

  } while(i<n);
  printf("end");
}