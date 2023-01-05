#include "CSLL.h"

int main()
{
    listlagu L;
    create_list_1301213126(L);
    infotype q;
    adr P;
    q.Artis = "Neck Deep";
    q.Judul = "wish you were here";
    q.Genre = "Pop punk";
    q.playtime = 408;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "post malone";
    q.Judul = "wow.";
    q.Genre = "hip hop";
    q.playtime = 229;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Bring Me The Horizon";
    q.Judul = "Drown";
    q.Genre = "rock";
    q.playtime = 342;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Bring Me The Horizon";
    q.Judul = "Throne";
    q.Genre = "rock";
    q.playtime = 311;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Bring Me The Horizon";
    q.Judul = "Happy Song";
    q.Genre = "rock";
    q.playtime = 359;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "The Weeknd";
    q.Judul = "The Hills";
    q.Genre = "Pop";
    q.playtime = 402;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "The Weeknd";
    q.Judul = "Starboy";
    q.Genre = "Pop";
    q.playtime = 350;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Khalid";
    q.Judul = "American Teen";
    q.Genre = "Pop";
    q.playtime = 411;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Oasis";
    q.Judul = "Don't Look Back In Anger";
    q.Genre = "Pop";
    q.playtime = 450;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Daniel Caesar";
    q.Judul = "Best Part";
    q.Genre = "Pop";
    q.playtime = 431;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Daniel Caesar";
    q.Judul = "Japanese Denim";
    q.Genre = "Pop";
    q.playtime = 431;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Joji";
    q.Judul = "Santuary";
    q.Genre = "Pop";
    q.playtime = 300;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Cigarette after sx";
    q.Judul = "Sweet";
    q.Genre = "Indie";
    q.playtime = 452;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Cigarette after sx";
    q.Judul = "Apocalypse";
    q.Genre = "Indie";
    q.playtime = 451;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Frank Ocean";
    q.Judul = "Ivy";
    q.Genre = "Pop";
    q.playtime = 409;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Frank Ocean";
    q.Judul = "Nights";
    q.Genre = "Pop";
    q.playtime = 507;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    q.Artis = "Twenty One Pilots";
    q.Judul = "The Hype";
    q.Genre = "Pop Punk";
    q.playtime = 425;
    P = createElement_1301213126(q);
    insertlast_1301213126(L,P);

    showSemualagu_1301213126(L);

    deletefirst_1301213126(L);

    showSemualagu_1301213126(L);
    return 0;
}

