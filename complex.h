#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <math.h>
using namespace std;

class complex
{
    double re,im;

public:

  complex(double=0 ,double=0);

  complex(const complex&);

  void setre(double);
  void setim(double);
  double getre();
  double getim();

  friend ostream& operator<<(ostream &,const complex &);
  friend istream& operator>>(istream &,complex &);

  friend complex operator+(complex);
  friend complex operator+(complex, complex);
  friend complex operator+(complex, double);
  friend complex operator+(double a, complex b);

  friend complex operator-(complex);
  friend complex operator-(complex, complex);
  friend complex operator-(complex, double);
  friend complex operator-(double, complex );

  friend complex operator*(complex, complex);
  friend complex operator*(complex, double);
  friend complex operator*(double , complex );

  friend complex operator/(complex, complex);
  friend complex operator/(complex, double);
  friend complex operator/(double , complex );

  friend complex& operator+=(complex&,complex);
  friend complex& operator+=(complex&,double);

  friend complex& operator-=(complex&,complex);
  friend complex& operator-=(complex&,double);

  friend complex& operator*=(complex&,complex);
  friend complex& operator*=(complex&,double);

  friend complex& operator/=(complex&,complex);
  friend complex& operator/=(complex&,double);

  friend complex operator^(complex,int);

  friend bool operator==(complex,complex);
  friend bool operator==(complex,double);
  friend bool operator!=(complex,complex);
  friend bool operator!=(complex,double);

  friend bool operator==(double,complex);
  friend bool operator!=(double,complex);
  friend double abs(complex);
  friend complex sqrt(complex);

};

#endif // COMPLEX_H
