//Reverse a string.(Strings)
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,j;
char temp;
printf("Enter a string: ");
scanf("%[^\n]",str);
for(i=0,j=strlen(str)-1;i<j;i++,j--){
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
printf("Reversed string: %s",str);
return 0;
}
