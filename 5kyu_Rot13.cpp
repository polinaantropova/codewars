/*ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. If there are numbers or special characters included in the string, 
they should be returned as they are. Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".*/

#include <string>
using namespace std;

string rot13(string msg)
{
std::string result;
std::string alphabet;
    for (char i = 'a'; i <= 'z'; ++i )
        alphabet += i;
 
    for (int i = 0; i < msg.length(); ++i) {
        for (int j = 0; j < alphabet.length(); ++j) {
            int postion = j;
            bool registrLow;
            std::islower(msg.at(i)) ? registrLow = true : registrLow = false;
 
            if (j + 13 >= alphabet.size())
                postion = (j + 13) - alphabet.size();
            else
                postion += 13;
 
 
            if (msg.at(i) == alphabet.at(j) && registrLow == true) {//строчные буквы
                if (msg.at(i) == alphabet.at(j)) {
                    result += alphabet.at(postion);
                    break;
                }
            } else if (msg.at(i) == std::toupper(alphabet.at(j)) && registrLow == false) {//загл.буквы
                result += std::toupper(alphabet.at(postion));
                break;
            } else if (alphabet.size() == j + 1)//спец.символы
                result += msg.at(i);
 
        }
    }
 
    return result;  
}
