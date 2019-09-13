#include<stdio.h>
void main()
{
    int a,b,c;
    int sum(int,int);
    printf("enter a,b");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum is %d",c);
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
