#include <stdio.h>
#include <stdlib.h>
/*
typedef struct node {
    int data;           // значення вузла
    struct node* next;  // вказівник на наступний вузол
} Node;

Node* insert_before(Node* head, Node* p0, int d) {
    Node* new_node = (Node*)malloc(sizeof(Node));  // виділення пам'яті під новий вузол
    new_node->data = d;  // присвоєння значення новому вузлу
    new_node->next = p0; // новий вузол вказує на поточний вузол

    if (head == p0) {   // якщо поточний вузол - перший вузол списку, то новий вузол стає першим
        return new_node;
    }

    Node* curr = head;
    while (curr->next != p0) {   // пошук попереднього вузла перед поточним
        curr = curr->next;
    }
    curr->next = new_node;  // попередній вузол вказує на новий вузол

    return new_node;  // повертаємо вказівник на новий вузол
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));   // виділення пам'яті під перший вузол
    head->data = 1;  // присвоєння значення першому вузлу

    Node* second = (Node*)malloc(sizeof(Node));  // виділення пам'яті під другий вузол
    second->data = 2;  // присвоєння значення другому вузлу

    Node* third = (Node*)malloc(sizeof(Node));   // виділення пам'яті під третій вузол
    third->data = 3;  // присвоєння значення третьому вузлу

    head->next = second;  // перший вузол вказує на другий вузол
    second->next = third; // другий вузол вказує на третій вузол
    third->next = NULL;   // третій вузол останній у списку

    Node* p0 = second;  // вказівник на поточний вузол, перед яким треба вставити новий вузол
    int d = 4;          // значення нового вузла

    Node* new_node = insert_before(head, p0, d);   // вставка нового вузла перед поточним вузлом

    printf("New node: %d\n", new_node->data);   // виведення значення нового вузла
    printf("List: ");
    Node* curr = head;
    while (curr != NULL) {   // виведення всього списку
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}*/
