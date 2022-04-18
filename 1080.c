#include<stdio.h>
int main(){
int number,i,j,tmp;

printf("Enter how many numbers :");
scanf("%d",&number);
int array[number];

 printf("Enter your elements:\n");

 for(i=0;i<number;i++)
 {
      scanf("%d",&array[i]);
 }


for(i = 0 ; i<number-1 ; i++){
    for(j=0 ; j<number-i ; j++){
        if(array[j]>array[j+1]){
            tmp = array[j];
            array[j] = array[j+1];
            array[j+1] = tmp;

        }
    }

}
for(i=0;i<number;i++){

    printf("%d",array[i]);
}





return 0;
}

