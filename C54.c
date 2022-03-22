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
    
    int id;
    Student students[STUDENT_COUNT];

    for(id = 1; id <= STUDENT_COUNT; id++) {
        students[id].id = id;

        printf("Zadejte parametry studenta s ID %i: \n", id);
        printf("Jmeno: ");
        scanf("%s", &students[id].name);
        printf("Vyska: ");
        scanf("%f", &students[id].height);
    }

    int tallest_id = find_tallest(students);
    printf("\n");
    printf("Nejvyssi student ma ID %i a jmenuje se %s.", tallest_id, students[tallest_id].name);

    pause();
}

int find_tallest(Student students[]) {
    int id;
    int tallest_id = 1;
    for (id = 1; id <= STUDENT_COUNT; id++) {
        if(students[id].height > students[tallest_id].height) {
            tallest_id = id;
        }
    }
    return tallest_id;
}