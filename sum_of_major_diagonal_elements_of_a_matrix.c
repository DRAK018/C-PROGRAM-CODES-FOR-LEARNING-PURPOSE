#include<stdio.h>
int main()
    {
        int mat[10][10],n,i,j,sum=0;
        printf("Enter the rows/columns of square matrix: ");
        scanf("%d",&n);
        printf("Enter the elements: ");
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&mat[i][j]);
        printf("Major diagonal elements are: \n");
        for(i=0;i<n;i++)
            {
                printf("%d \t",mat[i][i]);
                sum=sum+mat[i][i];
            }
        printf("\nSum of the diagonal elements is: %d",sum);
        return 0;
    }
