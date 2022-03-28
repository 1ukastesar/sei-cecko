#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

#define EMPLOYEE_COUNT 5

typedef struct {
    int id;
    int salary;
} Employee;

int main() {
    
    int i;
    Employee employees[EMPLOYEE_COUNT];

    for (i = 0; i < EMPLOYEE_COUNT; i++)
    {
        printf("\nZadejte parametry %i. zamestnance: \n", i + 1);
        printf("ID: ");
        scanf("%i", &employees[i].id);
        printf("Plat: ");
        scanf("%i", &employees[i].salary);
    }
    
    int most_expensive = 0;
    for (i = 0; i < EMPLOYEE_COUNT; i++)
    {
        if(employees[i].salary > employees[most_expensive].salary)
            most_expensive = i;
    }
    
    printf("\n");
    printf("Zamestnanec s nejvyssim platem ma ID %i a jeho plat cini %i Kc.", employees[most_expensive].id, 
                                                                              employees[most_expensive].salary);

    pause();
}