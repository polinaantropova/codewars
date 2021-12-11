/*Given a positive integer n, calculate the following sum:
n + n/2 + n/4 + n/8 + ...
All elements of the sum are the results of integer division.*/


unsigned halving_sum(unsigned n) {

int sum=0;

for(int i=1; n/i>=1; i=i*2){
sum+= n/i;

}
  return sum;
}
