
#ifndef CVECTOR_H
#define CVECTOR_H


class CVector {
  public:
    int x,y;
    CVector () {}
    CVector (int a, int b) : x(a), y(b) {}
};

CVector operator+ (const CVector& lhs, const CVector& rhs);
CVector operator- (const CVector& lhs, const CVector& rhs);
double operator* (const CVector& lhs, const CVector& rhs);
bool operator|= (const CVector a, const CVector b);

#endif // CVECTOR_H
