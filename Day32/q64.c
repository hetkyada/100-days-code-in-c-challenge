//Find the digit that occurs the most times in an integer number.(Arrays (1D))
#include<stdio.h>
int main(){
int num,digit,count[10]={0},i,max=0,maxDigit=0;
printf("Enter an integer: ");
scanf("%d",&num);
if(num<0)
num=-num;
while(num>0){
digit=num%10;
count[digit]++;
num/=10;
}
for(i=0;i<10;i++){
if(count[i]>max){
max=count[i];
maxDigit=i;
}}
printf("Digit occurring most times: %d",maxDigit);
return 0;
}
