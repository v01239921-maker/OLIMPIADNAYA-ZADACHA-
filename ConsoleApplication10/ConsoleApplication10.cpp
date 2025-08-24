// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath> 
#include <cstdlib>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int d;
    int big = 0;
    int samhudoi;
  ///  cout << "3 - b, 2 - c, 1 - a\n";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    int max = (a> b? a :b) ;
    int rez_max = max > c ? max : c;

    //cout << rez_max;
    samhudoi = (a + b + c) - rez_max ;
    auto x = abs(rez_max - samhudoi);
    if (x > d)
    {
        cout << x - d;
    }
    else
    { 
        cout << 0;
    }
}

