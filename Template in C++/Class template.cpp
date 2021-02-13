#include<iostream>
using namespace std;
//Class template in C++
template <class X> class ArrayList
{
    private:
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;
    public:
    ArrayList(int capacity)
    {
        s = new ControlBlock;
        s -> capacity = capacity;
        s -> arr_ptr = new X[s->capacity];
    }
    void add_element(int index , X data)
    {
        if(index >= 0 && index <= s->capacity-1)
        s->arr_ptr[index]=data;
        else
        cout<<"\nArray index is not valid";
    }
    void view_element(int index , X &data)
    {
        if(index>=0 && index<=s->capacity-1)
        data=s->arr_ptr[index];
        else
        cout<<"\n Array index is not valid";
    }
    void view_list()
    {
        int i;
        for(i=0;i<s->capacity;i++)
        {
            cout<<" "<<s->arr_ptr[i];
        }
    }
};
int main()
{
    int data;
    ArrayList <float> list1(4);
    list1.add_element(0,3.2);
    list1.add_element(1,4.1);
    list1.add_element(2,5.5);
    list1.add_element(3,5.5);
    //list1.view_list();
    list1.view_element(0,data);
    return 0;
}
