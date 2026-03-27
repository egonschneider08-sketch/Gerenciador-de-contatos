void adicionarContato() {
    if (total >= MAX) {
        printf("Agenda cheia!\n");
        return;
    }

    printf("Nome: ");
    scanf(" %[^\n]", agenda[total].nome);

    printf("Telefone: ");
    scanf(" %[^\n]", agenda[total].telefone);

    printf("Email: ");
    scanf(" %[^\n]", agenda[total].email);

    total++;
    printf("Contato adicionado com sucesso!\n");
}