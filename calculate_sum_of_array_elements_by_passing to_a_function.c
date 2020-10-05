#include<stdio.h>
float calculate_sum(float age[]);
int main()
    {
        float result,age[]={23.4,55,22.6,3,40.5,18};
        result=calculate_sum(age);
        printf("Result=%.2f",result);
        return 0;
    }
float calculate_sum(float age[])
    {
        float sum=0.0;
        for(int i=0;i<6;i++)
            {
                sum=sum+age[i];
            }
        return sum;
    }
