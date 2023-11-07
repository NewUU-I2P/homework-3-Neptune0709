#include <string>

std::string problemSolution3(float height, char S) {
    string result;
    // write your code here
cin>>s>>height;
    if (s==77){
        if (height<1.70){
            result="Short";
        } else if (height>=1.70&&height<1.85){
            result="Normal";
        } else{
            result="Tall";
        }
    } else{
        if (height<1.60){
            result="Short";
        } else if (height>=1.60&&height<1.75){
            result="Normal";
        } else{
            result="Tall";
        }
    }
    return result;
    // use return to return your result
    // make use of control flow statements
}
