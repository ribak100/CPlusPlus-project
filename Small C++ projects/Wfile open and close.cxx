#include <fstream>
#include <iostream>
#include <cstdlib>

  int main( )
 {
  using namespace std;
  ifstream in_stream; 
  ofstream out_stream;
 in_stream.open("infile.dat");
 
 in_stream.open("stuff.dat");
if (in_stream.fail( ))
{
 cout << "Input file opening failed.\n";
 exit(1); 
}
 
out_stream.open("outfile.dat");

if (out_stream.fail( ))

{

cout << "Output file opening failed.\n";

exit(1);

}

int first, second, third;
 in_stream >> first >> second >> third;
out_stream << "The sum of the first 3\n"
<< "numbers in infile.dat\n"
<< "is " << (first + second + third)
<< endl;
in_stream.close( );
 out_stream.close( );
return 0;
 }