#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct Student{
    int ID;
    string name;
    int grades;
};

void Print(Student* stus, int N)
{
    for(int i=0; i<N; i++)
    {
        cout.fill('0');
        cout.width(6);
        cout << stus[i].ID<<" ";
        cout << stus[i].name<< " "<< stus[i].grades<<endl;
    }
}
int type;

bool cmp(Student a, Student b)
{
    if(type == 1)
    {
        return a.ID < b.ID;
    }
    else if(type == 2)
    {
        if(a.name == b.name)
        {
            return a.ID < b.ID;
        }
        else
        {
         return a.name < b.name;
        }
    }
    else
    {
        if(a.grades == b.grades)
        {
            return a.ID < b.ID;
        }
        else
        {
            return a.grades < b.grades;

        }
    }

}

Student* Sort(Student* stus,int n)
{
    sort(stus, stus+n, cmp);
    return stus;
}




int main()
{

    //freopen("F://PATStudy//1007//input.txt", "r", stdin);
    int N,C;
    cin >> N >> C;
    type = C;
    Student *stus = new Student[N];
    for(int i=0; i<N; i++)
    {
        cin >> stus[i].ID >> stus[i].name >> stus[i].grades;
    }
    stus = Sort(stus, N);

    Print(stus, N);

    return 0;
}
