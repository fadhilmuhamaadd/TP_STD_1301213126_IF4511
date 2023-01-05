#include "stack.h"

void createstack_1301213126(stack &S){
    top(S) = 0;
}

bool isEmpty_1301213126(stack S){
    if(top(S) == 0){
        return true;
    }else{
        return false;
    }
}

bool isFull_1301213126(stack S){
    if(top(S) == 15){
        return true;
    }else{
        return false;
    }
}

void push_1301213126(stack &S, infotype x){
    if(isFull_1301213126(S) == false){
        top(S) = top(S)+1;
        info(S)[top(S)] = x;
    }
}

int pop_1301213126(stack &S){
    infotype x;
    x = info(S)[top(S)];
    top(S)=top(S)-1;
    return x;
}

void printinfo_1301213126(stack S){
    int i;
    if(isEmpty_1301213126(S) == true){
        cout<<"Kosong"<<endl;
    }else{
        for(i = top(S); i > 0; i--){
            cout<<info(S)[i];
        }
        cout<<endl;
    }
}
