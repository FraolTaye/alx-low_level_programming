#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* print_list - in the linked list it has elements and this will print that. 
* @m: the lists name 
* Return: nodes number.
*/
size_t print_list(const list_t *h)
{
   int y = 0;
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
       y++;
       m = m->next;
   }
   return (y);
}
