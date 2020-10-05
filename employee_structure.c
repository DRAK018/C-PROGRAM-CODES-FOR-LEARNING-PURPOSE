#include<stdio.h>
int main()
    {
        int n,i;
        struct employee
        {
            char name[20];
            int id;
            int salary;
        };
        struct employee e[3];
        printf("Enter the number of employees: ");
        scanf("%d",&n);
        printf("Enter the employee details: ");
        for(i=0;i<n;i++)
            scanf("%s %d %d",&e[i].name,&e[i].id,&e[i].salary);
        printf("|Name         |ID       |Salary    |\n");
        for(i=0;i<n;i++)
            printf("|%s          |%d      |%d        |\n",e[i].name,e[i].id,e[i].salary);
        return 0;

    }
