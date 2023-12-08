#include<iostream>
#include <cstring>
using namespace std;

class LoneClass
{
    string LoneObjName;
    int LoneObjId;
    public:
    LoneClass(){}
    LoneClass(string LoneObjName,int LoneObjId)
    {
        this->LoneObjName=LoneObjName;
        this->LoneObjId=LoneObjId;
    }
    string getLoneObjName()
    {
        return LoneObjName;
    }
    int getLoneObjId()
    {
        return LoneObjId;
    }

    void friend fLoneClass(LoneClass loneObj);
};

void fLoneClass(LoneClass obj)
{
   cout<<"I am friend of this Lone Class with ObjName ="<<obj.getLoneObjName()<< "and"<<obj.getLoneObjId();
}

int main()
{
    LoneClass LoneObj("Abdullah",4489);
    fLoneClass(LoneObj);
    return 0;
}