#include<stdio.h>
#include<stdlib.h>
int main(){

int N,T;
scanf("%d",&T);


while(T--){

  scanf("%d",&N);
  if(N == 0){
    printf("NULL\n");

 }
   else if(N%2==0 && N > 0){
    printf("EVEN POSITIVE\n");
   }

 else if(N%2!=0 && N > 0){
    printf("ODD POSITIVE\n");
 }
   else if( abs(N)%2==0 && N < 0){
    printf("EVEN NEGATIVE\n");
   }

 else if( abs(N)%2!=0 && N < 0){
    printf("ODD NEGATIVE\n");
 }
}
return 0;
}
