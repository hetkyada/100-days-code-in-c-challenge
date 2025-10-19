//Find the longest word in a sentence.(Strings)
#include<stdio.h>
#include<string.h>
int main(){
char str[200],word[100],longest[100];
int i,j,len,maxlen=0;
printf("Enter a sentence: ");
scanf("%[^\n]",str);
i=0;
while(str[i]!='\0'){
j=0;
while(str[i]!=' ' && str[i]!='\0')
word[j++]=str[i++];
word[j]='\0';
len=strlen(word);
if(len>maxlen){
maxlen=len;
strcpy(longest,word);
}
if(str[i]!='\0') i++;
}
printf("Longest word: %s",longest);
return 0;
}
