#include<iostream>
using namespace std;

class module{
    private:
    int module_id;
    string mod_name;
    int duration;
    int fee;
    string startdate;
    public:
    
    module() : module_id(0), mod_name(""), duration(0), fee(0), startdate("") {}
    
    module(int id, const string& name, int dur, int f, const string& date)
        : module_id(id), mod_name(name), duration(dur), fee(f), startdate(date) {}

    int getModuleId() const {
        return module_id;
    }

    string getModuleName() const {
        return mod_name;
    }

    int getDuration() const {
        return duration;
    }

    int getFee() const {
        return fee;
    }

    string getStartDate() const {
        return startdate;
    }

 
    void setModuleId(int id) {
        module_id = id;
    }

    void setModuleName(const string& name) {
        mod_name = name;
    }

    void setDuration(int dur) {
        duration = dur;
    }

    void setFee(int f) {
        fee = f;
    }

    void setStartDate(const string& date) {
        startdate = date;
    }
        void display() const {
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            
            cout << "Module ID: " << module_id << endl;
            cout << "Module Name: " << mod_name << endl;
            cout << "Duration: " << duration << " weeks" << endl;
            cout << "Fee: $" << fee << endl;
            cout << "Start Date: " << startdate << endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
    }

};