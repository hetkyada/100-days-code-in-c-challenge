//Check if a matrix is symmetric.(2D Arrays)
#include<stdio.h>
int main(){
int n,i,j,flag=1;
printf("Enter the order of square matrix: ");
scanf("%d",&n);
int mat[n][n];
printf("Enter elements of the matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&mat[i][j]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(mat[i][j]!=mat[j][i]){
flag=0;
break;
}
if(flag)
printf("Matrix is symmetric");
else
printf("Matrix is not symmetric");
return 0;
}
