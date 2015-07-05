#include "bmi.h"

void bmi::weight(float in){
	w=in;
}

void bmi::height(float in){
	h=in;
}

float bmi::result(void){
	r = w/((h/100)*(h/100));
	return r;
}

string bmi::kind(void){
	if(r<15)
            return "Very severely underweight";
        else if(r<16 )
            return "Severely underweight";
        else if(r<18.5)
           return  "Underweight";
        else if(r<25)
            return "Normal";
        else if(r<30)
            return "Overweight";
        else if(r<35)
            return "Obese Class I (Moderately obese)";
        else if(r<40)
            return "Obese Class II (Severely obese)";
        else
            return "Obese Class III (Very severely obese)";
}
