#include <iostream>

using namespace std;

int main()
{

  int i = 1, u = 1, sum = 0;

  cout << " The perfect numbers between 1 to 500 are: \n";

  while (i <= 500)
  {
    while (u <= 500)
    {
      if (u < i) // Condition to check if 'u' is a proper divisor of 'i'
      {
        if (i % u == 0) // Check if 'u' is a divisor of 'i'
          sum = sum + u; // If 'u' is a divisor of 'i', add 'u' to 'sum'
      }
      u++; // Increment 'u' for checking the next divisor
    }

    if (sum == i) // Check if the sum of divisors 'sum' is equal to 'i'
    {
      cout << i << "  " << "\n";
    }
    i++;
    u = 1;
    sum = 0;
  }
}