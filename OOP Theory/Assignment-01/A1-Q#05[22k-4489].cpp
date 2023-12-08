#include <iostream>
#include <string>
using namespace std;

class User
{
    string fname;
    string lname;
    string id[2];
    int age;
    int height;
    int shoe_size;
    char gender;
    string demographic;

public:
    User() {}
    User(string fname, string lname, int age, int height, int shoe_size, char gender)
    {
        this->fname = fname;
        this->lname = lname;
        setId();
        this->age = age;
        this->height = height;
        this->shoe_size = shoe_size;
        this->gender = gender;
        setDemographic();
    }

    void setFirstName(string fname)
    {
        this->fname = fname;
    }

    void setLastName(string lname)
    {
        this->lname = lname;
    }

    void setId()
    {
        string ID;
        cout << "Enter NU id: ";
        cin >> ID;
        this->id[0] = ID.substr(0, 2);
        this->id[1] = ID.substr(4);
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    void setShoeSize(int shoe_size)
    {
        this->shoe_size = shoe_size;
    }

    void setGender(char gender)
    {
        this->gender = gender;
    }

    void setDemographic()
    {
        if (age >= 0 && age <= 2)
        {
            demographic = "infant";
        }
        else if (age >= 3 && age <= 9)
        {
            demographic = "toddler";
        }
        else if (age >= 10 && age <= 12)
        {
            demographic = "child";
        }
        else if (age > 13 && age <= 19)
        {
            demographic = "teenager";
        }
        else if (age >= 19)
        {
            demographic = "adult";
        }
    }

    string getFirstName()
    {
        return fname;
    }

    string getLastName()
    {
        return lname;
    }

    string getId()
    {
        return id[0] + id[1];
    }

    string getDemographic()
    {
        return demographic;
    }

    int getAge()
    {
        return age;
    }

    int getHeight()
    {
        return height;
    }

    int getShoeSize()
    {
        return shoe_size;
    }

    char getGender()
    {
        return gender;
    }
};

class Shoe{
      int size,width;
      string style,brand,colour,dem;
      public:
      void setsize(int size){
        this->size=size;
    }
    void setwidth(int width){
        this->width=width;
    }
    void setstyle(string style){
        this->style=style;
    }
    void setbrand(string brand){
        this->brand=brand;
    }
    void setcolour(string colour){
        this->colour=colour;
    }
    void setdem(string dem){
        this->dem=dem;
    }
    string getstyle(){
        return style;
    }
    string getbrand(){
        return brand;
    }
    
    string getcolour(){
        return colour;
    }
    string getdem(){
        return dem;
    }
    int getsize(){
        return size;
    }
    int getwidth(){
        return width;
    }
    Shoe(int width,string style,string brand,string colour,string dem){
        setsize(size);
        setwidth(width);
        setstyle(style);
        setbrand(brand);
        setcolour(colour);
        setdem(dem);
    }
    Shoe(){
        
    }

};
int main(){
      string fname;
    string lname;
    int age,height,shoe_size;
    char g;
    string dem;
    int size,width;
      string style,brand,colour;
      cout<<"Enter first name: ";
      cin>>fname;
      cout<<"Enter last name: ";
      cin>>lname;
      cout<<"Enter age: ";
      cin>>age;
      cout<<"Enter height: ";
      cin>>height;
      cout<<"Enter shoe_size: ";
      cin>>shoe_size;
      cout<<"Enter gender: ";
      cin>>g;
      User u(fname,lname,age,height,shoe_size,g);

       cout<<"Enter shoe dem: ";
      cin>>dem;
       cout<<"Enter shoe width: ";
      cin>>width;
       cout<<"Enter shoe style: ";
      cin>>style;
       cout<<"Enter shoe brand: ";
      cin>>brand;
       cout<<"Enter shoe colour: ";
      cin>>colour;
      Shoe s(width, style, brand, colour, dem);
      system("cls");
      int ch=0;
      while (ch!=69){
        cout<<"1.Update user\n2.Update shoe\n3.View user\n4.View shoe\n5.End"<<endl;
        cin>>ch;
        switch (ch){
            case 1:
            cout<<"1.Update first name\n2.Update  last name\n3.Updateage\n4.Update height\n5.Update shoe_size\n6.Update gender\n";
            cin>>ch;
            switch (ch){
                case 1:
                cout<<"Enter first name: ";
                cin>>fname;
                u.setFirstName(fname);
                break;
                case 2:
                 cout<<"Enter last name: ";
                 cin>>lname;
                 u.setLastName(lname);
                 break;
                  case 3:
                cout<<"Enter age: ";
                cin>>age;
                u.setAge(age);
                break;
                 case 4:
                cout<<"Enter height: ";
                cin>>height;
                u.setHeight(height);
                break;
                 case 5:
                cout<<"Enter shoe_size: ";
                cin>>shoe_size;
                u.setShoeSize(shoe_size);;
                break;
                 case 6:
                cout<<"Enter gender: ";
                cin>>g;
                u.setGender(g);
                u.getDemographic();
                break;
            }
            break;
            
            case 2:
            cout<<"1.Update shoe size\n2.Update shoe width\n3.Update shoe style\n4.Update shoe brand\n5.Update shoe colour\n6.Update shoe dem\n";
            cin>>ch;
            switch (ch){
                case 1:
                 cout<<"Enter shoe size: ";
                cin>>size;
                s.setsize(size);
                break;
                case 2:
                 cout<<"Enter shoe width: ";
                 cin>>width;
                 s.setwidth(width);;
                 break;
                  case 3:
                cout<<"Enter shoe style: ";
                cin>>style;
                s.setstyle(style);
                break;
                 case 4:
                cout<<"Enter shoe brand: ";
                cin>>brand;
                s.setbrand(brand);;
                break;
                 case 5:
                cout<<"Enter shoe colour: ";
                cin>>colour;
                s. setcolour(colour);
                break;
                 case 6:
                cout<<"Enter shoe dem: ";
                cin>>dem;
                s.setdem(dem);
                
                break;
         }
         break;
         case 3:
         cout<<"First name: "<<u.getFirstName()<<endl;
         cout<<"Last name: "<<u.getLastName()<<endl;
         cout<<"Age: "<<u.getAge()<<endl;
         cout<<"Demograohic: "<<u.getDemographic()<<endl;
         cout<<"Gender: "<<u.getGender()<<endl;
         cout<<"ID: ";
		 cout<<u.getId();
		 cout<<endl;
         cout<<"Shoe size: "<<u.getShoeSize()<<endl;
         cout<<"Height: "<<u.getHeight()<<endl;
         break;
         case 4:
         cout<<"shoe size: "<<s.getsize()<<endl;
         cout<<"shoe dem: "<<s.getdem()<<endl;
         cout<<"shoe width: "<<s.getwidth()<<endl;
         cout<<" shoe style: "<<s.getstyle()<<endl;
         cout<<"shoe brand: "<<s.getbrand()<<endl;
         cout<<"shoe colour: "<<s.getcolour()<<endl;
         break;
        case 5:
        ch=69;

        break;
        }
}
}

