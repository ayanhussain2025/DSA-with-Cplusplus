//lets see how we can insert data id there exist a priavte access modifier by using public method
#include<iostream>
using namespace std;
class student
{
    private :
    string name;
    int age;
    int roll_number;
    string grade;
    //Function Getter and Setter
    //why we getter and setter we can do this without it , because it give some extra power 
    public:
    void setname(string n)
    {
        //power of getter and setter power examle 1
        if(n.size()==0){  //manlo ki tumne name khali chor diya , name to khali ho nahi sakta
            cout<<"Invalid Name!"<<endl;
            return;
        }
        name=n;
    }
    void setage(int a)
    { //power example 2
        if(a<0 || a > 100)
        cout<<"Invalid Age"<<endl; //dekho bss iska use itna hi nahi hai isse jeyada hai 
        age=a;
    }
    void setroll_number(int r)
    {
        roll_number=r;
    }

    void setgrade(string g)
    {
        grade=g;
    }

    //How do we know that our value get set ==> for that we user getter function

    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }

    int getroll_number()
    {
        return roll_number; //if we do not want to print here , we can do that
    }

    void getgrade(int password)
    {
        if(password!=1234){
            cout<<"Invalid password , you cannot acess grade!"<<endl;
            return;
        }
        cout<<grade;
    }
};
int main()
{
    student s1;
    s1.setname("Ayan Hussain");
    s1.setage(22);
    s1.setroll_number(13); 
    s1.setgrade("A+");
    s1.getname();
    s1.getage();
    cout<<s1.getroll_number()<<endl;
    s1.getgrade(1234);
    return 0;
}