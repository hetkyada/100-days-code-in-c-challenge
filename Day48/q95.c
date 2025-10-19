//Check if one string is a rotation of another.(Strings)
#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100],concat[200];
printf("Enter first string: ");
scanf("%[^\n]",str1);
getchar();
printf("Enter second string: ");
scanf("%[^\n]",str2);
if(strlen(str1)!=strlen(str2)){
printf("Not a rotation");
return 0;
}
strcpy(concat,str1);
strcat(concat,str1);
if(strstr(concat,str2)!=NULL)
printf("Second string is a rotation of first");
else
printf("Not a rotation");
return 0;
}
