#include <iostream> 
using namespace std;
int Sum(int var1, int var2) {
    int var = var1+var2;
    cout <<"sum calculated";
    return var;
}
int main() {
    int a,b,var;
    cout<<"enter number:";
    cin>>a;
    cin>>b;
    var=Sum(a,b);
    cout<<"the result is:"<<var<< endl;
    if(var<=10){cout<<"sum less than ten\n";} 
    else{cout<<"sum greater than 10\n";}
    return 0;
}

// let's admit it, this code is ugly to look at and read.

// Imagine something like this, but 100 times longer:
// after a week, even the person who created this program
// would not be able to easily work on it again.