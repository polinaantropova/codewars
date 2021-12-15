/*Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

Examples
"This is an example!" ==> "sihT si na !elpmaxe"
"double  spaces"      ==> "elbuod  secaps"*/


std::string reverse_words(std::string str)
{
    std::string result = "";
    std::string word = "";
    for (unsigned long i = 0; i < str.length(); ++i) {
        if (str[i] == ' ') {
            result =result + word + ' ';
            word = "";
            continue;
        }
        word = str[i] + word;
    }
    result += word;
    return result;
}
