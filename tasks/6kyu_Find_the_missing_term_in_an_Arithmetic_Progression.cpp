/*You have to write a function that receives a list, list size will always be at least 3 numbers. The missing term will never be the first or last one.

Example
findMissing([1, 3, 5, 9, 11]) == 7*/


static long findMissing(std::vector<long> list){

long dif;
long dif01 = list[1] - list[0];
long dif12 = list[2] - list[1];
    
  if (dif01 == dif12) {dif = dif12;}
    else if (dif12 == dif01 * 2) {dif = dif01;}
      else {dif = dif12;}

    for (unsigned long i = 1; i < list.size(); ++i) {
        if ((list[i - 1] + dif) != list[i]) return list[i - 1] + dif;
    }

return list[0];
}
