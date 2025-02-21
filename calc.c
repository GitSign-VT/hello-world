#include <stdio.h>
#include <string.h>
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
    int total =40;
    int input ;

    printf("Enter f- for loop, a-addition,s-substraction,m-muliti,d-division ");
    input=getchar(); 
    printf(" %c \n",input);
    switch (input)
    {
	case 'f':
		for_loop();
		break;
	case 'a':
		total = add (10,12);
	    	printf("Total added value %d \n", total);
		break;
    
	case 's':
    		total = sub (total, 6 );
    		printf("Total Sub value %d \n", total);
		break;

	case 'm':
    		total = mult (total,12);
    		printf("Total Multiply value %d \n", total);
		break;

	case 'd':
    		total = divi (total,5);
	    	printf("Total Divison value %d \n", total);
		break;
	}
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
