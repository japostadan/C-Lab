//#include "list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
    int data;
    t_list *next;
};


int cmp(int a,int b)
{
    return (a <= b);
}

t_list *creat_l(int data)
{
    t_list *node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = data;
    node->next =NULL;
    return node;
}

void p_list(t_list *head)
{
    while(head)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}
void free_l(t_list *head)
{
    t_list *tmp;
    while(head)
    {
        tmp = head;
		head=head->next;
        free(tmp);
    }
}

t_list *sort_list(t_list *lst, int (*cmp)(int,int))
{
    t_list *curr;
    int tmp;
    int sorted;
    if(!lst)
        return NULL;
    sorted = 0;

    while(!sorted)
    {
        sorted = 1;
        curr = lst;
        while(curr->next)
        {
            if(!cmp(curr->data,curr->next->data))
            {
                tmp=curr->data;
                curr->data = curr->next->data;
                curr->next->data = tmp;
                sorted = 0;
            }
            curr = curr->next;
        }
    }
    return lst;
}

#include <stdio.h>

int main()
{
    t_list *test=creat_l(4);
    test->next=creat_l(3);
    test->next->next=creat_l(42);
    test->next->next->next=creat_l(2);

    printf("Orig\n");
    p_list(test);
    printf("\n");
    test=sort_list(test, cmp);
    printf("New\n");
    p_list(test);
    printf("\n");

    free_l(test);
    return 0;
}
