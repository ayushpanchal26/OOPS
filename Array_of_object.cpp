/*ARRAY OF OBJECT
before starting lets us understand what is array, a array is data type whose variable can store multiple    
values of same data .
so array of object in oops is used to make multiple objects with the help of array.
basically array apne andar ekk use defined data type jo ki class hain usse apne har index kai liye ekk type
banyega and it will work like anyother datatype in c++, so let us understand by example.
*/

#include<iostream>
using namespace std;
class Emp{
    private:
    int id;
    public:
    void set_data(void){
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;
    }

    void get_ID(){
          cout<<"ID = "<<id;
    }
};

int main(){
    Emp e[3];

    for(int i = 0;i<3;i++){
        e[i].set_data();
        e[i].get_ID();
    }
    return 0;
}

/*
so from above example we are getting that a Emp class has become that type and is used to make multiple object
and then using it on an array.


*/
