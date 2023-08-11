#include<iostream>
using namespace std;

class student{
    private:
    int stu_id;
    string name;
    string blood;
    string addr;
    string date_of_birth;
    int stu_module;
    public:
    
    student() : stu_id(0), name(""), blood(""), addr(""), date_of_birth(""),stu_module(0) {}
    
    student(int id, const string& n, const string& b, const string& a, const string& dob,int st_mod)
        : stu_id(id), name(n), blood(b), addr(a), date_of_birth(dob),stu_module(st_mod) {}

    int getStudentId() const {
        return stu_id;
    }
    int getStudentModule() const {
        return stu_module;
    }

    string getName() const {
        return name;
    }

    string getBloodType() const {
        return blood;
    }

    string getAddress() const {
        return addr;
    }

    string getDateOfBirth() const {
        return date_of_birth;
    }

    void setStudentId(int id) {
        stu_id = id;
    }

    void setName(const string& n) {
        name = n;
    }

    void setBloodType(const string& b) {
        blood = b;
    }

    void setAddress(const string& a) {
        addr = a;
    }

    void setDateOfBirth(const string& dob) {
        date_of_birth = dob;
    }
    void setStudentModule(int mod){
        stu_module=mod;
    }
            void display() const {
                cout<<"-----------------------------------------------------------"<<endl;
                cout<<"-----------------------------------------------------------"<<endl;
            cout << "Student ID: " << stu_id << endl;
            cout << "Student Name: " << name << endl;
            cout << "Blood group " << blood  << endl;
            cout << "Address" << addr << endl;
            cout << "Date of Birth " << date_of_birth << endl;
            cout << "Module number" << stu_module << endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
    }
};

