/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015

#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/PAT_MOOC_DS\03_3.cc
#       @Last modified         :2015-06-30 21:22
#       @Description    :
=============================================================================*/
#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<stdio.h>

using namespace std;

int find_head(vector<int> &v, int data){
    for(int i = 0; i!= v.size(); ++i)
        if(v[i]==data)
            return i;
}
void find_post(vector<int> &v1, vector<int> &v2,int left2, int right2, int head1){
    int head2 = find_head(v2, v1[head1]);
    int left_size = head2 - left2;
    if(head1!=v1.size()){
    if(head2>left2)
        find_post(v1,v2,left2, head2-1, head1+1);
    if(head2<right2)
        find_post(v1,v2,head2+1,right2,head1+left_size+1);
    if(head1==0)
        cout << v1[head1];
    else
        cout << v1[head1] <<" ";
    }
}
int main(){
    int N;
    string s;
    int node;
    vector<int> pre_v;
    vector<int> in_v;
    stack<int> sta;
    cin >> N;
    for(int i=0;i != 2*N; ++i){
        cin >> s;
        if(s=="Push"){
            cin>>node;
            pre_v.push_back(node);
            sta.push(node);
        }
        else{
            in_v.push_back(sta.top());
            sta.pop();
        }
    }
    find_post(pre_v,in_v,0,pre_v.size()-1,0);
    return 0;
}
