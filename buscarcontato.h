void buscarContato() {
    char nome[50];
    printf("Digite o nome para buscar: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("\nEncontrado!\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Email: %s\n", agenda[i].email);
            return;
        }
    }

    printf("Contato não encontrado.\n");
}