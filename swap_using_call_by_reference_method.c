#include<stdio.h>
int swap(int *a,int *b);
void main()
    {
        int x,y;
        printf("Enter the numbers: ");
        scanf("%d %d",&x,&y);
        printf("Before swapping: x=%d \t y=%d \n",x,y);
        swap(x,y);
        printf("After swapping: x=%d \t y=%d \n",x,y);
    }
int swap(int *a,int *b)
        {
            int temp=*a;
            *a=*b;
            *b=temp;
        }
