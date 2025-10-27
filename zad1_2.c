#include <stdio.h>

// Zmienna globalna – istnieje przez cały czas działania programu
int licznik = 0;

void funkcja() {
    int x = licznik++;
    printf("%d", x);
}

int main() {
    //printf("W main (globalna): licznik = %d\n", licznik);
    funkcja();
    funkcja();
    printf("Po powrocie do main: licznik = %d\n", licznik);
    return 0;
    
}


