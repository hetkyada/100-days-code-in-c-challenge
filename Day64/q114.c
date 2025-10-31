//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int n=strlen(s),max=0,start=0,last[256];
    for(int i=0;i<256;i++)last[i]=-1;
    for(int i=0;i<n;i++){
        if(last[(int)s[i]]>=start)start=last[(int)s[i]]+1;
        last[(int)s[i]]=i;
        if(i-start+1>max)max=i-start+1;
    }
    printf("%d",max);
    return 0;
}
