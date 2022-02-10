#include<stdio.h>
#include<stdlib.h>

void pause();

int main() {
    pause();
}

void pause() {
    printf("\nStisknete jakoukoli klavesu pro ukonceni...");
    getc(stdin);
}