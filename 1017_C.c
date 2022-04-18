#include<stdio.h>
int main(){

int speed,hour;

scanf("%d %d",&speed,&hour);
float liter =(((float)speed/12)*hour);
printf("%.3f\n",liter);

return 0;
}
