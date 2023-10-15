#include<iostream>
/* scope resoltuion is a method in which use a scope resolution operator to access the member variables and member function from outside the class
but it only works when the function which will be used is already declared inside the class*/




using namespace std;
class Person{
         private:
         string name;
         int  age;
         
         public:
         void save_data(string n , int a);
       void show_data(){
         
            cout<<"Name of the person = "<<name<<endl;
            cout<<"Age of the person = "<<age<<endl;
         }
         
};

//scope resolution
void Person::save_data(string n , int a){
            // cin>>name;
            // cin>>age;
            name = n;
            age = a;
         }



int main(){
    Person p,p1;
    p.save_data("Ayush Panchal",19 );
    // p1.name = "aisfh";
    // p1.show_data();
    p.show_data();

    return 0;
}
