//Print each character of a string on a new line.(Strings)
#include<stdio.h>
int main(){
char str[100];
int i;
printf("Enter a string: ");
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
printf("%c\n",str[i]);
return 0;
}
