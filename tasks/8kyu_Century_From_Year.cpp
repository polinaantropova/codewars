/*Given a year, return the century it is in.*/


#include <iostream>

int centuryFromYear(int year) 
{
int centure;
if (year%100==0) {
centure=year/100;
} else {
centure=1+year/100;
}
return centure;
}
