#include <string>

using namespace std; 

string sliceString (string str )
{
  std::string str2 = str.substr (1,str.length()-2);
  return str2 ; 
}