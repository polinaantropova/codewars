/*Are the numbers in order?
In this Kata, your function receives an array of integers as input. Your task is to determine whether the numbers are in ascending order. 
An array is said to be in ascending order if there are no two adjacent integers where the left integer exceeds the right integer in value.
For the purposes of this Kata, you may assume that all inputs are valid, i.e. non-empty arrays containing only integers.
Note that an array of 1 integer is automatically considered to be sorted in ascending order since all (zero) adjacent pairs of integers satisfy the condition 
that the left integer does not exceed the right integer in value. 
An empty list is considered a degenerate case and therefore will not be tested in this Kata - feel free to raise an Issue if you see such a list being tested.*/


bool isAscOrder(std::vector<int> arr)
{
    // your code here
std::vector<int> arr1=arr;
  for (unsigned long k = 0; k < arr1.size() - 1; ++k) {
        int minl = k;
        for (unsigned long l = k + 1; l < arr1.size(); ++l) {
            if (arr1[l] <= arr1[minl]) {
                minl = l;
            }
        }
        std::swap(arr1[k], arr1[minl]);
    }
return(arr==arr1)?true:false;
}

/*or

bool isAscOrder(std::vector<int> arr)
{
    for(int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1]) {return false;}
    }
    
    return true;
}*/
