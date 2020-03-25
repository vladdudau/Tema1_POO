#ifndef MULTIME_H
#define MULTIME_H
#include<iostream>
using namespace std;
class Multime
{
private:
    int nr_elemente;
    int* tablou;
public:
    Multime();       ///constructor implicit
    Multime(int n,int *v);  ///contructor cu parametri
    Multime(const Multime& ob);
    ~Multime();           ///destructor
    void elimina();
    friend Multime operator+(Multime& , Multime&);
    friend Multime operator*(Multime& , Multime&);
    friend Multime operator-(Multime&, Multime&);
    friend istream& operator>>(istream&, Multime&);
    friend ostream& operator<<(ostream&, Multime);
    friend Multime* CitAfis(int n);
};
    Multime operator+(Multime& , Multime&);
    Multime operator*(Multime& , Multime&);
    Multime operator-(Multime&, Multime&);
    istream& operator>>(istream&, Multime&);
    ostream& operator<<(ostream&, Multime);
    Multime* CitAfis(int n);
#endif
