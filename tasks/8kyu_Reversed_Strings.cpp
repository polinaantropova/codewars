/*Complete the solution so that it reverses the string passed into it.*/

#include <string>
using namespace std ; 

string reverseString (string str )
{
string line="";
 for(unsigned int i=str.length();i>0;--i){
line+=str[i-1];}
return line; 
}
