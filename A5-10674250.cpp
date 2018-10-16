#include <iostream>
#include <string>
using namespace std;

struct student
{
    int studID;
    char name[15];
    int age;
    string gender;
    float score;
    char grade;



};

int main()
{
  student p1;
  cout<<"Student Details"<<endl<<"Enter Student name: "; cin.getline(p1.name,20);
  cout<<"Enter age: ";cin>>p1.age;
  cout<<"Enter Student ID: ";cin>>p1.studID;
  cout<<"Enter Gender: "; cin>>p1.gender;
  cout<<"Score : "; cin >>p1.score;


    if(p1.score>= 80)
    cout<<"Grade'A'"<<endl;
    else if (p1.score>=70)
        cout<<"Grade'B'"<<endl;
    else if (p1.score>=60)
       cout<<"Grade 'C'"<<endl;
    else if(p1.score>=50)
       cout<<"Grade'D'"<<endl;
    else if(p1.score>=40)
       cout<<"Grade'E'"<<endl;
    else if(p1.score<=39)
       cout<<"Grade'F'"<<endl;


cout<<"Student details are as follows: "<<endl;

cout<<p1.name << " " << p1.age<< " " << p1.studID << " " <<p1.gender<< " " << p1.score<<" "<<p1.grade<<endl;


return 0;
}
