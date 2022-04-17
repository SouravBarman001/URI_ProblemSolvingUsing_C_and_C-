#include<stdio.h>
int main(){

int N,i;
scanf("%d",&N);
if(N/N == 1){
    printf("%d",1+1);
}
for(i=1;i<=10000;i++){
    if(i%N == 0){
        int r = i +2;

        printf("%d\n",r);


    }

}


return 0;
}
