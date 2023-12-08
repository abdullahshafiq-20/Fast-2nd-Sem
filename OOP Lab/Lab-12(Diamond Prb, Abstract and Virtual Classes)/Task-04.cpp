#include <iostream>
#include <string>
using namespace std;
class Marks
{

public:
    virtual void getpercentage() = 0;
};
class A : public Marks
{
    double score_1;
    double score_2;
    double score_3;

public:
    A(double s1, double s2, double s3) : score_1(s1), score_2(s2), score_3(s3) {}

    void getpercentage()
    {
        double Total_score = score_1 + score_2 + score_3;
        double percentage = (Total_score / 300) * 100;
        cout << "Percentage of A: " << percentage << endl;
    }
};
class B : public Marks
{
    double score_1;
    double score_2;
    double score_3;
    double score_4;

public:
    B(double s1, double s2, double s3, double s4) : score_1(s1), score_2(s2), score_3(s3) {}

    void getpercentage()
    {
        double Total_score = score_1 + score_2 + score_3+ score_4;
        double percentage = (Total_score / 400) * 100;
        cout << "Percentage of B: " << percentage << endl;
    }
};
int main()
{
    Marks *marks;
    A a(56, 98, 12);
    marks = &a;
    marks->getpercentage();
    B b(16, 98, 57, 77);
    marks = &b;
    marks->getpercentage();
    return 0;
}
