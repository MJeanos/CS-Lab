#include <iostream>
#include <cstdlib>
using namespace std;

int main( int argc, char* argv[] )
   {
    int sum = 0;
    for (int i = 0; i<argc; i++ )
       {
	sum += atoi (argv[i]); 
       }
    cout << "Sum:" << sum << endl;
    return 0;
   }

