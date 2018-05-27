#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
    number_of_lists = 0;
    data_list* root = root_init();
    number_of_lists++;
    print_home();
    add_to_list(root);
    print_list(root);
    return 0;
}
void print_home(void)
{
    printf("Select\n");
    printf("============================\n");
    printf("Crate list");
    printf("a = add \n");
    printf("i = insert\n");
    printf("p = print\n");
    printf("x = print by index\n");
    printf("d = destruct\n");
}
data_list* root_init(void)
{
    data_list* root;
    root = malloc(sizeof(data_list));
    root->next = NULL;
    return root;
}
int add_to_list(data_list* root)
{
    int index = 0;
        char buffer [255];
        printf("add to list: ");
        scanf("%s",&buffer);
        data_list* current=root;
        data_list* prev;
        while(current->next != NULL){

            prev=current;
            current = current->next;
            index++;

        }
        strcpy(current->data,buffer);
        current->previous = prev;
        current->next = malloc(sizeof(data_list));
        current->next->next = NULL;
}

int insert_to_list(data_list* root)
{

}

int print_list(data_list* root){
    data_list* current=root;
    while(current->next != NULL){
        printf("%s\n", current->data);
        printf("%p\n", current->previous);
        printf("%p\n", current->next);
        current = current->next;
        }
}

