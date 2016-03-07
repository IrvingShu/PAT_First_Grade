#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct Student{
    string name;
    string ID;
    int grade;
}Student;

Student* Sort(Student stus[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(stus[i].grade < stus[j].grade)
            {
                Student t = stus[j];
                stus[j] = stus[i];
                stus[i] = t;
            }
        }
    }
    return stus;
}

int main()
{
    int num;
    cin >> num;
    Student *students = new Student[num];

    for(int i = 0; i < num; i++)
    {
        cin >> students[i].name>>students[i].ID>> students[i].grade;
    }
    int bottom, top;
    cin >> bottom >> top;
    Student *a = Sort(students, num);
    bool has = false;
    for(int i = 0; i <num; i++)
    {
        if(a[i].grade >=bottom && a[i].grade <= top)
        {
            cout << a[i].name<<" "<< a[i].ID;
            has = true;
        }
        cout << endl;
    }
    if(!has) cout <<"NONE" << endl;;

    return 0;
}
