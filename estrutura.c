#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[50];
    char telefone[20];
    char email[50];
} Contato;

Contato agenda[MAX];
int total = 0;