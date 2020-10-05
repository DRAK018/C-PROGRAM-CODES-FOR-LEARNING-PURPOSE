#include<stdio.h>
int main()
    {
        int i,n,a[100];
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        int *p;
        p=&a[0];
        printf("Enter the elements: ");
        for(i=0;i<n;i++)
            scanf("%d",p+i);
        for(i=0;i<n;i++)
                printf("%d\t",*(p+i));
        return 0;
    }
