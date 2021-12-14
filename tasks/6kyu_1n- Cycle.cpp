/*Let be n an integer prime with 10 e.g. 7.

1/7 = 0.142857 142857 142857 ....

We see that the decimal part has a cycle: 142857. The length of this cycle is 6. In the same way:

1/11 = 0.09 09 09 .... Cycle length is 2.
Task
Given an integer n (n > 1) the function cycle(n) returns the length of the cycle if there is one otherwise (n and 10 not coprimes) return -1.
*/

int cycle(int n) {
    
    if (n % 5 == 0 || n % 2 == 0) return -1;
    int num = 1;
    int symb = 0;
     do {
        num =(num*10)%n;
        symb++;
    } while (num != 1);
    return symb;

}


