#include <string>
#include <iostream>

using std::cout;
using std::string;
enum HonourRoll{
		Principal,
		First,
		Second,
		None
};
class Grade{

private:
	double math,
		   english,
		   history,
		   infoTech;
	string getSpacing(double);
public:
	Grade(double, double, double, double);
	Grade();
	void setMath(double);
	double getMath();
	void setEnglish(double);
	double getEnglish();
	void setHistory(double);
	double getHistory();
	void setInfoTech(double);
	double getInfoTech();
	void printGrades();
	double getAvgGPA();
	HonourRoll getHonourRoll();
	
};
Grade::Grade(){}
Grade::Grade(double math, double english, double history, double infoTech){
	this->math     = math;
	this->english  = english;
	this->history  = history;
	this->infoTech = infoTech;
}

void Grade::setMath(double math){
	this->math = math;
}
double Grade::getMath(){
	return this->math;
}

void Grade::setEnglish(double english){
	this->english = english;
}
double Grade::getEnglish(){
	return this->english;
}

void Grade::setHistory(double history){
	this->history = history;
}
double Grade::getHistory(){
	return this->history;
}

void Grade::setInfoTech(double infoTech){
	this->infoTech = infoTech;
}
double Grade::getInfoTech(){
	return this->infoTech;
}

void Grade::printGrades(){
	cout << (int)(getMath()     + 0.5) << getSpacing(getMath()     )
		 << (int)(getEnglish()  + 0.5) << getSpacing(getEnglish()  )
		 << (int)(getHistory()  + 0.5) << getSpacing(getHistory()  )
		 << (int)(getInfoTech() + 0.5) << getSpacing(getInfoTech() );
}
string Grade::getSpacing(double grade){
	if(grade == 100)
		return " |";
	if(grade >= 10)
		return "  |";
	if(grade < 10)
		return "   |";
}
double Grade::getAvgGPA(){
	return (this->math + this->english + this->history + this->infoTech) / 4;
}
HonourRoll Grade::getHonourRoll(){
	if(this->getAvgGPA() == 4)
		return Principal;
	if(this->getAvgGPA() >= 3.5)
		return First;
	if(this->getAvgGPA() >= 3)
		return Second;
	return None;
}
//Grade.h