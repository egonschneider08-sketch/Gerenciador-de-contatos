void removerContato() {
    char nome[50];
    printf("Digite o nome para remover: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            for (int j = i; j < total - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            total--;
            printf("Contato removido!\n");
            return;
        }
    }

    printf("Contato não encontrado.\n");
}