/********************************************************************
 ** Filename      : main.cpp
 ** Author        : jks
 ** Time          : Sat Jun 16 10:47:41 2012
 ** version       : 0.0.1
 ** Email         : chinatianma # gmail
 ** Last modified : Sat Jun 16 10:47:41 2012
 ********************************************************************/

#include <boost/mpl/vector_c.hpp>
#include <iostream>
#include "dimension.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    quantity<double, length> len1(3.3);
    quantity<double, length> len2(4.4);
    quantity<double, length> len3(1.1);
    quantity<double, mass> mas1(2.2);
    len3 = len2 + len1;
    cout << len3.value() << endl;;
    return 0;
}

