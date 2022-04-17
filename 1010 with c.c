#include<stdio.h>
int main(){

int product1,product2,product3,product4;

float value1,value2;

scanf("%d %d %f",&product1,&product2,&value1);
scanf("%d %d %f",&product3,&product4,&value2);

printf("VALOR A PAGAR: R$ %.2f\n",((product2*value1)+(product4*value2)));

return 0;
}
