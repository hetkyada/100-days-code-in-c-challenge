//Find the first repeating lowercase alphabet in a string.(Strings)
#include<stdio.h>
int main(){
char str[100];
int freq[26]={0},i;
printf("Enter a string: ");
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++){
if(str[i]>='a' && str[i]<='z'){
freq[str[i]-'a']++;
if(freq[str[i]-'a']==2){
printf("First repeating lowercase alphabet: %c",str[i]);
return 0;
}}}
printf("No repeating lowercase alphabet found");
return 0;
}
