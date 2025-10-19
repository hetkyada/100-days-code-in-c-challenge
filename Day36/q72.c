//Find the sum of all elements in a matrix.(2D Arrays)
#include<stdio.h>
int main(){
int m,n,i,j,sum=0;
printf("Enter number of rows and columns: ");
scanf("%d %d",&m,&n);
int mat[m][n];
printf("Enter elements of the matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&mat[i][j]);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
sum+=mat[i][j];
printf("Sum of all elements: %d",sum);
return 0;
}
