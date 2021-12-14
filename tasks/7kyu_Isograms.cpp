/*An isogram is a word that has no repeating letters, consecutive or non-consecutive. 
Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.*/

bool is_isogram(std::string str)
{  
  int counter = 1; 
//строим строку из строчных букв
    for (unsigned long i = 0; i < str.length(); ++i)
        str[i] = std::tolower(str[i]); 

    for (unsigned long i = 0; i < str.length(); ++i)
       {
            //ищем повторы
            for (unsigned long j = i+1; j < str.length(); ++j){if(str[i]==str[j])++counter;}
            if (counter != 1)
                return false;
            counter = 1; 
       }
    return true; 
}
