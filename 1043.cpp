#include<stdio.h>
int main(){

float A,B,C;

scanf("%f%f%f",&A,&B,&C);

if((A < (float)(B+C)) && (B < (float)(A+C)) && (C < (float)(B+A))){

 printf("perimeter = %.1f\n",(A+B+C));

}else{

printf("Area = %.1f\n",(((A + B) * C) / 2));
}

return 0;
}
