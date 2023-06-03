#include<stdio.h>
int sum(int a, int b)
{
    return (a+b);
}
int diff(int a, int b)
{
    return(a-b);
}
int div(int a, int b)
{
    return(a/b);
}
int mul(int a, int b)
{
    return(a*b);
}
void greeting()
{
    printf("Hello from GFG");
}
int main()
{
    int s=sum(2,3);
	printf("Printing Sum"); 
    printf("sum=%d",s);  		
}