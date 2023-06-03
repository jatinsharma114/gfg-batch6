#include<stdio.h>
int sum(int a, int b)
{
    return (a+b);
}
int mul(int a, int b)
{
    return(a*b);
}
int main()
{
    int s=sum(2,3);
	printf("Printing Sum"); 
    printf("sum=%d",s);  		
}