#include <stdio.h>


int isLeapYear(int year){
  int val=0;

  if(year%4==0)  {
  val=1;

  if(year%100==0)  {
  val=0;

  if(year%400==0)  {
  val=1;
}

}

}
  


  return val;
}


int main() {
  int year;
  printf("Enter any year : ");
  scanf("%d", &year);
  if(isLeapYear(year))  {
  printf("%d is leap year!\n",year);
} else  {
  printf("%d is not leap year!\n",year);
}
  return 0;
}


