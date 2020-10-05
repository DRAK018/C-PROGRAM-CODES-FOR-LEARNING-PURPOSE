#include<stdio.h>
int sum(int b[10][10],int);
int main()
    {
        int n,i,j,result,a[10][10];
        scanf("%d",&n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        result=sum(a,n);
        printf("Sum=%d",result);
        return 0;
    }
int sum(int b[10][10],int n)
    {
        int i,j,sum=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
        sum=sum+b[i][j];
        return sum;
    }
