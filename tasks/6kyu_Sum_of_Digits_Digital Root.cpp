/*Digital root is the recursive sum of all the digits in a number.

Given n, take the sum of the digits of n. If that value has more than one digit,
continue reducing in this way until a single-digit number is produced. The input will be a non-negative integer.
Examples
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6*/



int digital_root(int n)
{
/*все кодировки символов для цифр находятся в порядке от 48 (для '0') до 57 (для '9')*/
std::string str = std::to_string(n);
    int sum = 0;
    for (unsigned long i = 0; i < str.size(); ++i) {
        sum += int(str[i]) - '0';
    }
    while (sum >= 10) {
        int cursum = 0;
        str = std::to_string(sum);
        for (unsigned long i = 0; i < str.size(); ++i) {
            cursum += int(str[i]) - '0';
        }
        sum = cursum;
    }
    return sum;
}
