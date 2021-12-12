/*Given an array of integers your solution should find the smallest integer.*/

#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{int min=list[0];
  for(unsigned long i=0;i<list.size();++i){
    if (min>list[i]){min=list[i];}
  }  
  return min ;
}
