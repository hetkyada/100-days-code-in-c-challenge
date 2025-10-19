//Read and print a matrix.(2D Arrays)
#include<stdio.h>
int main(){
int m,n,i,j;
printf("Enter number of rows and columns: ");
scanf("%d %d",&m,&n);
int mat[m][n];
printf("Enter elements of the matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&mat[i][j]);
printf("Matrix is:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d ",mat[i][j]);
printf("\n");
}
return 0;
}
