/*An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).
Note: anagrams are case insensitive
Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.*/


#include <string>

bool isAnagram(std::string test, std::string original){
if (test.size() != original.size()) return false;
    std::vector <char> letters;
//приводим к строчным буквам
    for (int i = 0; i < test.size(); ++i) {
        if ((int)test[i] < 97) test[i] += 32;
        letters.push_back(test[i]);
    }
    for (int i = 0; i < original.size(); ++i) {
        if ((int)original[i] < 97) original[i] += 32;
    }

//если буквы совпадают записываем вместо '0'
    for (int i = 0; i < original.size(); ++i) {
        for (int j = 0; j < letters.size(); ++j) {
            if (original[i] == letters[j]) {
                letters[j] = '0';
                j = letters.size();
            }
        }
    }
    for (int i = 0; i < letters.size(); ++i) {
        if (letters[i] != '0') return false;
    }
    return true;

}
