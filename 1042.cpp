#include<stdio.h>
int main(){


int a,b,c;

scanf("%d%d%d",&a,&b,&c);

printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("\n");

if(a<b){
        if(a<c){
          printf("%d\n",a);
        }
        else{
          printf("%d\n",c);

          if(a<b){
            printf("%d\n",a);
          } else{
          printf("%d\n",b);
          }
        }

}
else if(b<c){



      if(b>c){
          printf("%d\n",c);
        }
        else{
          printf("%d\n",b);

          if(b<a){
            printf("%d\n",b);
          } else{
          printf("%d\n",a);
          }
        }




}



return 0;
}
