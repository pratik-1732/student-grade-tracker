#include <bits/stdc++.h>
using namespace std;


class student{
    private:
    public:
        void menu();
        void display();
        void topper();
        void add();
        void remove();

};
void student::menu(){
    int choice;
    
    cout<<"------------------------------------"<<endl;
    cout<<"Student Management System"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"1. Student Grades"<<endl;
    cout<<"2. Top 3 students in class"<<endl;
    cout<<"3. Add New Student"<<endl;
    cout<<"4. Delete Existing Student"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Enter Your Choice (1/2/3) - ";
    cin>>choice;

    switch(choice){
        case 1: 
            display();
            break;
        case 2:
            topper();
            break;
        case 3:
            add();
            break;
        case 4:
            remove();
            break;
        default:
            cout<<"You have entered wrong choice."<<endl;
            break;
    }


}
void student::display(){

}
void student::topper(){

}
void student::remove(){
    
}
void student::add(){

}
int main(){
    student paras;
    paras.menu();

    return 0;
}