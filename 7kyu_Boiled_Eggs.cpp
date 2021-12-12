/*Implement a function, which takes a non-negative integer, representing the number of eggs to boil. 
It must return the time in minutes (integer), which it takes to have all the eggs boiled.
Rules:
you can put at most 8 eggs into the pot at once
it takes 5 minutes to boil an egg
we assume, that the water is boiling all the time (no time to heat up)
for simplicity we also don't consider the time it takes to put eggs into the pot or get them out of it*/


unsigned int cookingTime(unsigned int eggs) {
  //your code here 

  if (eggs==0){return 0;} else {
 
if (eggs<=8){return 5;} 
if (eggs%8==0){return eggs/8*5;}
else return ((eggs/8)+1)*5;}
}
