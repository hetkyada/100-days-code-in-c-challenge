//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int total=n*(n+1)/2;
    printf("%d",total-sum);
    return 0;
}
