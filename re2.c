#include <stdio.h>

int foo(int v1,int v2, int v3)
{
	int v4=0;
	v4 = v1+ v2;

	return v4+v3;
}

int main() 
{
	int i=0;
	char buf[1024]={};
	foo(1,2,10);	
	printf("%d",foo(5,1,2));
			
	return 0;
}
