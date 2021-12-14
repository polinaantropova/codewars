/*Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. 
You can guarantee that input is non-negative.

Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case*/


unsigned int countBits(unsigned long long n){
  std::vector <int> ost;
    while (n != 0) {
        ost.push_back(n % 2);
        n /= 2;
    }
    int sum = 0;
    for (unsigned long i = 0; i < ost.size(); ++i) {
        if (ost[i] == 1) {++sum;}
    }
    return sum;
}
