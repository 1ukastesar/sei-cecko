#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

#define STUDENT_COUNT 3
#define NAME_MAX_LEN 20

typedef struct {
    int id;
    char name[NAME_MAX_LEN];
    float height;
} Student;

int find_tallest(Student students[]);

int main() {
    
    int i;
    Student students[STUDENT_COUNT];

    for(i = 0; i < STUDENT_COUNT; i++) {

        printf("\nZadejte parametry %i. studenta: \n", i + 1);
        printf("ID: ");
        scanf("%i", &students[i].id);
        printf("Jmeno: ");
        scanf("%s", &students[i].name);
        printf("Vyska (v metrech): ");
        scanf("%f", &students[i].height);
    }

    int tallest_student = find_tallest(students);
    printf("\n");
    printf("Nejvyssi student s ID %i ma %g m a jmenuje se %s.", students[tallest_student].id, 
                                                                students[tallest_student].height, 
                                                                students[tallest_student].name);

    pause();
}

int find_tallest(Student students[]) {
    int i;
    int max_height = 0;
    for (i = 0; i < STUDENT_COUNT; i++) {
        if(students[i].height > students[max_height].height) {
            max_height = i;
        }
    }
    return max_height;
}