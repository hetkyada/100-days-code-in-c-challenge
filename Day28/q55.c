//Write a program to print all the prime numbers from 1 to n.(Nested Loops without Arrays/Strings)
#include<stdio.h>
int main(){
int n,i,j,flag;
scanf("%d",&n);
for(i=2;i<=n;i++){
flag=1;
for(j=2;j*j<=i;j++){
if(i%j==0){
flag=0;
break;
}
}
if(flag==1)printf("%d\n",i);
}
return 0;
}
