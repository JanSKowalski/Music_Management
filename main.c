#include <stdio.h>
#include <stdlib.h>

#include "sll_header.h"


void main(){
  //struct song_node *linked_list = (struct song_node*)calloc(1, sizeof(struct song_node)); //will point to the first node

char * name = "I'll make a man out of you";
char * artist = "Donny Osmond";
struct song_node * linked_list = insert_front( (struct song_node*)calloc(1, sizeof(struct song_node)), name, artist);
  //
  // linked_list->name = name;
  // linked_list->artist = artist;

  linked_list=insert_front(linked_list, "Chandelier", "Sia");
  linked_list=insert_front(linked_list, "How Far I'll Go", "Lin-Manuel Miranda");
  linked_list=insert_front(linked_list, "Legends Never Die", "Against The Current");
  linked_list=insert_front(linked_list, "Look What You Made Me Do", "Taylor Swift");
  print_list(linked_list);

printf("\n\n freeing list... ");

  linked_list = free_list(linked_list);
  if(linked_list){
    print_list(linked_list);
  }
}
