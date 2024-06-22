#include<stdio.h>
int main()
{
    int i=0,j=0;
    while(i<5)
    {
       j = 0;
       while(j<5)
       {
          printf("%d\t",i);
          j++;
     
       }
       printf("\n");
       i++;
    }


  return 0;
}
