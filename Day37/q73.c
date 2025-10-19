//Find the sum of each row of a matrix and store it in an array.(2D Arrays)
#include<stdio.h>
int main(){
int m,n,i,j;
printf("Enter number of rows and columns: ");
scanf("%d %d",&m,&n);
int mat[m][n],rowSum[m];
printf("Enter elements of the matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&mat[i][j]);
for(i=0;i<m;i++){
rowSum[i]=0;
for(j=0;j<n;j++)
rowSum[i]+=mat[i][j];
}
printf("Sum of each row:\n");
for(i=0;i<m;i++)
printf("Row %d: %d\n",i+1,rowSum[i]);
return 0;
}
