//Delete an element from an array.(Arrays (1D))
#include<stdio.h>
int main(){
int n,i,pos;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter position to delete (1 to %d): ",n);
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++)
arr[i]=arr[i+1];
printf("Array after deletion:\n");
for(i=0;i<n-1;i++)
printf("%d ",arr[i]);
return 0;
}
