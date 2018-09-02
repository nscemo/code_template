#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
stack<int> hanoi[3];
void move(int from ,int to,int via,int num)
{
    if(num==0) return;
    move(from,via,to,num-1);
    int top = hanoi[from].top();
    hanoi[to].push(top);
    hanoi[from].pop();
    for(int i = 0;i<3;i++) cout<<hanoi[i].size()<<' ';
    cout<<endl;
    move(via,to,from,num-1);
}
int main()
{
    int num = 5;
    for(int i = num;i>0;i--)
    {
        hanoi[0].push(i);
    }
    move(0,2,1,num);
    return 0;
}
