#include "Queue.h"

void createPlaylist_1301213126(playlistlagu &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}

void createElement_1301213126(infotype lagubaru, adr &pLagu){
    pLagu = new element;
    info(pLagu) = lagubaru;
    next(pLagu) = NULL;
}

void enqueue_1301213126(playlistlagu &Q, adr pLagu){
    if(head(Q) == NULL){
        head(Q) = pLagu;
        tail(Q) = pLagu;
    }else{
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
    }
}

void dequeue_1301213126(playlistlagu &Q, adr &pLagu){
    if(tail(Q) == NULL) return;
    if(tail(Q) == head(Q)){
        head(Q) = NULL;
        tail(Q) = NULL;
    }else{
        adr P = head(Q);
        head(Q) = next(P);
        next(P) = NULL;
    }
}

void showsemualagu(playlistlagu Q){
    adr a = head(Q);
    while(a != NULL){
        cout << "Artis : " << info(a).artis << "\nJudul : " << info(a).judul << endl;
        a = next(a);
    }
    cout<<endl;
}
