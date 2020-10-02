/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
                      BEAUTIFUL YEAR
*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int y;
  cin >> y;
  while (1)
    {

        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
  cout << y;
}
