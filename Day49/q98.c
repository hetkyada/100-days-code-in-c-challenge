//Print initials of a name with the surname displayed in full.(Strings)
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,lastSpace=-1;
printf("Enter a full name: ");
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++){
if(str[i]==' ')
printf("%c. ",str[i-1]);
if(str[i]==' ')
lastSpace=i;
}
printf("%s",str+lastSpace+1);
return 0;
}
