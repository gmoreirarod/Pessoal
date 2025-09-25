#include <stdio.h>

// Estrutura para representar uma carta de cidade
struct CartaCidade {
    char estado[50];
    int codigo;
    char nome[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

// Função para calcular os atributos derivados
void calcularAtributos(struct CartaCidade *cidade) {
    cidade->densidadePopulacional = cidade->populacao / cidade->area;
    cidade->pibPerCapita = cidade->pib / cidade->populacao;
}

// Função para exibir a carta
void exibirCarta(struct CartaCidade cidade) {
    printf("\n===== CARTA SUPER TRUNFO =====\n");
    printf("Cidade: %s\n", cidade.nome);
    printf("Estado: %s\n", cidade.estado);
    printf("Código: %d\n", cidade.codigo);
    printf("População: %d habitantes\n", cidade.populacao);
    printf("PIB: R$ %.2f bilhões\n", cidade.pib);
    printf("Área: %.2f km²\n", cidade.area);
    printf("Pontos Turísticos: %d\n", cidade.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", cidade.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", cidade.pibPerCapita);
    printf("==============================\n");
}

int main() {
    struct CartaCidade cidade;

    printf("Cadastro de Carta - Super Trunfo\n");

    printf("Nome da cidade: ");
    fgets(cidade.nome, sizeof(cidade.nome), stdin);

    printf("Estado: ");
    fgets(cidade.estado, sizeof(cidade.estado), stdin);

    printf("Código da cidade: ");
    scanf("%d", &cidade.codigo);

    printf("População: ");
    scanf("%d", &cidade.populacao);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &cidade.pib);

    printf("Área (em km²): ");
    scanf("%f", &cidade.area);

    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade.pontosTuristicos);

    // Calcula os atributos derivados
    calcularAtributos(&cidade);

    // Exibe a carta
    exibirCarta(cidade);

    return 0;
}
