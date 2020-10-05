#include<stdio.h>
int main()
    {
        int i,j,n,a[100],temp;
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        int *p;
        p=&a[0];
        printf("Enter the elements: ");
        for(i=0;i<n;i++)
            scanf("%d",p+i);
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if(*(p+i)>*(p+j))
                    {
                        temp=*(p+i);
                        *(p+i)=*(p+j);
                        *(p+j)=temp;
                    }
        for(i=0;i<n;i++)
                printf("%d\t",*(p+i));
        return 0;
    }
