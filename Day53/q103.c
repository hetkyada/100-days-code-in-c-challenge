//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include<stdio.h>
int main(){
int n,i,x,index=-1;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements in sorted order:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter x: ");
scanf("%d",&x);
int low=0,high=n-1,mid;
while(low<=high){
mid=(low+high)/2;
if(arr[mid]>=x){
index=mid;
high=mid-1;
}else{
low=mid+1;
}}
printf("Index of ceil element: %d",index);
return 0;
}
