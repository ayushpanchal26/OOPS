#include<iostream>
using namespace std;

class Person{
         public:
         string name;
         int  age;

         void save_data(string n , int a){
            // cin>>name;
            // cin>>age;
            name = n;
            age = a;
         }
    
       void show_data(){
         
            cout<<"Name of the person = "<<name<<endl;
            cout<<"Age of the person = "<<age<<endl;
         }
};

int main(){
    Person p;
    p.save_data("Ayush Panchal",19 );
    p.show_data();

    return 0;
}
