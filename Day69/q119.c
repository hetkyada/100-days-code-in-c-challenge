//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include<stdio.h>
int main(){
    int n,xor1=0,xor2=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        xor1^=arr[i];
        xor2^=i;
    }
    printf("%d",xor1^xor2);
    return 0;
}
