#include<iostream>
#include "stu_fun.h"
#include "mod_fun.h"
#include<map>
using namespace std;
int main(){
    cout<<"hello world\n";
    map<int,student> st;
    map<int,module> mo;
    student s;
    module m;
bool z=true;
while(z){
    cout<<"1)Add Student Records\n";
    cout<<"2)update Student Records\n";
    cout<<"3)display Student Records\n";
    cout<<"4)Add module\n";
    cout<<"5)Display module details\n";
    cout<<"6)update Module \n";
    cout<<"7)EXIT\n";
    int choice;
    cin>>choice;
    if (!cin)
    {
        cout<<"-----------------------------------------------------------"<<endl;
      cout << "Wrong Choice. Enter again \n" << endl;
      cin.clear();
      cin.ignore(INT_MAX, '\n');
      continue;
    }
    switch (choice){
        case 1:
            cout<<"-----------------------------------------------------------"<<endl;
            s=stu_add();
            if(st.find(s.getStudentId())==st.end()){
                 st[s.getStudentId()]=s;
                 cout<<"added student\n";
                 cout<<"-----------------------------------------------------------"<<endl;

            }
            else{
                cout<<"student already present\n";
                cout<<"-----------------------------------------------------------"<<endl;
            }


           break;
        case 2:
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"enter the student ID(NUMBER)\n";
            int id;
            cin>>id;
            if(st.find(id)==st.end()){
                
                 cout<<" student not found\n";
                 cout<<"-----------------------------------------------------------"<<endl;

            }
            else{
                stu_update(st[id]);

                cout<<"updated student\n";
                cout<<"-----------------------------------------------------------"<<endl;
            }
            
            break; 
        case 3:
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            for(auto a: st){
                a.second.display();
                cout<<endl;
            }
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"displayed student\n";

            break; 
        case 4:
            cout<<"-----------------------------------------------------------"<<endl;
            m=mod_add();
            if(mo.find(m.getModuleId())==mo.end()){
                 mo[m.getModuleId()]=m;
                 cout<<"added module\n";
                 cout<<"-----------------------------------------------------------"<<endl;

            }
            else{
                cout<<"module already present\n";
                cout<<"-----------------------------------------------------------"<<endl;
            }
            break; 
        case 5:
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"displayed module\n";
            for(auto b: mo){
                b.second.display();
                cout<<endl;
            }
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            break;
        case 6:
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;

            cout<<"enter the module ID(NUMBER)\n";
            int d;
            cin>>d;
            if(mo.find(d)==mo.end()){
                
                 cout<<" module not found\n";
                 cout<<"-----------------------------------------------------------"<<endl;
                 cout<<"-----------------------------------------------------------"<<endl;

            }
            else{
                mod_update(mo[d]);
                cout<<"updated module\n";
                cout<<"-----------------------------------------------------------"<<endl;
                cout<<"-----------------------------------------------------------"<<endl;
            }
           
            break;
        case 7:
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"Exited\n";
            z=false; 
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            break;
        default :
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"wrong choice\n";
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
               
    }
    
}
return 0;
}