#include<iostream>
#include<string.h>	
using namespace std;
//Nested class in C++
class student
{
    private:
    char name[30];
    int rollno;
    class address
    {
        private:
        int houseno;
        char street[20];
        char city[20];
        char pincode[7];
        char state[20];
        public:
        void setAddress(int h,char *s,char *c,char *p,char *st)
        {
            houseno = h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(pincode,p);
            strcpy(state,st);
        }
        void showAddress()
        {
            cout<<"Address - :"<<endl<<houseno<<" , "<<street<<endl<<city<<" , "<<pincode<<endl<<state;
        }
    };
    address add;
    public:
    void set_rollno(int r)
    {
        rollno=r;
    }
    void set_name(char *n)
    {
        strcpy(name,n);
    }
    void setAddress(int h,char *s,char *c,char *p,char *st)
    {
        add.setAddress(h,s,c,p,st);
    }
    void show_data()
    {
        cout<<endl<<"*********** Student Data ***********"<<endl;
        cout<<"Name -: "<<name<<endl<<"Roll no. -: "<<rollno<<endl;
        add.showAddress();
    }
};
int main()
{
    student s1;
    s1.set_name("Sunny");
    s1.set_rollno(116);
    s1.setAddress(112,"Rampur","Gaya","823001","Bihar");
    s1.show_data();
    return 0;
}
