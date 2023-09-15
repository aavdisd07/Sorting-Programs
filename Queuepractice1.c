//QUEUE BEGINNING PROGRAM--->>>>>
#include <stdio.h>
void push(int x);
void pop();
void show();
int front = -1;
int rear = -1;
int size = 10;
int arr[10];

int main()
{
   push(10);
   show();
   push(19);
   push(38);
   push(57);
   push(76);
   push(95);
   push(114);
   printf("\t\n\t");
   push(20);
   show();
   printf("\t\n\t");
   push(97);
   push(30);
   show();
   printf("\t\n\t");
   push(47);
   push(60);
   show();
   pop();
   show();
   pop();
   show();
   pop();
   show();
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();
   show();

   pop();
   show();

   return 0;
}
void push(int m)
{
   if (rear == size - 1)

      printf("\nStack is overflow\n");
   else
   {
      if (front == -1)
         front = 0;
      rear++;
      arr[rear] = m;
   }
}
void pop()
{
   if (front == -1 || front > rear)
   {
      printf("\nStack is underflow");
   }
   else
      printf("\n%d is popped\n", arr[front]);
   front++;
}
void show()
{
   for (int i = front; i <= rear; i++)
   {

      printf("%d \t", arr[i]);
   }
}