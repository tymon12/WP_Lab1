#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok_urodzenia;
    float wzrost;
    char znak = 'A';
    bool prawko = true;

    printf("Jaki rok: ");
    scanf("%d", &rok_urodzenia);
    printf("Jaki Wzrost:  ");
    scanf("%f", &wzrost);
    

    printf("jestem urodzny w: %d roku i mam %f wzrostu");
    return 0;
}
