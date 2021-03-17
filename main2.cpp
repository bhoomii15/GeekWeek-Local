/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class mcu
{
    public:
    void marvel()
    {
        cout<<"captain america";
    }
};
class tony:public mcu
{
    public:
    void stark()
    {
        cout<<" \niron man";
    }
};
class clark
{
    public:
    void kent()
    {
        cout<<"\nsuperman";
    }
};
class super:public tony, public clark
{
    public:
    void hero()
    {
        cout<<"\nAre superheroes";
    }
};
int main()
{
    super a;
    a.marvel();
    a.stark();
    a.kent();
    a.hero();
    return 0;
}

