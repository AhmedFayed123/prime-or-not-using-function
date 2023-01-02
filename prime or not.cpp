#include <iostream>
using namespace std;
int main()
{
int num, ctr = 0;
	cout << " Enter a number to check prime or not : ";
	cin>> num;
    for (int  i = 1; i <= num;i++)
    {
        if (num % i == 0)
        {
            ctr++;
        }
    }
    if (ctr == 2)
    {
        cout << " The entered number is a prime number. \n";
    }
    else {
        cout << " The number you entered is not a prime number. \n";
    }

	return 0;
}
