#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n_a;
    cin >> n_a;
    vector<int> seq_a;
    int x;
    for(int i=0; i<n_a; i++)
    {
        cin >> x;
        seq_a.push_back(x);
    }

    int n_b;
    cin >> n_b;
    vector<int> seq_b;
    int y;
    for(int i=0; i<n_b; i++)
    {
        cin >> y;
        seq_b.push_back(y);
    }

    vector<int> seqall(seq_a.size() +seq_b.size());
    merge(seq_a.begin(), seq_a.end(), seq_b.begin(), seq_b.end(), seqall.begin());
    sort(seqall.begin(), seqall.end());
    /*
    for(int i=0; i < seqall.size(); i++)
    {
        cout << seqall[i] << " ";
    }
    */
    cout << seqall[(seqall.size()-1) / 2 ]<<endl;


    return 0;
}
