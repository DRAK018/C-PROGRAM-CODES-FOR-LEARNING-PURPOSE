#include<stdio.h>
int main()
    {
        int n,a[100],i,search_item,flag=0;
        printf("Enter the number of array elements: ");
        scanf("%d",&n);
        printf("Enter the array elements: ");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("Enter the search element: ");
        scanf("%d",&search_item);
        for(i=0;i<n;i++)
                if(a[i]==search_item)
                    {
                        flag=i;
                        break;
                    }
        if(flag==i)
            printf("%d is present at array index=%d",search_item,i);
        else
            printf("%d is not present in the array",search_item);
        return 0;
    }
