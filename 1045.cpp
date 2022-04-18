#include<stdio.h>
int main(){

double a,b,c;
scanf("%lf%lf%lf",&a,&b,&c);

if(a>0 && b>0 && c>0){

  if(a>=(b+c)){
    printf("NAO FORMA TRIANGULO\n");
  }
  else if((a*a) == ((b*b)+(c*c))){
    printf("TRAINGULO RETANGULO\n");
  }
    else if((a*a)>((b*b)+(c*c))){
            goto b;
        printf("TRAINGULO OBTUSANGULO\n");
    }
   else if((a*a)<((b*b)+(c*c))){

        printf("TRAINGULO ACUTANGULO\n");
        goto a;
        goto c;
   }
    else if(a==b==c){
            c:
    printf("TRAINGULO EQUILATERO\n");

    }else if(((a==b)!=c)||((a==c)!=b)|| ((b==c)!=a)){
        a:
            b:
        printf("TRAINGULO ISOSCELES\n");

    }


}







return 0;
}
