#include<stdio.h>
int main()
    {
        FILE *f1,*f2,*f3;
        char ch;
        f1=fopen("file1.txt","r");
        f2=fopen("file2.txt","r");
        f3=fopen("merge.txt","w");
        while(1)
            {
                ch=fgetc(f1);
                if(ch!=EOF)
                    fputc(ch,f3);
                else
                    break;
            }
        while(1)
                {
                    ch=fgetc(f2);
                    if(ch!=EOF)
                        fputc(ch,f3);
                    else
                        break;
                }
        printf("Successfully Merged");
        fclose(f1);
        fclose(f2);
        fclose(f3);
        return 0;
    }
