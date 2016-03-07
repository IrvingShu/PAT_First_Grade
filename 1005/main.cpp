#include <iostream>


using namespace std;



int main()
{
    int m_col, n_row;
    cin >> m_col >> n_row;
    int color = 0;
    int c = 0;
    int t;
    for(int i = 0; i < n_row; i++)
    {
        for(int j=0; j < m_col; j++)
        {
            cin >> t;
            if(t != color)
            {
                if(c==0)
                {
                    color = t;
                }
                else
                {
                    c--;
                }
            }
            else
            {
                c++;
            }
        }
    }
    cout << color;

}
