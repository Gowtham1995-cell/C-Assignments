//13)write a c program for given number pattern 12345 678910 11 12 13 14 15?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1,z=1;x<=5;x++)
    {
	for(y=1;y<=5;y++)
	{
	    printf("%d ",z++);
	}
	printf("\n");
    }
}