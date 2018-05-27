#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

typedef struct node {
    char data [255];
    int index;
    struct node* previous;
    struct node* next;
}data_list;

void print_home();
int add_to_list(data_list*);
int insert_to_list(data_list*);

#endif // LINKEDLIST_H_INCLUDED
