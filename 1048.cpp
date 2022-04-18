#include<stdio.h>
int main(){

float a;
int n1=15,n2=12,n3=10,n4=7,n5=4;
while(scanf("%f",&a)!=EOF)
{
  if(a>2000.00){
     float rate =(a*0.04);


    printf("Novo salario: %.2f\n",a+rate);
    printf("Reajuste ganho: %.2f\n",rate);
    printf("Em percentual: %d\n",n5);

  }else{

  if(a>=0 && a<=400.00){

         float rate =(a*0.15);


    printf("Novo salario: %.2f\n",a+rate);
    printf("Reajuste ganho: %.2f\n",rate);
    printf("Em percentual: %d %\n",n1);


  }
  else if(a>400 && a<=800.00){

     float rate =(a*0.12);


    printf("Novo salario: %.2f\n",a+rate);
    printf("Reajuste ganho: %.2f\n",rate);
    printf("Em percentual: %d %\n",n2);

  }  else if(a>800 && a<=1200.00){

     float rate =(a*0.1);


    printf("Novo salario: %.2f\n",a+rate);
    printf("Reajuste ganho: %.2f\n",rate);
    printf("Em percentual: %d %\n",n3);

  }
    else if(a>1200 && a<=2000.00){

     float rate =(a*0.07);


    printf("Novo salario: %.2f\n",a+rate);
    printf("Reajuste ganho: %.2f\n",rate);
    printf("Em percentual: %d %\n",n4);

  }


  }

  }





return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 float n, tmp, per;

 cin >> n;

 if(n <= 400){
  per = 15;
  tmp = n + ((n * per) / 100);
 }else if(n > 400 && n <= 800){
  per = 12;
  tmp = n + ((n * per) / 100);
 }else if(n > 800 && n <= 1200){
  per = 10;
  tmp = n + ((n * per) / 100);
 }else if(n > 1200 && n <= 2000){
  per = 7;
  tmp = n + ((n * per) / 100);
 }else{
  per = 4;
  tmp = n + ((n * per) / 100);
 }

 cout << "Novo salario: " << fixed << setprecision(2) << tmp << endl;
 cout << "Reajuste ganho: " << fixed << setprecision(2) << (tmp - n) << endl;
 cout << "Em percentual: " << fixed << setprecision(0) << per << " %" << endl;

 return 0;
}
