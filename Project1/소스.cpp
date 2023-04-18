#include <iostream>
#include <string>	
using namespace std;

class Employee {
public:

	Employee() {
		name = "������";
		id = 88;
		age = 17;
		salary = 53.2;
	}
	Employee(string _name, int _id, int _age, double _salary)
		: name(_name), id(_id), age(_age), salary(_salary) {}
	void PrintInfo() {
		cout << "�̸� :" << name << endl;
		cout << "��� :" << id << endl;
		cout << "���� :" << age << endl;
		cout << "�޿� :" << salary << endl;
	}
	void set_name(string _name) { name = _name; }
	void set_id(int _id) { id = _id; }
	void set_age(int _age) { age = _age; }
	void set_salary(double _salary) { salary = _salary; }

private:
	string name;
	int id;
	int age;
	double salary;

};


int main() {
	
	Employee* per1 = new Employee("������", 2214, 17, 500.4);
	per1->PrintInfo();
	delete per1;
	Employee* per2 = new Employee[2];
	per2[0].set_name("�ֿ���");
	per2[0].set_id(787);
	per2[0].set_age(25);
	per2[0].set_salary(10000);

	per2[1].set_name("Ȳ����");
	per2[1].set_id(55);
	per2[1].set_age(24);
	per2[1].set_salary(10000);

	for (int i = 0; i < 1; i++) {
		per2[i].PrintInfo();
	}
	delete[] per2;

	return 0;
}