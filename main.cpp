#include <iostream>
#include "Sonde.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Matrice A(2,2), B(2,2), C(2,2);

    A.SetValue(0,0,1);    A.SetValue(0,1,4);
    A.SetValue(1,0,1);    A.SetValue(1,1,1);

    B.SetValue(0,0,4);    B.SetValue(0,1,1);
    B.SetValue(1,0,1);    B.SetValue(1,1,0);

    C = A*B;

    cout << "A : " << endl << A.GetValue(0,0) << " " << A.GetValue(0,1) << endl << A.GetValue(1,0) << " " << A.GetValue(1,1) << endl << endl;
    cout << "B : " << endl << B.GetValue(0,0) << " " << B.GetValue(0,1) << endl << B.GetValue(1,0) << " " << B.GetValue(1,1) << endl << endl;
    cout << "C : " << endl << C.GetValue(0,0) << " " << C.GetValue(0,1) << endl << C.GetValue(1,0) << " " << C.GetValue(1,1) << endl << endl;

    return 0;
}
