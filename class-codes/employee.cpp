#include <iostream>

using std::cout;
using std::endl;
using std::string;

class person {
	string name;	
	int age;
public:
	person(string name, int age) : name(name), age(age) {}

	string get_name() { 
		return name; 
	}
	void set_name(string name) { 
		this->name = name; 
	}

	int get_age() { 
		return age; 
	}
	void set_age(int age) { 
		this->age = age; 
	}

	void print_info() {
		cout << "Person (";
		cout << name << ", ";
		cout << age << " anos)" << endl;
	}
};

class client : public person {
	string membertype;

public: 
	client(string name, int age, string membertype) : person(name, age), membertype(membertype) {
	}

	string get_name() {
		return membertype;
	}
	void set_name(string membertype) {
		this->membertype = membertype;
	}
};

class employee : protected person {
	double salary;
public:
	employee(string name, int age, double salary) : person(name, age), salary(salary) {
	}

	double get_salary() {
		return salary;
	}
	void set_salary(double salary) {
		this->salary = salary;
	}

	void print_info() {
		person::print_info();
	}
};

class trainer : private person {
	string speciality;
public:
	trainer(string name, int age, string speciality) : person(name, age), speciality(speciality) {
	}

	string get_name(string speciality) {
		return speciality;
	}
	void set_name(string speciality) {
		this->speciality = speciality;
	}

	void print_info() {
		person::print_info();
	}
};

int main() {
	client c("John Doe", 25, "Gold");
	employee e("Jane Doe", 30, 5000.0);
	trainer t("Jack Doe", 40, "Yoga");
	
	c.print_info();
	e.print_info();
	t.print_info();
}