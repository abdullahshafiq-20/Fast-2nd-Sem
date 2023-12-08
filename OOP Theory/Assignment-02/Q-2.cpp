#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class course
{
    string c_name;
    string c_code;
    string c_grade;
    int c_hours;

public:
    string getC_name()
    {
        return c_name;
    }
    void setC_name(string c_name)
    {
        this->c_name = c_name;
    }
    string getC_code()
    {
        return c_code;
    }

    void setC_code(string c_code)
    {
        this->c_code = c_code;
    }

    int getC_hours()
    {
        return c_hours;
    }
    void setC_hours(int c_hours)
    {
        this->c_hours = c_hours;
    }
    string getC_grade()
    {
        return c_grade;
    }
    void setC_grade(string c_grade)
    {
        this->c_grade = c_grade;
    }

    course()
    {
    }
    course(string c_name, string c_code, int c_hours, string c_grade)
    {
        setC_name(c_name);
        setC_code(c_code);
        setC_hours(c_hours);
        setC_grade(c_grade);
    }
};
class student : public course
{
    string s_id;
    string s_name;
    double s_fees = 0;
    int c_enrolled;
    bool feespaid;
    int t_hours = 0;
    double t_grade = 0;
    string grade;
    int hour;

public:
    string getS_id()
    {
        return s_id;
    }
    void setS_id(string s_id)
    {
        this->s_id = s_id;
    }
    string getS_name()
    {
        return s_name;
    }
    void setS_name(string s_name)
    {
        this->s_name = s_name;
    }
    int getC_enrolled()
    {
        return c_enrolled;
    }
    void setC_enrolled(int c_enrolled)
    {
        this->c_enrolled = c_enrolled;
    }
    void set_fees_paid(bool feespaid)
    {
        this->feespaid = feespaid;
    }
    bool get_fees_paid()
    {
        return feespaid;
    }

    student()
    {
    }
    student(string s_id, string s_name, int c_enrolled)
    {
        setS_id(s_id);
        setS_name(s_name);
        setC_enrolled(c_enrolled);
    }
    void cal_t_grade(string grade, int hour)
    {
        this->grade = grade;
        if (hour == 3)
        {
            if (grade == "A")
            {
                t_grade = t_grade + (4.0 * 3);
            }
            else if (grade == "A-")
            {
                t_grade = t_grade + (3.67 * 3);
            }
            else if (grade == "B+")
            {
                t_grade = t_grade + (3.33 * 3);
            }
            else if (grade == "B")
            {
                t_grade = t_grade + (3.0 * 3);
            }
            else if (grade == "B-")
            {
                t_grade = t_grade + (2.67 * 3);
            }
            else if (grade == "C")
            {
                t_grade = t_grade + (2.0 * 3);
            }
            else if (grade == "D")
            {
                t_grade = t_grade + (1.0 * 3);
            }
            else if (grade == "F")
            {
                t_grade = t_grade + 0.0;
            }
        }
        else if (hour == 2)
        {
            if (grade == "A")
            {
                t_grade = t_grade + (4.0 * 2);
            }
            else if (grade == "A-")
            {
                t_grade = t_grade + (3.67 * 2);
            }
            else if (grade == "B+")
            {
                t_grade = t_grade + (3.33 * 2);
            }
            else if (grade == "B")
            {
                t_grade = t_grade + (3.0 * 2);
            }
            else if (grade == "B-")
            {
                t_grade = t_grade + (2.67 * 2);
            }
            else if (grade == "C")
            {
                t_grade = t_grade + (2.0 * 2);
            }
            else if (grade == "D")
            {
                t_grade = t_grade + (1.0 * 2);
            }
            else if (grade == "F")
            {
                t_grade = t_grade + 0.0;
            }
        }
    }
    double getT_grade()
    {
        return t_grade;
    }
    void cal_crh(int hr)
    {
        t_hours = t_hours + hr;
    }
    int getT_hours()
    {
        return t_hours;
    }
    void cal_GPA()
    {
        float gpa = 0;
        gpa = getT_grade() / getT_hours();
        cout << "GPA: " << gpa << endl;
    }
    void cal_PER()
    {
        float per;
        per = ((getT_grade() / getT_hours()) * 100) / 4.0;
        cout << "Percentage: " << per << "%" << endl;
    }

    void cal_fees(int id)
    {
        id = (id / 2) * 1000;
        if (get_fees_paid() == true)
        {
            s_fees = getT_hours() * id;
        }
        else if (get_fees_paid() == false)
        {
            s_fees = getT_hours() * id;
            s_fees = s_fees + (s_fees * 0.05);
        }
    }
    double getS_fees()
    {
        return s_fees;
    }
};

int main()
{
    string id;
    string s_name;
    int c_enrolled;
    string c_name;
    string c_code;
    string c_grade;
    int c_hours;
    bool status;
    int first_2_digits;
    cout<<"\n### 22k-4489 ###\n### Abdullah Shafiq ###"<<endl;
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Name: ";
    cin >> s_name;
    cout << "Enter Number of Courses Enrolled: ";
    cin >> c_enrolled;
    student s(id, s_name, c_enrolled);
    first_2_digits = stoi(id.substr(0, 2));
    course c[c_enrolled];
    for (int i = 0; i < c_enrolled; i++)
    {
        cout << "Enter Course Name: ";
        cin >> c_name;
        cout << "Enter Course Code: ";
        cin >> c_code;
        cout << "Enter Course Hours: ";
        cin >> c_hours;
        cout << "Enter Course Grade: ";
        cin >> c_grade;
        c[i].setC_name(c_name);
        c[i].setC_code(c_code);
        c[i].setC_hours(c_hours);
        c[i].setC_grade(c_grade);
        s.cal_t_grade(c_grade, c_hours);
        s.cal_crh(c_hours);
    }

    cout << "Enter Fees Status (1/0): ";
    cin >> status;
    cout<<"\n### 22k-4489 ###\n### Abdullah Shafiq ###"<<endl;
    cout << "Student ID: " << s.getS_id() << endl;
    cout << "Student Name: " << s.getS_name() << endl;
    cout << "Number of Courses Enrolled: " << s.getC_enrolled() << endl;
    if (status == true)
    {
        s.set_fees_paid(true);
        s.cal_fees(first_2_digits);
        cout << "Course Name" << setw(15) << "Course Code" << setw(15) << "Credit Hours" << setw(15) << "Course Grade" << endl;
        for (int k = 0; k < c_enrolled; k++)
        {
            cout << c[k].getC_name() << setw(18) << c[k].getC_code() << setw(15) << c[k].getC_hours() << setw(15) << c[k].getC_grade() << endl;
        }
        // cout << "Grade: " << s.getT_grade();
        cout << "\nTotal Credit Hours :" << s.getT_hours() << endl;
        cout << "Fees *PAID* :" << s.getS_fees() << endl;
        s.cal_GPA();
        s.cal_PER();
    }
    else if (status == false)
    {
        s.set_fees_paid(false);
        s.cal_fees(first_2_digits);
        cout << "Course Name" << setw(15) << "Course Code" << setw(15) << "Credit Hours" << setw(15) << "Course Grade" << endl;
        for (int k = 0; k < c_enrolled; k++)
        {
            cout << c[k].getC_name() << setw(18) << c[k].getC_code() << setw(15) << c[k].getC_hours() << setw(15) << "LOCKED" << endl;
        }
        cout << "\nTotal Credit Hours :" << s.getT_hours() << endl;
        cout << "Fees *NOT PAID*, Amount DUE :" << s.getS_fees();
    }
    return 0;
}