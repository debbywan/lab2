#include<iostream>
#include <string>
#include <cstdlib>

using namespace std;

class bmi{
	public:
		void weight(float in);
		void height(float in);
		float result(void);
		string kind(void);
	private:
		float h;
		float w;
		float r;
};

