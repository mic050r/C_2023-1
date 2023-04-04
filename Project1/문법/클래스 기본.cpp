#include <iostream>
#include <string>	
using namespace std;

struct Person {
	int height;
	int weight;

};
// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의첫 글자로 대문자로 함
// class는 디폴트 private(struct는 디폴트가 public)
class Student {

public:
	// 생성자 (constructor) : 객체를 생성할 때 호출되는 함수 tp나올듯
	// 생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의 된다
	Student() {
		hakbun = 2214;
		name = "임지현";
		department = "소프트웨어과";
		tel = "010-2222-9999";
		address = "경기도 수원시";
	}

public:
	Student(int _hakbun, string _name, string _department, string _tel, string _address) {

		hakbun = _hakbun;
		name = _name;
		department = _department;
		tel = _tel;
		address = _address;

	}

	//class 멤버 함수를 가질 수 있다
	void print() {
		cout << "==========학생 정보==========" << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "이름 : " << name << endl;
		cout << "학과 : " << department << endl;
		cout << "전화번호 : " << tel << endl;
		cout << "주소 : " << address << endl;
	}



private:
	// 성능 때문에 hakbun을 문자열로 하지 않음
	// 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	// 정수는 비교 연산을 한 번에 할 수 있으나, 문자열을 글자수 만큼 반복하여 비교해야함
	

	int hakbun;
	string name;
	string tel;
	string department;
	string address;

};

int main(void) {
	// 자료형 : Student(class 생략 가능)
	
	
	// 매개변수가 없는 생성자
	Student stu1 = Student();
	// Student stu1;
	//stu1.print();
	Student stu2 = Student(2214, "최연준와이프", "010-1004-1004", "뉴미디어소프트웨어과", "네마음속");
	//stu2.print();

	struct Person p;
	p.height = 181;
	p.weight = 62;
	
	struct Person* ptr = &p;

	// 둘 다 같은 결과
	cout << "키 : " << ptr->height << endl;
	cout << "몸무게 : " << (*ptr).weight << endl;
	

	return 0;
}



