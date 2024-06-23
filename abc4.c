#include<stdio.h>

int Addition(int No1,int No2)
{
    int Result = 0;
    int A = 0;
    Result = No1 + No2;
    return Result;
}
int main()
{
   int ivalue1 = 10;
   int ivalue2 = 20;
   int sum = 0;
   
   int (*fptr)(int,int);
   fptr = Addition;
   
   sum = fptr(ivalue1,ivalue2);  
   printf("sum is:%d\n",sum);
   
   return 0;
}
