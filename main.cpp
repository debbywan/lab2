#include<iostream>
#include<fstream>
using namespace std;

class Demo{
public:
    float c,d;
    float bmi();
};

float Demo::bmi(){
      return 10000*d/c/c;
}

int main(){
float a,b;
std::ifstream infile("file_in.txt");
std::ofstream outfile("file_out.txt");
Demo t;
while(infile>>a>>b && a!=0 &&b!=0)
{
t.c=a;
t.d=b;
outfile<<t.bmi()<<endl;
if(t.bmi() >=40)
    {
        outfile<<"obese class 3(very severely obese)"<<endl;
    }
else if(t.bmi() >=35&&t.bmi()<40) 
    {
        outfile<<"obese classⅡ(severely obese)"<<endl;
    }
else if(t.bmi() >=30 && t.bmi() <35) 
    {
        outfile<<"obese classⅠ(moderately obese)"<<endl;
    }
else if(t.bmi() >=25&& t.bmi ()<30) 
    {
        outfile<<"overweight"<<endl;
    }
else if(t.bmi ()>=18.5 && t.bmi()<25) 
    {
        outfile<<"normal "<<endl;
    }
else if(t.bmi() >=16 && t.bmi() <18.5) 
    {
        outfile<<"underweight"<<endl;
    }
else if(t.bmi ()>=15 && t.bmi()<16) 
    {
        outfile<<"severely underweight"<<endl;
    }

else if(t.bmi()<15) 
    {
        outfile<<"very severely underweight"<<endl;
    }
}
return 0;
}
