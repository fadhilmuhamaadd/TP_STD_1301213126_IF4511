#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
using namespace std;

#define info(Q) (Q)->info
#define next(Q) (Q)->next
#define head(Q) (Q).head
#define tail(Q) (Q).tail

struct infotype{
    string artis;
    string judul;
};
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct playlistlagu {
    adr head;
    adr tail;
};

void createPlaylist_1301213126(playlistlagu &Q);
void createElement_1301213126(infotype lagubaru, adr &pLagu);
void enqueue_1301213126(playlistlagu &Q, adr pLagu);
void dequeue_1301213126(playlistlagu &Q, adr &pLagu);
void showsemualagu(playlistlagu Q);

#endif // QUEUE_H_INCLUDED
