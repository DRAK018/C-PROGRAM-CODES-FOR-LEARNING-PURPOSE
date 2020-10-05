#include<stdio.h>
int main()
    {
        int m1,n1,m2,n2,row,col,a[10][10],b[10][10],sum[10][10];
        printf("Enter the row and column size of first matrix: ");
        scanf("%d%d",&m1,&n1);
        printf("Enter the row and column size of second matrix: ");
        scanf("%d%d",&m2,&n2);

        printf("Enter the elements of first matrix: ");
        for(row=0;row<m1;row++)
            for(col=0;col<n1;col++)
                scanf("%d",&a[row][col]);

        printf("Enter the elements of second matrix: ");
        for(row=0;row<m2;row++)
            for(col=0;col<n2;col++)
                scanf("%d",&b[row][col]);

        for(row=0;row<m1;row++)
            for(col=0;col<n1;col++)
                sum[row][col]=a[row][col]+b[row][col];

        printf("Sum of matrices: \n");
        for(row=0;row<m1;row++)
            {
                for(col=0;col<n1;col++)
                    {
                        printf("%d \t",sum[row][col]);
                    }
                printf("\n");
            }
        return 0;
    }
