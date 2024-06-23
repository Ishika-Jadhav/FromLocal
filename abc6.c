#include<stdio.h>
struct Demo
{
	int x : 1;
	int y : 10;
	int z : 14;
	int w : 8;
};
int main()
{
	/* struct Demo obj;
	obj.no = 10;
	obj.ch = 'A';
	printf("%d\n",obj.no);
	printf("%c\n",obj.ch);
	*/
	struct Demo A;
	
	printf("%d\n",sizeof(A)); 
	
	return 0;
}
