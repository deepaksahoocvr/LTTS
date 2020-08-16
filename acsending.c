/* C program to sort an array in ascending order using pointer to an array*/

#include<stdio.h>
#include<stdlib.h>

int sort1(int *a,int n)

{
    
    
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           int temp;
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;

           }
       }
   }
   for(int i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   
}

int main()
{
    int n;
    scanf("%d",&n);
  int *a,num[n];
 
  for(int i=0;i<n;i++)
  {

      scanf("%d",&num[i]);
      


  }
  a=num;
 
  sort1(a,n);
 
  return 0;

}
