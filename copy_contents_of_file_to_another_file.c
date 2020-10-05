#include<stdio.h>
int main()
    {
        char ch;
        FILE *f1,*f2;
        f1=fopen("sample.txt","r");
        f2=fopen("test.txt","w");
        while((ch=fgetc(f1))!=EOF)
            {
                fputc(ch,f2);
            }
        fclose(f1);
        fclose(f2);
        printf("Successfully copied");
        return 0;
    }
