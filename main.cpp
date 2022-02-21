// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Khoroshun O. 2/21/2022

#include "TComplex.h"

int main()
{
    cout << "Testing AComplex: " << endl;

    AComplex a1;
    AComplex a2(-0.5,5);
    AComplex a3 = a2;

    cout << endl << a1 << " modulus = " << a1.mod() << endl;
    cout << a2 << " modulus = " << a2.mod() << endl;
    cout << endl << a1 << " argument = " << a1.arg() << endl;
    cout << a2 << " argument = " << a2.arg() << endl;
    cout << endl << a1 << " conjugate = " << a1.conj() << endl;
    cout << a2 << " conjugate = " << a2.conj() << endl;

    cout << endl<<"Adding " << a3 << " to " << a2<<endl;
    AComplex a4 = a2 + a3;

    int n = 10;
    cout <<endl<< "Adding " << a4 << " to " << n << endl;
    AComplex a5 = a4 + n;

    cout <<endl<< "Adding " << n << " to " << a4 << endl;
    a5 = n + a4;
    cout << " = " << a5 << endl;

    cout << endl << "Adding " << a5 << " to " << a5 << endl;
    a5 += a5;
    cout << " = " << a5 << endl;

    cout << endl<<"Testing TComplex"<<endl;

    TComplex t1;
    TComplex t2(2, 1);
    TComplex t3 = t2;

    cout << endl << t1 << " re = " << t1.re() << endl;
    cout << t2 << " re = " << t2.re() << endl;
    cout << endl << t1 << " im = " << t1.im() << endl;
    cout << t2 << " im = " << t2.im() << endl;

    cout << endl << "Dividing " << t3 << " by " << t2 << endl;
    TComplex t4 = t3 / t2;

    cout << endl << "Multiplying " << t4 << " by " << t4 << endl;
    TComplex t5 = t4 * t4;

    cout << endl << "Random mixed calculations: "<< endl;
    cout<<endl<<t2 + a1<<endl;
    cout << endl << a3 + t4 << endl;
    cout << endl << t2 - a1 << endl;
    cout << endl << a5 - t3 << endl;
    cout << endl << t2 + a1-t5 + a2 << endl;
    cout << endl << t2 * a1 << endl;
    cout << endl << a3 / t4 << endl;
    cout << endl << t2 * a1 << endl;
    cout << endl << a5 / t3 << endl;
    cout << endl << t2 * a1 / t5 * a2 << endl;

    cout << endl << (t2 == a1) << endl;
    cout << endl << (a5 != t3) << endl;
    cout << endl << (t2 != a1) << endl;
    cout << endl << (a1 == t1) << endl;
    cout << endl << (t2 == a5) << endl;

    cout << endl << "Testing ends here" << endl;




}


