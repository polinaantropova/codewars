/*Simple, remove the spaces from the string, then return the resultant string.*/


std::string no_space(std::string x)
{
  std::string line;
    for(unsigned int i=0;i<x.length();++i){
if(x[i]!=' '){line+=x[i];}}
return line;
}
