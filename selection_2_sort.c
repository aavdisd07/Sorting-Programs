#include <stdio.h>
void selection(int a[], int n)
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
void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d \t", arr[i]);
  }
  printf("\n");
}
void main()
{
  int arr[]={23,546,8655,13,57,867,23,64,87};
  int n=(sizeof(arr))/(sizeof(4));
  display(arr,n);
  selection(arr,n);
  display(arr,n);
}