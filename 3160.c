#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char nome[50];
    struct Node *next;
} Node;

// Função para criar um novo nó
Node* criarNo(char *nome) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    strcpy(novoNo->nome, nome);
    novoNo->next = NULL;
    return novoNo;
}

// Função para adicionar um nó ao final da lista
void adicionarAoFinal(Node **head, char *nome) {
    Node* novoNo = criarNo(nome);
    if (*head == NULL) {
        *head = novoNo;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = novoNo;
    }
}

// Função para inserir novos amigos antes de um nome específico
void inserirAntes(Node **head, char *nomeIndicacao, Node *novosAmigos) {
    Node *temp = *head;
    Node *prev = NULL;

    // Procura o nó onde a indicação foi encontrada
    while (temp != NULL && strcmp(temp->nome, nomeIndicacao) != 0) {
        prev = temp;
        temp = temp->next;
    }

    // Se encontrou a indicação
    if (temp != NULL) {
        if (prev == NULL) {
            // Insere no início se a indicação estiver no primeiro nó
            Node *ultimoNovo = novosAmigos;
            while (ultimoNovo->next != NULL) {
                ultimoNovo = ultimoNovo->next;
            }
            ultimoNovo->next = *head;
            *head = novosAmigos;
        } else {
            // Insere no meio da lista
            prev->next = novosAmigos;
            Node *ultimoNovo = novosAmigos;
            while (ultimoNovo->next != NULL) {
                ultimoNovo = ultimoNovo->next;
            }
            ultimoNovo->next = temp;
        }
    } else {
        // Se não encontrou a indicação, insere ao final da lista
        Node *ultimoNovo = novosAmigos;
        while (ultimoNovo->next != NULL) {
            ultimoNovo = ultimoNovo->next;
        }
        if (*head == NULL) {
            *head = novosAmigos;
        } else {
            prev->next = novosAmigos;
        }
    }
}

// Função para imprimir a lista de amigos
void imprimirLista(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%s", temp->nome);
        if (temp->next != NULL) printf(" ");
        temp = temp->next;
    }
    printf("\n");
}

// Função para liberar a lista
void liberarLista(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    char amigos_atual[200], novos_amigos[200], indicacao[50];
    Node *listaAmigos = NULL;
    Node *listaNovosAmigos = NULL;
    char *token;

    // Lê as listas de amigos e a indicação
    fgets(amigos_atual, 200, stdin);
    fgets(novos_amigos, 200, stdin);
    fgets(indicacao, 50, stdin);

    // Remove o '\n' do final de cada string, se presente
    amigos_atual[strcspn(amigos_atual, "\n")] = 0;
    novos_amigos[strcspn(novos_amigos, "\n")] = 0;
    indicacao[strcspn(indicacao, "\n")] = 0;

    // Preenche a lista de amigos atuais
    token = strtok(amigos_atual, " ");
    while (token != NULL) {
        adicionarAoFinal(&listaAmigos, token);
        token = strtok(NULL, " ");
    }

    // Preenche a lista de novos amigos
    token = strtok(novos_amigos, " ");
    while (token != NULL) {
        adicionarAoFinal(&listaNovosAmigos, token);
        token = strtok(NULL, " ");
    }

    // Insere os novos amigos antes do indicado, ou ao final se "nao"
    if (strcmp(indicacao, "nao") == 0) {
        Node *temp = listaAmigos;
        if (temp == NULL) {
            listaAmigos = listaNovosAmigos;
        } else {
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = listaNovosAmigos;
        }
    } else {
        inserirAntes(&listaAmigos, indicacao, listaNovosAmigos);
    }

    // Imprime a lista de amigos atualizada
    imprimirLista(listaAmigos);

    // Libera a memória alocada
    liberarLista(listaAmigos);

    return 0;
}


