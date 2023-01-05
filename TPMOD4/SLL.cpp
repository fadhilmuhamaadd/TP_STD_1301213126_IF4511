#include "SLL.h"

void Create_list_1301213126(List &FA){
    first(FA) = NULL;
}

adr newElement_1301213126(infotype x){
    adr P = new element;
    info (P) = x;
    next(P) = NULL;
    return P;
}

void insert_first_1301213126(List &FA, adr p){
    if (first (FA) == NULL){
        first(FA) = p;
    }else{
        next(p) = first(FA);
        first(FA) = p;
    }
}

void Show_1301213126(List FA){
    if (first (FA) != NULL){
        adr p = first (FA);
        while(p!=NULL){
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    }else{
        cout << "List Kosong" << endl;
    }
}

adr DeleteLast_1301213126(List &FA){
    adr p, q;
    if (first(FA) == NULL){
        p = NULL;
        cout << "List Kosong" << endl;
    }else if (next(first(FA)) == NULL){
        p = first(FA);
        first(FA) = NULL;
    }else{
        q = first(FA);
        p = first(FA);
        while (next(p)!=NULL){
            q = p;
            p = next(p);
        }
        next(q) = NULL;
    }
    return p;
}

adr DeleteFirst_1301213126(List &FA){
    adr p;
    p = first(FA);
    first(FA) = next(p);
    next(p) = NULL;

    return p;
}
