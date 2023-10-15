// freind function 
// here we are starting with freind function
/*
we know that the private section of class is accessible only and only through the public
section of the same class.
what if we want to give access to private member a function outside the class, in such 
circumstances we use the concept of freind function.
A freind function is a function that is not a member of the class but is granted
the privilege of accessing its private and protected member.This is very useful in scenario
where you need external functions to work closely with the internals of a class without exposing
those details to the outside world

//key points 
-freind function can't be called using the object of the class it is called like normal general function.
-freind function can use the resources of a class only using an object of the same class.
-usually a freind function has object as argument.

forward declaration
that means to decalare a class before deifning it 
ex class b;


*/
/*#include<iostream>
using namespace std;

class demo{
    int a = 7,b= 7;
    public:
    friend int sum(demo d);
};

int sum(demo k){
    return  k.a + k.b;
     
}



int main(){
    demo d1;
    cout<<"add = "<<sum(d1);
    return 0;
}
*/

class B;
class A{
        int a;
        public:
        void save_data(){
            cout<<"Enter the first value:"<<endl;
            cin<<a;
        }      
freind void max(A,b);
};

class B{
    int b;
    public:
            void save_data(){
            cout<<"Enter the first value:"<<endl;
            cin<<b;
        }      
freind void max(A,b);

};

// Freind function
void mac(A aa, B,bb){
         if(aa.a>bb.b){
            cout<<"First value given as A is greater"<<aa.a<<endl;

         }
         else{
            cout<<"second value given as B is greater"<<aa.a<<endl;
         }

}
int main(){
    A a1;
    B b1;
    a1.save_data();
    b1.save_data();
    max(a1,b1);

    return 0;
}


