float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
   switch (operation){
        case '+':
            result=x+y;
            break;
        case '-':
            result=x-y;
            break;
        case '*':
            result=x*y;
            break;
        case '/':
            result=x/y;
            break;
    }
   return result;
}
#include "iostream"
using namespace std;
int main (){
    float x;
    float y;
    char operation;
    cout<<"Enter two integers:"<<endl;
    cin>>x>>y;
    cout<<"Choose the operation (+,-,*,/):"<<endl;
    cin>>operation;
    cout<<problemSolution5(x, y, operation);

}
