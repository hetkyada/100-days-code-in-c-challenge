//Print the initials of a name.(Strings)
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i;
printf("Enter a name: ");
scanf("%[^\n]",str);
if(str[0]!=' ')
printf("%c",str[0]);
for(i=0;str[i]!='\0';i++){
if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
printf("%c",str[i+1]);
}
return 0;
}
