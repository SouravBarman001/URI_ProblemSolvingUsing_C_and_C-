#include<stdio.h>
int main(){

int a,b,c,d,e,positive=0,negative=0,even=0,odd=0;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);

if(a%2==0){
    even++;

}
if(a%2!=0){
    odd++;
}

if(a>0){
    positive++;
}

if(a<0){
   negative++;
}


////////////////////////////////////////////

if(b%2==0){
    even++;

}

if(b%2!=0){
    odd++;

}
if(b>0){
    positive++;
}

if(b<0){
   negative++;
}

////////////////////////////////////////////

if(c%2==0){
    even++;

}

if(c%2!=0){
    odd++;

}
if(c>0){
    positive++;
}

if(c<0){
   negative++;
}

//////////////////////////////////////

if(d%2==0){
    even++;

}

if(d%2!=0){
    odd++;

}
if(d>0){
    positive++;
}

if(d<0){
   negative++;
}

//////////////////////////////////////


if(e%2==0){
    even++;

}

if(e%2!=0){
    odd++;

}
if(e>0){
    positive++;
}

if(e<0){
   negative++;
}

printf("%d valor(es) par(es)\n",even);
printf("%d valor(es) impar(es)\n",odd);
printf("%d valor(es) positivo(s)\n",positive);
printf("%d valor(es) negativo(s)\n",negative);






return 0;
}
