//Read and print elements of a one-dimensional array.(Arrays (1D))
#include<stdio.h>
int main(){
int a[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
printf("%d\n",a[i]);
}
return 0;
}
