#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<set>
#include<queue>
#include<map>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>

using namespace std;
int arr[500];
class q{
    int head=-1,tail=-1,length;
    q(int len){
        length = len;
    }
    void push(int val){
        if((tail+1)%legnth == head){
            printf("The queue is FULL\n");
        }
        else if(head == tail && tail == -1){
            head = tail = 0;
            arr[tail]=val;
        }
        else {
            tail =(tail+1)%length;
            arr[tail]=val;
        }

    }
    void fron(){


    }

};
int main()
{

    int i,j,k,m,n,val,t=0,cnt,test;



    //free();   //if pointer array
    return 0;
}
