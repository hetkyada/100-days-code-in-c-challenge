//Find the second largest element in an array.(Arrays (1D))
#include<stdio.h>
int main(){
int n,i,largest,second;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
if(n<2){
printf("Array must have at least two elements");
return 0;
}
largest=second=arr[0];
for(i=1;i<n;i++){
if(arr[i]>largest){
second=largest;
largest=arr[i];
}
else if(arr[i]>second && arr[i]<largest)
second=arr[i];
}
printf("Second largest element: %d",second);
return 0;
}
