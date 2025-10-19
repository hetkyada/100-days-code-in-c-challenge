//Check if a string is a palindrome.(Strings)
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,j,flag=1;
printf("Enter a string: ");
scanf("%[^\n]",str);
for(i=0,j=strlen(str)-1;i<j;i++,j--){
if(str[i]!=str[j]){
flag=0;
break;
}}
if(flag)
printf("String is a palindrome");
else
printf("String is not a palindrome");
return 0;
}
