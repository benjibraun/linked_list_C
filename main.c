#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
int main()
{
    data_list* root = malloc(sizeof(data_list));
    root->next = NULL;
    print_home();
    return 0;
}
void print_home(){
    printf("Select\n");
    printf("============================\n");
    printf("a = add \n");
    printf("i = insert\n");
    printf("p = print\n");
    printf("x = print by index\n");
    printf("d = destruct\n");
}
int add_to_list(data_list* root)
{

}
int insert_to_list(data_list* root)
{

}

