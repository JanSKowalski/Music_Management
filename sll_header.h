struct song_node{
	char * name;
	char * artist;
  struct song_node *next;
};

void print_list(struct song_node * current);

struct song_node * insert_front(struct song_node * front, char * song_name, char * song_artist);
struct song_node * insert_in_order(struct song_node * front, char * song_name, char * song_artist);
struct song_node * find_song(char * song_name);
struct song_node * find_artist(char * song_artist);
struct song_node * random_song();
struct song_node * free_list(struct song_node * list);
