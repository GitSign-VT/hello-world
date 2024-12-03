#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , count=0;
    int sum=0;
    for (i=0; i <=10;i++)
    {
	    count = count+ i ;
	    sum = sum + count;
	    printf("Sum %d, Counter %d, count %d\n", sum ,i, count);
    }
    printf("This is my first repository\n");
    return 0;
}
