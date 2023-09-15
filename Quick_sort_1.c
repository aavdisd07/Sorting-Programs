#include <stdio.h>
#include<stdlib.h>
int partition(int arr[], int low, int high)
{
   int pivote = arr[low];
   int i = low;
   int j = high;

   do
   {
      while (arr[i] <= pivote)
      {
         i++;
      }
      while (arr[j] > pivote)
      {
         j--;
      }
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;

   } while (i < j);

    int temp1 = arr[low];
   arr[low] = arr[j];
   arr[j] = temp1;
   return j;
}
void Quick_sort(int  arr[50], int low, int high)
{
   int partition_index;
   if (low < high)
   {

      partition_index =Partition(arr[50], low, high);
      Quick_sort(arr, low, partition_index - 1);
      Quick_sort(arr, partition_index + 1, high);
   }
}
int main()
{
   int arr[] = {12,
                35,
                88,
                2,
                67,
                98,
                1,
                4,
                789,
                346,
                86,
                24};
   int low = 0;
   int high = (sizeof(arr)) / (sizeof(3));
   Quick_sort(arr, low, high);
   Partition(arr, low, high);
}