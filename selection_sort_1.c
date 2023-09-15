
// Selection sorting---------->>>>>>>>>>>>>>
 
#include <stdio.h>
void selection_sort(int a[], int n);
void print(int a[], int n);

void main()
{
  int a[] = {12, 2, 4, 6, 7, 9, 34, 89, 32, 1, 45};
  int n = (sizeof(a)) / sizeof(int);
  print(a, n);
  printf("\n\n\n");
  selection_sort(a, n);
  print(a, n);
}
void selection_sort(int a[], int n)
{
  int min;
  for (int i = 0; i < n - 1; i++)
  {
    min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[min] > a[j])
      {
        min = j;
      }
    }
    int temp;
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
  }
}
void print(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
}
