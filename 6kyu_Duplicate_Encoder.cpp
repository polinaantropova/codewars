/*The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" 
if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.*/


std::string duplicate_encoder(const std::string& word){
 std::vector <char> letters;
    std::string copy_word = word;
    for (unsigned long i = 0; i < copy_word.size(); ++i) {
        if (((int)copy_word[i] > 64) && ((int)copy_word[i] < 91)) copy_word[i] += 32;
        letters.push_back(copy_word[i]);
    }
    std::string result = "";
    for (unsigned long i = 0; i < copy_word.size(); ++i) {
        int count = 0;
        for (unsigned long j = 0; j < letters.size(); ++j) {
            if (copy_word[i] == letters[j]) count++;
        }
        if (count > 1) result += ')';
        else result += '(';
    }
 return result;
}
