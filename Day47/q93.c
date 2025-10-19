//Check if two strings are anagrams of each other.(Strings)
#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100];
int freq1[256]={0},freq2[256]={0},i;
printf("Enter first string: ");
scanf("%[^\n]",str1);
getchar();
printf("Enter second string: ");
scanf("%[^\n]",str2);
if(strlen(str1)!=strlen(str2)){
printf("Strings are not anagrams");
return 0;
}
for(i=0;str1[i]!='\0';i++){
freq1[(int)str1[i]]++;
freq2[(int)str2[i]]++;
}
for(i=0;i<256;i++){
if(freq1[i]!=freq2[i]){
printf("Strings are not anagrams");
return 0;
}}
printf("Strings are anagrams");
return 0;
}
