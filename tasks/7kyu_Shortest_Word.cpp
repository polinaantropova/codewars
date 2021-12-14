/*Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.*/


#include <string>
int find_short(std::string str)
{
std::string word;
unsigned int dlword;
unsigned int shortw=str.length();
  for (unsigned int i=0;i<str.length();++i){
    if(str[i]!=' '){word+=str[i];
      if(i==str.length()-1){
       dlword=word.length();
      if(dlword<shortw){shortw=dlword;}
      }
}else {
      if (str[i]==' '){
      dlword=word.length();
      if(dlword<shortw){shortw=dlword;}
      word="";} 
    }
    
  }
  return shortw;
}
