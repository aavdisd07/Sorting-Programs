#include <stdio.h>
void main()
{
  int age, health, domicile, premium;
  char sex, p, female, male;
  printf("Enter The Age:", age);
  scanf("%d", &age);

  printf("Select the sex:\n");
  printf("1 for Female and 2  Male:");

  scanf("%d", &p);
  if (p == 1)
    printf("The sex is female ");
  if (p == 2)
    printf("The sex is male");
}