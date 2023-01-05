#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    playlistlagu Q;
    createPlaylist_1301213126(Q);
    infotype x;
    adr P, K;
    x.artis = "Frank Ocean";
    x.judul = "Ivy";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "The Weeknd";
    x.judul = "Starboy";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Neckdeep";
    x.judul = "Wish you were here";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Daniel Caesar";
    x.judul = "Japanese Denim";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Rex Orange County";
    x.judul = "Pluto Projector";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Simple Plan";
    x.judul = "i'm just a kid";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Bring Me The Horizon";
    x.judul = "Throne";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "The Weeknd";
    x.judul = "The Hills";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Frank Ocean";
    x.judul = "Lost";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Reality Club";
    x.judul = "Telenovia";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Boy Pablo";
    x.judul = "Sick Feeling";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Kanye West";
    x.judul = "Heartless";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Joji";
    x.judul = "Sanctuary";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Arctic Monkeys";
    x.judul = "R U Mine?";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Cigarettes After Sex";
    x.judul = "Sweet";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "Khalid";
    x.judul = "American Teen";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);

    x.artis = "The Smiths";
    x.judul = "Please, Please, Please, Let Me Get What I Want";
    createElement_1301213126(x, P);
    enqueue_1301213126(Q,P);
    showsemualagu(Q);
    dequeue_1301213126(Q,K);
    showsemualagu(Q);

    return 0;
}
