#include <iostream>
#include <vector>
using namespace std;

vector<string>& Convert(vector<string> &color,int r,int g,int b,vector<string>& a)
{

    color[1] = a[r/13];

    color[2] = a[r%13];

    color[3] = a[g/13];

    color[4] = a[g%13];
    color[5]=  a[b/13];

    color[6] = a[b%13];

    return color;
}

int main()
{
    vector<string> a(13);
    a[0]="0";
    a[1]="1";
    a[2]="2";
    a[3]="3";
    a[4]="4";
    a[5]="5";
    a[6]="6";
    a[7]="7";
    a[8]="8";
    a[9]="9";
    a[10]="A";
    a[11]="B";
    a[12]="C";



    int r,g,b;
    cin >> r >> g >> b;


    vector<string> color(7);
    color[0] = '#';

    color = Convert(color, r, g, b,a);

    for(unsigned int i=0; i < color.size(); i++)
    {
        cout << color[i];
    }


    return 0;
}
