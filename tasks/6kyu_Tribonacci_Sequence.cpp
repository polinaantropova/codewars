/*Well, you may have guessed it by now, but to be clear: you need to create a fibonacci function that given a signature array/list, 
returns the first n elements - signature included of the so seeded sequence.
Signature will always contain 3 numbers; n will always be a non-negative number; if n == 0, 
then return an empty array (except in C return NULL) and be ready for anything else which is not clearly specified ;)*/


std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;

    for (int i = 0; (i < n) && (i < 3); ++i) {
        result.push_back(signature[i]);
    }
    for (int i = 3; i < n; ++i) {
        result.push_back(result[i - 3] + result[i - 2] + result[i - 1]);
    }
    return result;
}
