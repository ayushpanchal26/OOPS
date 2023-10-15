#include<iostream>
#include<string>
using namespace std;

// class is a blueprint of any object which we create best example :- it ka bhata 1
class Name{
    public:
    string name; //member variable

    void save(string n){ // member function
        name = n;
    }

    void show(){
        cout<<"Your name is "<<name;

    }
};

int main(){
       Name obj,obj1,obj2;
    //    obj.save("Ayush");
    //    obj.show();
    //    obj1.name = "ayush"; //direct access
    //    cout<<obj1.name;
    //    obj.name = "adarsh"; //ekk obj ka dusre obj sai koi rishta nata nhi hota hain
    // cout<<obj.name;
    // obj1.show();

    obj2.save("jay shree ram"); //save thorugh function
    obj2.show();


       return 0;
}




// class = blueprint of object
// class don;t take any space ghar ka naksha
// atm machine and card
// it ka bhata
  // four pillars of oops
        // hiding = encapsulation 
        // inheritance = baap beta
        // polymorphism = 
        // abstraction = 
