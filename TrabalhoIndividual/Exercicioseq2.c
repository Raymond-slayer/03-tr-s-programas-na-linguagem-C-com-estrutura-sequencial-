 #include <stdio.h>

int main() {
    float largura, altura, area;

    // Leitura das dimens�es do ret�ngulo
    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    // Calcula a �rea
    area = largura * altura;

    // Exibe o resultado
    printf("A area do retangulo e: %.2f\n", area);

    return 0;
}
