//Count characters in a string without using built-in length functions.(Strings)
#include<stdio.h>
int main(){
char str[100];
int i,count=0;
printf("Enter a string: ");
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
count++;
printf("Number of characters: %d",count);
return 0;
}
