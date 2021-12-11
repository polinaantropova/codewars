/*
Your task is to write a function that takes a string and return a new string with all vowels removed.
For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
Note: for this kata y isn't considered a vowel.
*/



# include <string>

std::string disemvowel(const std::string& str) {
std::string line;
    for(unsigned long i=0;i<str.length();++i){
if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u'&&str[i]!='A'&& str[i]!='E'&& str[i]!='I'&& str[i]!='O'&& str[i]!='U'){line+=str[i];}
}

return line;
}
