#include <bits/stdc++.h>
using namespace std;

class Course
{
private:
    string course_id, course_name, course_leader;
    int duration;

public:
    Course(string cid, string cname, int dur) //Initializing value from a constructor
    {
        course_id = cid;
        course_name = cname;
        duration = dur;
        course_leader = ""; //Course Leader is initialized as empty string
    }

public:
    void setLeader(string x) //Setting the new value of course Leader
    {
        course_leader = x;
    }

    //Accessor Specifier
public:
    string getCourseId()
    {
        return course_id;
    }
    string getCourseName()
    {
        return course_name;
    }
    int getCourseDuration()
    {
        return duration;
    }
    string getCourseLeader()
    {
        return course_leader;
    }
};

int main()
{
    string cid;
    string cname;
    int dur;
    cin >> cid >> cname;
    cin >> dur;

    Course C(cid, cname, dur);
    string cLeader;
    cin >> cLeader;

    C.setLeader(cLeader);

    cout << "Course_Id"
         << ":" << C.getCourseId() << endl;
    cout << "Course_Name"
         << ":" << C.getCourseName() << endl;
    cout << "Course_Duration"
         << ":" << C.getCourseDuration() << endl;

    if (C.getCourseLeader() != "")
    {
        cout << "Course_Leader"
             << ":" << C.getCourseLeader() << endl;
    }
}