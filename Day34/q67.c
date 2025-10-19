//Insert an element in an array at a given position.(Arrays (1D))
#include<stdio.h>
int main(){
int n,i,pos,num;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n+1];
printf("Enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter position to insert (1 to %d): ",n+1);
scanf("%d",&pos);
printf("Enter element to insert: ");
scanf("%d",&num);
for(i=n;i>=pos;i--)
arr[i]=arr[i-1];
arr[pos-1]=num;
printf("Array after insertion:\n");
for(i=0;i<=n;i++)
printf("%d ",arr[i]);
return 0;
}
