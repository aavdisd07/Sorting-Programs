#include <stdio.h>
int intersection(int arr[], int brr[], int z, int y)
{
   int inr[6];
   int t = 0;
   for (int i = 0; i < z; i++)
   {   int element =arr[i];
      for (int j = 0; j < y; j++)
      {

         {
            if (element == brr[j])
            {  int temp=element;
               inr[t] = temp;
               t++;
            }
         }
      }
      printf("In function\t\t");
      for (int t = 0; t < 6; t++)
      {
         printf("%d ", inr[t]);
      }
      return 0;
   }
}
int main()
{
   int arr[6] = {2, 5, 78, 9, 2, 6};
   int s = 6;
   int brr[6] = {12, 5, 76, 1, 35, 78};
   intersection(arr, brr, s, s);
   return 0;
}