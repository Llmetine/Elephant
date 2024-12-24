// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
char grade(int x){
    string run[]={"A","B+","B","C+","C","D+","D","F","W"};
    for(int i=1;i<=9;i++){
        if(x==i){
            cout << run[i];
        }
    }
    return ' ';
}
int main(){
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x=rand()%9+1;
    cout << grade(x);
    return 0;
}