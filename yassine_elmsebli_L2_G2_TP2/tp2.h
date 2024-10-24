#include <iostream>
#include <iomanip>
#include <time.h>

class tableau
{
    int* T ;
    int n ;
    int *T2;
    double Temp;
    double clockp;
    double clocka;
    int count;
    public :
    tableau(int e);
    ~tableau() ;
    void affiche();
    void copie();
    int triBulle();
    int triInsertion();
    void transfer(int i);
    void reorganiser(int v,int k);
    int triTas();
    int test(int n);
};