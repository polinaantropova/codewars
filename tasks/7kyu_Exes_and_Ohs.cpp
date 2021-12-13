/*Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.*/


bool XO(const std::string& str)
{
int x=0,o=0;
for(unsigned int i=0;i<str.length();++i){
  if (str[i]=='x'||str[i]=='X'){++x;}
if (str[i]=='o'||str[i]=='O'){++o;}
}
  return (x==o)?true:false;
}
