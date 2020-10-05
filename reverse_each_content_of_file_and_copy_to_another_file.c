#include<stdio.h>
#include<string.h>
void main()
    {
        FILE *f1,*f2;
        int i,j;
        char str[30],rev[30];
        f1=fopen("merge.txt","r");
        f2=fopen("new.txt","w");
        while(feof(f1)==0)
            {
                fscanf(f1,"%s",str);
                j=0;
                for(i=strlen(str)-1;i>=0;i--)
                    {
                        rev[j]=str[i];
                        j++;
                    }
                rev[j]='\0';
                fprintf(f2,"%s",rev);
            }
        fclose(f1);
        fclose(f2);
    }
