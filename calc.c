#include <stdio.h>
#include <stdlib.h>


int for_loop();
int add(int a , int b );
int sub(int a, int b);
int mult(int a , int b);
int divi(int a, int b);


int main()
{
    int i , count=0;
    int sum=0;
    int total =0;
    printf("This is my first repository\n");
    for_loop();

    total = add (10,12);
    printf("Total added value %d \n", total);
    
    total = sub (total, 6 );
    printf("Total Sub value %d \n", total);

    total = mult (total,12);
    printf("Total Multiply value %d \n", total);

    total = divi (total,5);
    printf("Total Divison value %d \n", total);
    return 0;
}

int for_loop()
{
    int i, count=0, sum=0, total=0;
    for (i=0; i <=10;i++)
    {
	    count = count+ i ;
	    sum = sum + count;
	    printf("Sum %d, Counter %d, count %d\n", sum ,i, count);
    }
    return 0;    
}

int add (int a , int b)
{
	return (a + b) ;
}
int sub (int a , int b)
{
	return (a - b) ;
}
int mult (int a , int b)
{
	return (a * b) ;
}
int divi (int a , int b)
{
	return (a / b) ;
}
