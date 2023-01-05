#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

const int Max = 6;

struct member {
    string IDNumber;
    double poin[Max];
};

void inputData_1301213126(member &MB);
double ratarata_1301213126(member MB);
void showData_1301213126(member MB);


#endif // MEMBER_H_INCLUDED
