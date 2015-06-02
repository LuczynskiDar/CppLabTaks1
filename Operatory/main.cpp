#include <iostream>
#include "cvector.h"
#include <string>
using namespace std;

string showProst(bool);
void inputVec(double&, double&, double&, double&);

int main()
{

      double a,b,c,d;
      CVector resultPlus;
      CVector resultMinus;
      double resultMnoz;

      inputVec(a,b,c,d);
      CVector foo (a,b);
      CVector bar (c,d);

      resultPlus = foo + bar;
      resultMinus =foo - bar;
      resultMnoz = foo * bar;

      cout << a<<" "<<b<<" "<<c<<" "<<d<<" "<<'\n';
      cout<<'\n'<<"Dodawanie wektorow \n";
      cout << resultPlus.x << ',' << resultPlus.y << '\n';
      cout<<"Odejmownaie wektorow \n";
      cout << resultMinus.x << ',' << resultMinus.y << '\n';
      cout<<"Mnozenie skalarne wektorow \n";
      cout << resultMnoz<< '\n';
      cout<<"Prostopadlosc wektorow \n";
      cout << showProst(foo |= bar)<< '\n';
      return 0;
}


string showProst(bool option){
    string temp;
    if(option==true){
        temp="Wektory sa prostopadle, poniewaz iloczyn skalarny wektorow jest rowny zero";
    }
    else{
        temp="Wektory nie sa prostopadle, poniewaz iloczyn skalarny wektorow rozny od zera";
    }
    return temp;
}


void inputVec(double& a, double& b, double& c, double& d){
    // Brak oblugi wyjatkow
    cout<<" Podaj wymiary pierwszego wektora W1(A,B)"<<'\n';
    cout<<"Podaj A"<<'\n';
    cin>>a;
    cout<<'\n'<<"Podaj B"<<'\n';
    cin>>b;
    cout<<" Podaj wymiary drugiego wektora W2(C,D)"<<'\n';
    cout<<'\n'<<"Podaj C"<<'\n';
    cin>>c;
    cout<<'\n'<<"Podaj D"<<'\n';
    cin>>d;

}
