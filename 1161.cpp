#include<stdio.h>

 fact(int n)
{
    if(n==1)
    return 1;

    else
     return n*fact(n-1);

}
int main()
{    int p;
    scanf("%d",&p);
    int result=fact(p);

    printf("The factorial of 5 is :%d",result);
}
