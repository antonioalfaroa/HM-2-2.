#include <iostream>

using namespace std;

class Date{
public:
Date(int d,int m,int ){
  
};
void setday(int d){
  day = d;
}
void setmonth(int m){
  if(m>12){
    m=1;
  }
  month = m;
}
void setyear(int y){
  year = y;
}
int getday(){
  return day;
}
int getmonth(){
  return month;
}
int getyear(){
  return year;
}
void displayDate(){
  cout<<"The today's date is : "<<endl;
  cout<<month<<"/"<<day<<"/"<<year<<endl;
}

private:
int day;
int month;
int year;

};


int main(){
  int day = 28;
  int month = 12;
  int year = 1998;
Date d(day,month,year);
  d.setday(day);
  d.setmonth(month);
  d.setyear(year);
  d.getday();
  d.getmonth();
  d.getyear();
  d.displayDate();


  
}

