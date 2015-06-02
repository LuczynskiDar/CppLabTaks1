#include "cvector.h"
/*CVector::CVector()
{}
*/

// & referenja aby zajmowalo mniej miejsca

// const zeby nie zmieniac danych zrodlowych

 CVector operator+ (const CVector& lhs, const CVector& rhs) {
  CVector temp;
  temp.x = lhs.x + rhs.x;
  temp.y = lhs.y + rhs.y;
  return temp;
}

 CVector operator- (const CVector& lhs, const CVector& rhs) {
  CVector temp;
  temp.x = lhs.x - rhs.x;
  temp.y = lhs.y - rhs.y;
  return temp;
}

 double operator* (const CVector& lhs, const CVector& rhs) {
  double tempSkal;
  tempSkal = lhs.x * rhs.x + lhs.y * rhs.y;
  return tempSkal;
}

bool operator|= (const CVector a, const CVector b) {
  bool temp;
  double tempSkal=1; // inicjalizacja zmiennej i przypsanie
  tempSkal = a * b;
  if(tempSkal==0){
      //temp="Wektory są prostopadłe bo iloczyn skalarny wynosi 0";
      temp=true;
  }
  else{
      //temp="Wektory nie są prostopadłe bo iloczyn skalarny jest różny 0";
      temp=false;
  }
  return temp;
}
