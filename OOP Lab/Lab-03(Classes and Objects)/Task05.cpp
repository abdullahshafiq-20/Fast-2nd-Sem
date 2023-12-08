#include <iostream>
using namespace std;

class CounterType
{

private:
    int count;
public:
    void set_count(int count)
    {
        if (count > 0)
            this->count = count;
        else
            this->count = 0;
    }
    void set_inc_count()
    {
        count++;
    }
    void set_dec_count()
    {
        count--;
    }
    int current_count()
    {
        return count;
    }
    void out_put_count()
    {
        cout << "The count Value is " << count;
    }
};
int main()
{
    CounterType c;
    c.set_count(9);
    c.out_put_count();
    cout<<endl;
    c.set_inc_count();
    c.out_put_count();
    cout<<endl;
    c.set_dec_count();
    c.out_put_count();

}