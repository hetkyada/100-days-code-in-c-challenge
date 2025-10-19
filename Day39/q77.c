//Check if the elements on the diagonal of a matrix are distinct.(2D Arrays)
#include<stdio.h>
int main(){
int n,i,j,distinct=1;
printf("Enter the order of square matrix: ");
scanf("%d",&n);
int mat[n][n];
printf("Enter elements of the matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&mat[i][j]);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(mat[i][i]==mat[j][j]){
distinct=0;
break;
}
if(distinct)
printf("Diagonal elements are distinct");
else
printf("Diagonal elements are not distinct");
return 0;
}
