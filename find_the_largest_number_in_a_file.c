#include<stdio.h>
int main()
    {
        FILE *f1;
        int large,num;
        f1=fopen("number.txt","r");
        fscanf(f1,"%d",&large);
        while(feof(f1)==0)
            {
                fscanf(f1,"%d",&num);
                if(large<num)
                    {
                        large=num;
                    }
            }
        fclose(f1);
        printf("Largest element= %d",large);
        return 0;
    }
