#include<stdio.h>
int main()
{
   int number,hour;
   float salary,m;

   scanf("%d\n %d\n %f", &number, &hour, &salary);

  m = (hour * salary);

printf("NUMBER = %d\n", number);
printf("SALARY = U$ %.2f\n", m);


    return 0;
}
