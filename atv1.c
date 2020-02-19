#include "includes.c"

int main() {
    int day, month, year;

    printf("Informe sua data de nascimento..\n");

    printf("Dia: ");
    scanf("%d", &day);

    printf("Mês: ");
    scanf("%d", &month);

    printf("Ano: ");
    scanf("%d", &year);

    printf("Sua data de nascimento é %02d/%02d/%02d\n", day, month, year);

    return 1;
}