#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
    ifstream source("//Users//worwee07//Documents//CompPro//lab9//lab9-2562-2-worsrp//score.txt");
    double sum=0,sumsq=0,count=0,mean,sd;
    string textline;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sumsq += pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum/count;
    sd = sqrt((1/count*sumsq)-pow(mean,2));
    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd << "\n";
    source.close();
    return 0;
}
