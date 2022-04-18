#include<stdio.h>
#include<math.h>
int main(){

float A,B,C,t;

scanf("%f%f%f",&A,&B,&C);

if(((B * B) - 4 * A * C) < 0 || A == 0){

   printf("Impossivel calcular\n");
}
   else{

     t = sqrt((B * B) - 4 * A * C);

    printf("R1 = %.5f\n",((-B+t)/(2*A)));
    printf("R2 = %.5f\n",((-B-t)/(2*A)));

   }



return 0;
}
