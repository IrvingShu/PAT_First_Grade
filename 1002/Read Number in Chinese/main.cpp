#include <iostream>
#include <vector>
using namespace std;



int main()
{
    string a[11] ={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string b[] = {"Shi", "Bai", "Qian", "Wan", "Yi"};
    vector<string> result;
    vector<int> temp;
    long int num;
    cin >> num;
    if(num == 0)
    {
        cout <<"ling";
    }
    else if(num < 0)
    {
        cout << "Fu";
    }
    else{
       while(num)
       {
          int t = num % 10;
          num /= 10;
          temp.push_back(t);
       }
    }

    l = temp.size();


    cout << "l:"<<l << endl;
    return 0;
}
