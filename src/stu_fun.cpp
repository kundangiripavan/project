#include<iostream>
#include "student.cpp"
using namespace std;

student stu_add(){
    int i;
    string name;
    string bl;
    string add;
    string dob;
    int md;
    cout<<"input details in the following order\n";
    cout<<"**MAKE SURE YOU ENTER THE DATA IN THE SPECIFIED DATA TYPE**\n";

    cout<<"Student_id(NUMBER),name(STRING),blood group(STRING),address(STRING),date of birth(STRING) and module id(NUMBER)\n";
    cin>>i;
    cin>>name;
    cin>>bl;
    cin>>add;
    cin>>dob;
    cin>>md;

    return student(i,name,bl,add,dob,md);



};

void stu_update(student& s ){
    cout<<"enter the new values that you want to update in the following order\n";
    cout<<"**MAKE SURE YOU ENTER THE DATA IN THE SPECIFIED DATA TYPE**\n";
    cout<<"name(STRING),blood group(STRING),address(STRING),date of birth(STRING) and module id(NUMBER)\n";
    string name;
    string bl;
    string add;
    string dob;
    int md;
    cin>>name;
    cin>>bl;
    cin>>add;
    cin>>dob;
    cin>>md;
    s.setName(name);
    s.setBloodType(bl);
    s.setAddress(add);
    s.setDateOfBirth(dob);
    s.setStudentModule(md);
    cout<<"this is the final updation\n";
    s.display();

};