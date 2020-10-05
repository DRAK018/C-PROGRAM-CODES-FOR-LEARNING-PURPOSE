#include<stdio.h>
int main()
    {
        int i,j;
        char a[15],b[15],c[30];
        printf("Enter the string1: ");
        gets(a);
        printf("Enter the string2: ");
        gets(b);
        for(i=0;a[i]!='$';i++)
            c[i]=a[i];
            c[i]=' ';
        for(j=0;b[j]!='$';j++)
            c[i+j+1]=b[j];
            c[i+j+1]='\0';
         puts(c);
         return 0;
    }
