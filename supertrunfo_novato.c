#include <stdio.h>

int main() {

    char state1[20], idcarta1[5], city1[20];
    char state2[20], idcarta2[5], city2[20];
    float pplation1, area1, pib1;
    float pplation2, area2, pib2;
    int pntoturis1;
    int pntoturis2;

    printf("==================================================\n");
    printf("📝 PREENCHIMENTO DA CARTA 1\n");
    printf("==================================================\n");

    printf("🌎 Estado: ");
    scanf("%s", &state1);

    printf("🔢 Código: ");
    scanf("%s", &idcarta1);

    printf("🏙️  Nome da cidade: ");
    scanf("%s", &city1);

    printf("👥 População: ");
    scanf("%f", &pplation1);

    printf("📏 Área (km²): ");
    scanf("%f", &area1);

    printf("💰 PIB (milhões): ");
    scanf("%f", &pib1);

    printf("📸 Pontos Turísticos: ");
    scanf("%d", &pntoturis1);

    printf("\n==================================================\n");
    printf("📝 PREENCHIMENTO DA CARTA 2\n");
    printf("==================================================\n");

    printf("🌎 Estado: ");
    scanf("%s", &state2);

    printf("🔢 Código: ");
    scanf("%s", &idcarta2);

    printf("🏙️  Nome da cidade: ");
    scanf("%s", &city2);

    printf("👥 População: ");
    scanf("%f", &pplation2);

    printf("📏 Área (km²): ");
    scanf("%f", &area2);

    printf("💰 PIB (milhões): ");
    scanf("%f", &pib2);

    printf("📸 Pontos Turísticos: ");
    scanf("%d", &pntoturis2);

    printf("\n==================================================\n");
    printf("📄 INFORMAÇÕES DA CARTA 1\n");
    printf("--------------------------------------------------\n");
    printf("🌎 Estado:                %s\n", state1);
    printf("🔢 Código:                %s\n", idcarta1);
    printf("🏙️  Cidade:               %s\n", city1);
    printf("👥 População:             %.1f habitantes\n", pplation1);
    printf("📏 Área:                  %.2f km²\n", area1);
    printf("💰 PIB:                   R$ %.2f milhões\n", pib1);
    printf("📸 Pontos Turísticos:     %d\n", pntoturis1);

    printf("\n==================================================\n");
    printf("📄 INFORMAÇÕES DA CARTA 2\n");
    printf("--------------------------------------------------\n");
    printf("🌎 Estado:                %s\n", state2);
    printf("🔢 Código:                %s\n", idcarta2);
    printf("🏙️  Cidade:               %s\n", city2);
    printf("👥 População:             %.1f habitantes\n", pplation2);
    printf("📏 Área:                  %.2f km²\n", area2);
    printf("💰 PIB:                   R$ %.2f milhões\n", pib2);
    printf("📸 Pontos Turísticos:     %d\n", pntoturis2);

    return 0;
}