//Remove all vowels from a string.(Strings)
#include<stdio.h>
int main(){
char str[100];
int i,j=0;
printf("Enter a string: ");
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++){
char ch=str[i];
if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
str[j++]=str[i];
}
str[j]='\0';
printf("String after removing vowels: %s",str);
return 0;
}
