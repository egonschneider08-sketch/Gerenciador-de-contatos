int main() {
    int opcao;

    do {
        printf("\n--- Agenda de Contatos ---\n");
        printf("1. Adicionar\n");
        printf("2. Listar\n");
        printf("3. Buscar\n");
        printf("4. Remover\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: adicionarContato(); break;
            case 2: listarContatos(); break;
            case 3: buscarContato(); break;
            case 4: removerContato(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}