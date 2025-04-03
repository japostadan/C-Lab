/*Assignment name  : ft_list_size                                                 */
/*Expected files   : ft_list_size.c                                               */
/*Allowed functions:                                                              */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write a function that returns the number of elements in the linked list that's  */
/*passed to it.                                                                   */
/*                                                                                */
/*It must be declared as follows:                                                 */
/*                                                                                */
/*int     ft_list_size(t_list *begin_list);                                       */
/*                                                                                */
/*You must use the following structure in your program ft_list_size.c :           */
/*                                                                                */
/*typedef struct    s_list                                                        */
/*{                                                                               */
/*    struct s_list *next;                                                        */
/*    void          *data;                                                        */
/*}                 t_list;                                                       */
/*________________________________________________________________________________*/
/*
 * given the list is not empty the given parameter is the beginning of the list
 * that is why we begin at 1;
 */
typedef struct    s_list
{                       
    struct s_list *next;
    void          *data;
}                 t_list;

int ft_list_size(t_list *begin_list)
{
    int i = 1;
    while (list->next)
    {
        list=list->next;
        i++;
    }
    return i;
}
