#include<stdio.h>
int main()
{

 float a,b,c,d,e,f,sum=0;int count = 0;
 scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
 if(a>=0){
    sum = sum + a;
    count++;
 }  if(b>=0){
    sum = sum + b;
    count++;
 }  if(c>=0){
    sum = sum + c;
    count++;
 }  if(d>=0){
    sum = sum + d;
    count++;
 }  if(e>=0){
    sum = sum + e;
    count++;
 }  if(f>=0){
    sum = sum + f;
    count++;
 }


  printf("%d valores positivos\n",count);

  printf("%.1f\n",(sum/count));











 return 0;

}
