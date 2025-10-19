//Print all sub-strings of a string.(Strings)
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,j,len;
printf("Enter a string: ");
scanf("%[^\n]",str);
len=strlen(str);
for(i=0;i<len;i++){
for(j=1;j<=len-i;j++){
for(int k=i;k<i+j;k++)
printf("%c",str[k]);
printf("\n");
}}
return 0;
}
