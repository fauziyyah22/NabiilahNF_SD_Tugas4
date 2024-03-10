#include <iostream>
using namespace std;

// Struktur data untuk node dalam linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk membuat node baru dengan nilai tertentu
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// Fungsi untuk menambahkan node baru ke akhir linked list
void insertNode(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Fungsi untuk menampilkan isi linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Fungsi untuk membalikkan linked list
Node* reverseList(Node* head) {
    Node *prev = nullptr, *current = head, *next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main() {
    Node* head = nullptr; // Inisialisasi linked list kosong

    // Menambahkan data ke linked list
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);
    insertNode(head, 7);
    insertNode(head, 8);
    insertNode(head, 9);
    insertNode(head, 10);

    cout << "Original Linked List: ";
    displayList(head);

    // Memanggil fungsi untuk membalikkan linked list
    head = reverseList(head);

    cout << "Reversed Linked List: ";
    displayList(head);

    cout << "\n";
    for (int j = 0; j < 60; j++) {
        cout << "=";}
    cout << "\nNama     : Nabiilah Nur Fauziyyah";
    cout << "\nNPM      : 2310631170105";
    cout << "\nKelas    : 2C - Informatika";
    cout << "\nProgram Linked List yang dapat membalikkan data (reverse) " << "\n";
    for (int j = 0; j < 60; j++) {
        cout << "=";}

    return 0;
}

