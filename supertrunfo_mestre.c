#include <stdio.h>

int main() {
    char state1[20], idcarta1[5], city1[20];
    char state2[20], idcarta2[5], city2[20];

    unsigned long int pplation1, pplation2;
    float densippltion1, densippltion2;
    float area1, area2;
    float pib1, pib2;
    float pbprcap1, pbprcap2;
    int pntoturis1, pntoturis2;
    float superpoder1, superpoder2;

    printf("==================================================\n");
    printf("📝 PREENCHIMENTO DA CARTA 1\n");
    printf("==================================================\n");
    printf("🌎 Estado: ");
    scanf("%s", state1);
    printf("🔢 Código: ");
    scanf("%s", idcarta1);
    printf("🏙️  Nome da cidade: ");
    scanf("%s", city1);
    printf("👥 População: ");
    scanf("%lu", &pplation1);
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
    scanf("%s", state2);
    printf("🔢 Código: ");
    scanf("%s", idcarta2);
    printf("🏙️  Nome da cidade: ");
    scanf("%s", city2);
    printf("👥 População: ");
    scanf("%lu", &pplation2);
    printf("📏 Área (km²): ");
    scanf("%f", &area2);
    printf("💰 PIB (milhões): ");
    scanf("%f", &pib2);
    printf("📸 Pontos Turísticos: ");
    scanf("%d", &pntoturis2);

    densippltion1 = pplation1 / area1;
    densippltion2 = pplation2 / area2;

    pbprcap1 = pib1 / pplation1;
    pbprcap2 = pib2 / pplation2;

    superpoder1 = (float)pplation1 + area1 + pib1 + pntoturis1 + pbprcap1 + (1.0 / densippltion1);
    superpoder2 = (float)pplation2 + area2 + pib2 + pntoturis2 + pbprcap2 + (1.0 / densippltion2);

    printf("\n==================================================\n");
    printf("📄 INFORMAÇÕES DA CARTA 1\n");
    printf("--------------------------------------------------\n");
    printf("🌎 Estado:                 %s\n", state1);
    printf("🔢 Código:                 %s\n", idcarta1);
    printf("🏙️  Cidade:                %s\n", city1);
    printf("📏 Área:                   %.2f km²\n", area1);
    printf("👤 População:              %lu habitantes\n", pplation1);
    printf("👥 Densidade Populacional: %.2f hab/km²\n", densippltion1);
    printf("💰 PIB:                    R$ %.2f milhões\n", pib1);
    printf("💵 PIB per Capita:         R$ %.6f\n", pbprcap1);
    printf("📸 Pontos Turísticos:      %d\n", pntoturis1);
    printf("🦸 Super Poder:            %.2f\n", superpoder1);

    printf("\n==================================================\n");
    printf("📄 INFORMAÇÕES DA CARTA 2\n");
    printf("--------------------------------------------------\n");
    printf("🌎 Estado:                 %s\n", state2);
    printf("🔢 Código:                 %s\n", idcarta2);
    printf("🏙️  Cidade:                %s\n", city2);
    printf("📏 Área:                   %.2f km²\n", area2);
    printf("👤 População:              %lu habitantes\n", pplation2);
    printf("👥 Densidade Populacional: %.2f hab/km²\n", densippltion2);
    printf("💰 PIB:                    R$ %.2f milhões\n", pib2);
    printf("💵 PIB per Capita:         R$ %.6f\n", pbprcap2);
    printf("📸 Pontos Turísticos:      %d\n", pntoturis2);
    printf("🦸 Super Poder:            %.2f\n", superpoder2);

    int comp_pop = pplation1 > pplation2;
    int comp_area = area1 > area2;
    int comp_pib = pib1 > pib2;
    int comp_tur = pntoturis1 > pntoturis2;
    int comp_dens = densippltion1 < densippltion2;
    int comp_pcap = pbprcap1 > pbprcap2;
    int comp_super = superpoder1 > superpoder2;

    printf("\n==================================================\n");
    printf("🧾 COMPARAÇÃO DE CARTAS:\n");
    printf("--------------------------------------------------\n");
    printf("População: Carta 1 venceu (%d)\n", comp_pop);
    printf("Área: Carta 1 venceu (%d)\n", comp_area);
    printf("PIB: Carta 1 venceu (%d)\n", comp_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comp_tur);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", comp_dens);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", comp_pcap);
    printf("Super Poder: Carta 1 venceu (%d)\n", comp_super);

    return 0;
}