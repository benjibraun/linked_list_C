#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

typedef struct node {
    char data [255];
    int index;
    struct node* previous;
    struct node* next;
}data_list;

// variables
char command;
int esc;
int number_of_lists;

//functions
void print_home(void);
data_list* root_init(void);
int add_to_list(data_list*);
int insert_to_list(data_list*);
int print_list(data_list*);

#endif // LINKEDLIST_H_INCLUDED
