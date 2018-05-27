#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
int main()
{
    data_list* root = root_init();
    print_home();
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

}
int insert_to_list(data_list* root)
{

}

