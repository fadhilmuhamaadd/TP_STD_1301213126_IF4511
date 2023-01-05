#include "SLL.h"
using namespace std;

int main()
{
    List FA;
    cout << "first(FA) sebelum createList : " << first(FA) << endl;

    Create_list_1301213126(FA);
    cout << "first(FA) setelah createList : " << first(FA) <<endl;
    cout << endl;

//newElement
    adr P;
    P = newElement_1301213126(100);
    cout << "Info(P): " << info(P) << endl;
    cout << "Next(P): " << next(P) << endl;
    cout << endl;

//insertFirst
    cout << "First(FA) sebelum insertFirst : "<< first(FA) << endl;
    insert_first_1301213126(FA, P);
    cout << "First(FA) setelah inserFirst : "<< first(FA) << endl;
    cout << "info First(FA) : "<< info(first(FA)) << endl;

    P = newElement_1301213126(15);
    insert_first_1301213126(FA, P);
    cout << "info First(FA): "<< info(first(FA)) << endl;
    cout << endl;

//show
    Show_1301213126(FA);

    P = newElement_1301213126(230);
    insert_first_1301213126(FA, P);
    Show_1301213126(FA);
    cout << endl;

//Delete last
    P = DeleteLast_1301213126(FA);
    Show_1301213126(FA);
    cout << info(P) << endl << endl;

    P = DeleteLast_1301213126(FA);
    Show_1301213126(FA);
    cout << info(P) << endl << endl;

    P = DeleteLast_1301213126(FA);
    Show_1301213126(FA);
    cout << info(P) << endl << endl;

//Delete first
    cout << "First(FA) sebelum DeleteFirst : "<< first(FA) << endl;
    DeleteFirst_1301213126(FA);
    cout << "First(FA) setelah DeleteFirst : "<< first(FA) << endl;
    cout << "info First(FA) : "<< info(first(FA)) << endl;

    P = newElement_1301213126(15);
    DeleteFirst_1301213126(FA);
    cout << "info First(FA): "<< info(first(FA)) << endl;
    cout << endl;

    return 0;
}
