//Find the transpose of a matrix.(2D Arrays)
#include<stdio.h>
int main(){
int m,n,i,j;
printf("Enter number of rows and columns: ");
scanf("%d %d",&m,&n);
int mat[m][n],trans[n][m];
printf("Enter elements of the matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&mat[i][j]);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
trans[j][i]=mat[i][j];
printf("Transpose of the matrix:\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++)
printf("%d ",trans[i][j]);
printf("\n");
}
return 0;
}
