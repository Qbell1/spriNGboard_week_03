#include <iomanip>
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main ()
{
  {
    /////////////////////////////////
    // CREATE THREE int32_t VALUES //
    // (big, small, sum)           //
    /////////////////////////////////
    int32_t big= pow(10,8);
    int32_t small= 1;
    int32_t sum= big+small;

    cout << "int32_t:" << endl;
    cout << "  big   = " << big  << endl;
    cout << "  small = " << small<< endl;
    cout << "  sum   = " << sum  << endl;
  }

  {
    ///////////////////////////////
    // CREATE THREE float VALUES //
    // (big, small, sum)         //
    ///////////////////////////////
float big= pow(10,8), small =1;
float sum = big+small;
    cout << "float:" << endl;
    cout << "  big   = " << fixed << setprecision(1) << big   << endl;
    cout << "  small = " << fixed << setprecision(1) << small << endl;
    cout << "  sum   = " << fixed << setprecision(1) << sum   << endl;
  } 
}
