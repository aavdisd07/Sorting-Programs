#include<stdio.h>
#include<math.h>

typedef struct triangle TR {
    int l,b,h;

};

void getdata()
{   
   for(int i=0;i<n,i++)
   {
       printf("Enter data\n");
       scanf("%d %d %d",&TR.[i],&TR.[i],&TR.[i]);
   }   
}
void Sort_at(int arr,int n)
{
   float area[];
    for(int i=0;i<n,i++)
   {   float p[i]=(float)(TR.[i]+&TR.[i]+&TR.[i])/2;

       area[i]=sqrt(float)(p*(p-TR.[i].l)*(p-TR.[i].b)*(p-TR.[i].h));

   
      
   }   
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n-1-i;j++)
       { 
         if(area[j]>area[j+1])
         {
             int temp= area[j];
             area[j]=area[j+1];
              area[j+1]=temp;
         } 
       }
      printf("%d ",area[i]);
   }

} 
int main()
{
    getdata();
     Sort_at(int arr,int n);
  
}


  



