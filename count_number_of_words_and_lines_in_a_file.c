#include<stdio.h>
#include<string.h>
void main()
    {
        FILE *f1;
        int countW=0,countL=0;
        char ch;
        f1=fopen("New Text Document.txt","r");
        while(feof(f1)==0)
            {
                ch=fgetc(f1);
                if(ch==' ')
                    countW++;
                if(ch=='\n')
                    countL++;
            }
        printf("Count of words= %d\n",countW);
        printf("Count of lines= %d\n",countL);
        fclose(f1);
    }
