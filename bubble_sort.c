#include<stdio.h>
int main()
    {
        int ar[25],n;
        int i,j,temp;
        printf("Enter the number of array elements: ");
        scanf("%d",&n);
        printf("Enter the array elements: ");
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        for(i=0;i<n;i++)
            printf("%d ",ar[i]);
        for(i=1;i<n;i++)
            for(j=0;j<n-1;j++)
                if(ar[j]>ar[j+1])
                    {
                        temp=ar[j];
                        ar[j]=ar[j+1];
                        ar[j+1]=temp;
                    }
        for(i=0;i<n;i++)
            printf("%d ",ar[i]);
        return 0;
    }
