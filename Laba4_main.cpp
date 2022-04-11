#include <iostream>
#include "Pair.h"
#include "Fraction.h"

using namespace std;

void main()
{
	
	Pair p1, p2;
	cin >> p1;
	cout << p1;
 
	cin >> p2;
	cout << p2;

	string str = p1 > p2 ? "true" : "false";
	cout << "p1 > p2: " << str << "\n";
	str = p1 >= p2 ? "true" : "false";
	cout << "p1 >= p2: " << str << "\n";
	str = p1 < p2 ? "true" : "false";
	cout << "p1 < p2: " << str << "\n";
	str = p1<= p2 ? "true" : "false";
	cout << "p1<= p2: " << str << "\n";
	str = p1 == p2 ? "true" : "false";
	cout << "p1 == p2: " << str << "\n";
	str = p1 != p2 ? "true" : "false";
	cout << "p1 != p2: " << str << "\n";

	int f = p1.Get_first();
	int s = p1.Get_second();
	f = f + ++s;
	p1.Set_first(s);
	p1.Set_second(f);
	cout << p1;


	Fraction fr1,fr2;
	cin >> fr1;
	cout << fr1;

	cin >> fr2;
	cout << fr2;

	str = fr1 > fr2 ? "true" : "false";
	cout << "fr1 > fr2: " << str << "\n";

	str = fr1 >= fr2 ? "true" : "false";
	cout << "fr1 >= fr2: " << str << "\n";

	str = fr1 < fr2 ? "true" : "false";
	cout << "fr1 < fr2: " << str << "\n";

	str = fr1 <= fr2 ? "true" : "false";
	cout << "fr1<= fr2: " << str << "\n";

	str = fr1 == fr2 ? "true" : "false";
	cout << "fr1 == fr2: " << str << "\n";

	str = fr1 != fr2 ? "true" : "false";
	cout << "fr1 != fr2: " << str << "\n";

	f = fr1.Get_first();
	s = fr1.Get_second();
 
	p1.Set_first(s);
	p1.Set_second(f);
	f = f + ++s;
	 
	Fraction fr3;
	fr3 = Fraction(f,s,f/(double)s);
	cout << fr3;
}
//Вопросы
// 1. Для структурирования и повторно использования уже написанного кода, что, 
// в свою очередь, может значительно ускорить процесс разработки программ
// 2. Данные наследуются без изменения уровня доступа к ним
// 3. Все унаследованные данные становятся private
// 4. Все унаследованные данные становятся protected
// 5. К названию класса добавляются : после которого перечисляются наследуемые классы. 
// Описывать наследуемые переменные не нужно.
// 6. Конструкторы наследуются 
// 7. Деструкторы наследуются 
// 8. Сначала вызывается конструктор базового класса, а затем конструктор производного класса.
// 9. Сначала вызывается деструктор производного класса, а затем деструктор базового класса.
// 10. Виртуальные функции это функции связывание вызова которой с ее определением 
// происходит во время выполнения программы (то есть динамически).
// 11. Конструкторы не могут быть виртуальными, деструкторы могут.
// 12. Виртуальные спецификаторы наследуются 
// 13. При открытом наследование между классами устанавливается отношение "Класс-наследник является частью класса-родителя"
// 14. Закрытое наследование - наследование реализации (при наследовании заново реализуются все методы)
// 15. При соблюдении этого принципа разрешается производным классам использовать объекты базового класса без реализации
// 16. string name
// 17 - 20:
/*class Student
{
	
public:
	Student();
	Student(int, string );
	Student(const Student&);
 
	string name;
	Student& operator= (const Student&);
protected:
	int age;
};

Student::Student(void)
{
	age = 0;
	name = "";
}

Student::Student(int a, string n)
{
	age = a;
	name = n;
}

Student::Student(const Student&s)
{
	age = s.age;
	name = s.name;
}
 
Student& Student::operator=(const Student&s)
{
	if (&s == this) return *this;
	age = s.age;
	name = s.name;
	return *this;
}

class Employee: public Student
{
public:
	Employee();
	Employee(int, string, string);
	Employee(const Employee&, const Student&);
 
	Employee& operator= (const Employee&);
protected:
	string post;
};

Employee::Employee()
{
	age = 0;
	name = "";
	post = "";
}

Employee::Employee(int a, string n, string p) : Student(a, n) 
{

	post = p;
}
 
Employee::Employee(const Employee& e)  
{
	age = e.age;
	name = e.name;
	post = e.post; 
}
Employee& Employee::operator=(const Employee&e)
{
	if (&e == this) return *this;
	age = e.age;
	name = e.name;
	post = e.post;
	return *this;
}
class Teacher:public Employee
{
public:
	Teacher();
	Teacher(int, string, string, int);
	Teacher(const Teacher&);

	Employee& operator= (const  Teacher&);
	 

protected:
	int stage;
};

Teacher::Teacher() 
{
	age = 0;
	name = "";
	post = "";
	stage = 0;
}

Teacher::Teacher(int a, string n, string p, int s) : Employee(a, n, p)
{
	age = a;
	name = n;
	post = p;
	stage = s;
}

Teacher::Teacher(const Teacher&t)
{
	age = t.age;
	name = t.name;
	post = t.post;
	stage = t.stage;
}

Employee& Teacher::operator=(const Teacher&t)
{
	if (&t == this) return *this;
	age = t.age;
	name = t.name;
	post = t.post;
	stage = t.stage;
	return *this;
}
*\
