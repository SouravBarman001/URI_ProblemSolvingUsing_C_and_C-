#include<stdio.h>
int main(){

int t,p,out=0,in=0;

scanf("%d",&t);
while(t--){
    scanf("%d",&p);

   if(p>=10 && p<=20){
    in++;
   } else{
    out++;

   }

}
printf("%d in\n",in);printf("%d out\n",out);



return 0;
}
