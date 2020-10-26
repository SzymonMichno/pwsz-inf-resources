#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

#define STUDENTS_COUNT 10

class Student {
	public:
		string studentNo;
			
		void setStudentNo(string studentNo) {
			this->studentNo = studentNo;
		}
		
		string getStudentNo() {
			return this->studentNo;
		}
};

string getRandomStudentNumber() {
	ostringstream ss;
	int randomNumber = rand() % 2000 + 37000;
	
	ss << randomNumber;
	
	return ss.str();
}


int main() {
	vector<Student> students;
	
	string imiona[15]={"Szymon","Marek","Karol","Jakub","Mateusz","Kamil","Jacek","Krzysztof","Zygmunt","Wojciech","Mariusz","Bartosz","Grzegorz","Eryk","Witold"};
	string nazwiska[10]={"a","b","c","d","e","f","g","h","i","j"};
	int x[2]={0,4};
	
	for(unsigned i = 0; i < STUDENTS_COUNT; i++) {
		Student student;
		student.setStudentNo(getRandomStudentNumber());
		students.push_back(student);
	}
	
	cout  << "Students group have been filled." << endl << endl;
	
	for(unsigned i = 0; i < students.size(); i++) {
		Student student = students.at(i);
		cout << student.getStudentNo()<<" ";
		cout<< imiona[rand() % 15] << " " << nazwiska[rand() % 10]<< " " << x[rand() % 2]<<endl;
	}
	

	for(unsigned i = 0; i < students.size(); i++) {
		Student student = students.at(i);
		if(int x=4){
		cout << student.getStudentNo() << endl;
		cout<< imiona[rand() % 15] << " " << nazwiska[rand() % 10]<< " " << x[rand() % 2]<<endl;
	}}
		
	return 0;
}
