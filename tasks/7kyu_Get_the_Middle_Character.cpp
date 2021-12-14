/*You are going to be given a word. Your job is to return the middle character of the word. 
If the word's length is odd, return the middle character. If the word's length is even, return the middle 2 characters.*/


std::string get_middle(std::string input) 
{
std::string line="";
  if (input.length()%2!=0){
int c=input.length()/2+1;
return line+=input[c-1];}else{
int m=input.length()/2;
line=line+input[m-1]+input[m];
return line;}
}
