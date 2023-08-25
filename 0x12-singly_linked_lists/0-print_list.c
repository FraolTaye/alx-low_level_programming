#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* print_list - all the elements in the linked list are printed 
* @m: the disignation of the list 
* Return: node num
*/
size_t print_list(const list_t *h)
{
   int count = 0;
   while (m)
   {
       if (m->str == NULL)
       {
           printf("[0] (nil)\n");
       }
       else
       {
       printf("[%d] %s\n", m->len, m->str);
       }
       count++;
       m = m->next;
   }
   return (count);
}

