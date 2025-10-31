//Write a program to take a string input. Change it to sentence case.
#include<stdio.h>
#include<ctype.h>
int main(){
    char s[1000];
    int i=0;
    gets(s);
    if(s[0]>='a'&&s[0]<='z')s[0]-=32;
    for(i=1;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
    }
    printf("%s",s);
    return 0;
}
