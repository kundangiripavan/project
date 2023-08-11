#include<iostream>
#include "module.cpp"
using namespace std;

module mod_add(){
    int module_id;
    string mod_name;
    int duration;
    int fee;
    string startdate;
    cout<<"input details in the following order\n";
     cout<<"**MAKE SURE YOU ENTER THE DATA IN THE SPECIFIED DATA TYPE**\n";
    cout<<"module id(NUMBER),module name(STRING),duration(NUMBER),fee(NUMBER),start_date(STRING)\n";
    cin>>module_id;
    cin>>mod_name;
    cin>>duration;
    cin>>fee;
    cin>>startdate;

    return module(module_id,mod_name,duration,fee,startdate);



};
void mod_update(module& m){
    string mod_name;
    int duration;
    int fee;
    string startdate;
    cout<<"enter the new values that you want to update in the following order\n";
     cout<<"**MAKE SURE YOU ENTER THE DATA IN THE SPECIFIED DATA TYPE**\n";
    cout<<"module name(STRING),duration(NUMBER),fee(NUMBER),start_date(STRING)\n";
    
    cin>>mod_name;
    cin>>duration;
    cin>>fee;
    cin>>startdate;
    m.setModuleName(mod_name);
    m.setDuration(duration);
    m.setFee(fee);
    m.setStartDate(startdate);
    cout<<"this is the final updation\n";
    m.display();

}