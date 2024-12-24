// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
string grade(int x){
    string a;
    if(x==1){
        a="A";
    }
    if(x==2){
        a="B+";
    }
    if(x==3){
        a="B";
    }
    if(x==4){
        a="C+";
    }
    if(x==5){
        a="C";
    }
    if(x==6){
        a="D+";
    }
    if(x==7){
        a="D";
    }
    if(x==8){
        a="F";
    }
    if(x==9){
        a="W";
    }
    return a;
}

int main(){
    cout <<"Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x=rand()%9+1;
    cout <<"You will get ";
    cout << grade(x); 
    cout << " in this 261102.";
    return 0;
}