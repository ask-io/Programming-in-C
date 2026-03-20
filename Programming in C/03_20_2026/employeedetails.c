// Employee Details
#include <stdio.h>

struct employee {
    char name[50];
    int ID;
    float salary;
};
int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee emp[n];
    for(int i = 0; i < n; i++) {
        printf("Enter Name, ID, Salary for Emp %d: ", i+1);
        scanf("%s %d %f", emp[i].name, &emp[i].ID, &emp[i].salary);
    }

    for(int i = 0; i < n; i++)
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].ID, emp[i].name, emp[i].salary);
    return 0;
}