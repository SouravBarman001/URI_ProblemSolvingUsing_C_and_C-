#include<stdio.h>
int main(){
int start_day,start_minute,start_hour,start_second;
int end_day,end_minute,end_hour,end_second;
int set_day,set_hour,set_minute,set_second;
//int real_day,real_hour,real_minute,real_second;


scanf("%d",&end_day);
scanf("%d%d%d",&end_hour,&end_minute,&end_second);
scanf("%d",&start_day);
scanf("%d%d%d",&start_hour,&start_minute,&start_second);

if(end_second>start_second){
    set_second = end_second - start_second;
    printf("%d segundo(s)\n",set_second);
}
 if(end_second<start_second){
set_second = (end_second+60)- start_second;
printf("%d segundo(s)\n",set_second);
   end_minute = end_minute - 1;
}
 if(end_minute>start_minute){
    set_minute = end_minute - start_minute;
    printf("%d minuto(s)\n",set_minute);
}
if(end_minute<start_minute){
   set_minute = (end_minute+60)-start_minute;
   printf("%d minuto(s)\n",set_minute);
   end_hour = end_hour - 1;
}
if (end_hour>start_hour){
    set_hour = end_hour - start_hour;
    printf("%d hora(s)\n",set_hour);
}
if(end_hour < start_hour){
  set_hour = (end_hour+24) - start_hour;
  printf("%d hora(s)\n",set_hour);
  end_day = end_day - 1;

}
if (end_day<start_day){
set_day = end_day - start_day;
printf("%d dia(s)\n",set_day);
}

/*
printf("%d dia(s)\n",set_day);
printf("%d hora(s)\n",set_hour);
printf("%d minuto(s)\n",set_minute);
printf("%d segundo(s)\n",set_second);
*/
return 0;
}
