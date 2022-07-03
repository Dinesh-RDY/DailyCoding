#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
cpp_int findCatalan(int n)
{
    // code here
    cpp_int fact = 1;
    cpp_int fact2, fact3;
    for (int i = 1; i <= 2 * n; i++)
    {
        fact *= i;
        if (i == n + 1)
            fact2 = fact;
        if (i == n)
            fact3 = fact;
    }
    return fact / (fact2 * fact3);
}