#include "stdio.h"

struct employee
{
char *empname;
int empid ;

};
int main()
{
    struct employee emp1={"waheed",1001},emp2={"w7w7",1002},emp3={"w7",1003};
    struct employee (*arr[])={&emp1,&emp2,&emp3};
    struct employee(*(*pt)[3])=&arr;
    printf("employee name : %s \n",(**(*pt+1)).empname);
    printf("ID : %d",(*(*pt+1))->empid);

}
