#include <iostream>
#include "point2D.h"

using namespace std;

int main()
{

    point2D A(1,1);
    point2D B;

    A.print();
    B.print();
    cout<<B.CalculeNorme()<<endl;

    cout<<"B=A  : "<<endl;
    B=A;
    B.print();

    cout<<"C=B  : "<<endl;
    point2D C=B;


    cout<<"C : "<<endl;
    C.print();
    C.set_x(4);
    cout<<"C x =4: "<<endl;

    C.print();

    cout<<"B : "<<endl;

    B.print();

    cout<<"B+=B  : "<<endl;
    A+=B;
    A.print();


    if (A==B)
        cout<<"A=B"<<endl;
    else cout<<"A!=B"<<endl;

   if (C==B)
        cout<<"C=B"<<endl;
    else cout<<"C!=B"<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
