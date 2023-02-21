#include <iostream>

using namespace std;

int main ()
{
  uint32_t x = 0;

  cout << "initially:" << endl;
  cout << "  x = " << x << endl;

  ///////////////////////////////////
  // SET THE APPROPRIATE BITS HERE //
 
  x=x|(1<<2);
  x=x|(1<<3);
  x=x|(1<<5);
  x=x|(1<<7);
  x=x|(1<<9);
  x=x|(1<<11);
  x=x|(1<<13);
  x=x|(1<<17);
  x=x|(1<<19);
  x=x|(1<<21);
  x=x|(1<<23);
  x=x|(1<<29);
  x=x|(1<<31); 

  cout << "after setting bits:" << endl;
  cout << "  x = " << x << endl;

    x=x^(1<<3);     // This subtracts 8
  cout << "after first bit 3 toggle:" << endl;
  cout << "  x = " << x << endl;

      x=x^(1<<3);       // This toggles the 0 back to 1 and adds 8
  cout << "after second bit 3 toggle:" << endl;
  cout << "  x = " << x << endl;

    x &= ~(1<<7);         // This subtracts 128 by changing bit 7 to a 0
  cout << "after clearing bit 7:" << endl;
  cout << "  x = " << x << endl;

  ///////////////////////////
  // CLEAR BITS 16-31 HERE //
  ///////////////////////////
for (int f=16; f<=31; f++){
    x &= ~(1<<f);       // Subtracts the value of each bit from the total by changing the bit 0
}
  cout << "after clearing bits 16-31:" << endl;
  cout << "  x = " << x << endl;
}

