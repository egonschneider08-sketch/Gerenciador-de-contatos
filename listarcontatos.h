void listarContatos() {
    if (total == 0) {
        printf("Nenhum contato cadastrado.\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("\nContato %d\n", i + 1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Email: %s\n", agenda[i].email);
    }
}