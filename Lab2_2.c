#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
} Node;

Node* insert_before(Node* head, Node* p0, int d) {
    Node* new_node = (Node*)malloc(sizeof(Node));  // виділення пам'яті під новий вузол
    new_node->data = d;

    if (p0 == head) {  // вставка перед першим вузлом
        new_node->prev = NULL;
        new_node->next = p0;
        p0->prev = new_node;
        return new_node;
    }

    new_node->prev = p0->prev;   // вставка перед іншим вузлом
    new_node->next = p0;
    p0->prev->next = new_node;
    p0->prev = new_node;

    return new_node;
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));   // виділення пам'яті під перший вузол
    head->data = 1;  // присвоєння значення першому вузлу
    head->prev = NULL;
    head->next = NULL;

    Node* second = (Node*)malloc(sizeof(Node));  // виділення пам'яті під другий вузол
    second->data = 2;  // присвоєння значення другому вузлу
    second->prev = NULL;
    second->next = NULL;

    Node* third = (Node*)malloc(sizeof(Node));   // виділення пам'яті під третій вузол
    third->data = 3;  // присвоєння значення третьому вузлу
    third->prev = NULL;
    third->next = NULL;

    head->next = second;  // перший вузол вказує на другий вузол
    second->prev = head;
    second->next = third; // другий вузол вказує на третій вузол
    third->prev = second;
    third->next = NULL;   // третій вузол останній у списку

    printf("Before insertion: ");
    Node* curr = head;
    while (curr != NULL) {   // виведення всього списку
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");

    Node* new_node = insert_before(head, second, 4);  // вставка нового вузла зі значенням 4 перед другим вузлом

    printf("After insertion: ");
    curr = head;
    while (curr != NULL) {   // виведення всього списку
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}
