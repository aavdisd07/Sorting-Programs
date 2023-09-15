// Insertion sorting program ------>>>>>

#include <stdio.h>
void print(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d\t ", a[i]);
  }
  printf("\n\n");
}
void Insertion_sort(int *a, int n)
{
  int j, current;

  for (int i = 1; i < n; i++)
  {
    current = a[i];
    j = i - 1;
    while (a[j] > current && j >= 0)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = current;
  }
}
void main()
{
  int arr[] = {12, 34, 56, 25, 13, 15, 52, 75, 34, 11, 57, 81, 2, 5, 8, 10, 3};
  int n = (sizeof(arr)) / (sizeof(int));
   print (arr,n);
  Insertion_sort(arr, n);
  print(arr, n);
}