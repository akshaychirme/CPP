// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

/*
♦ Returning Object from Function:-
	- Return type of function is a class name of that function.
	- Static member function does not have Implicite or Explicite object.
	- The object which is called using 'Dot Membership Operator' is called implicite.

For Ex :- 
		Values sum(Values M)
		{
			Values temp;
			temp.a = a + M.a;
			temp.b = b + M.a;
			return temp;
		}
		V3 = V1.sum(V2);
		V3 = V2.sum(V1);
*/

//Ex:- WAP to add given time in hours and minutes.

// #include<iostream>
// using namespace std;

// class Time
// {
// 	int hours, minutes;
// 	public:
// 	void input(int h, int m)
// 	{
// 		hours = h;
// 		minutes = m;
// 	}
// 	void display(void)
// 	{	
// 		cout << hours << " Hours and " << minutes << " Minutes" << "\n";
// 	}
// 	Time sum(Time M);
// };

// Time Time::sum(Time M){
// 	Time temp;
// 	temp.minutes = minutes + M.minutes;
// 	temp.hours = temp.minutes / 60;
// 	temp.minutes = temp.minutes % 60;
// 	temp.hours = temp.hours + hours + M.hours;
// 	return temp;
// }

// int main(){
// 	Time T1, T2, T3;
// 	T1.input(2, 45);
// 	T2.input(3, 30);
// 	T3 = T1.sum(T2);
// 	T3.display();
// 	return 0;
// }


//Ex:- WAP to add given time in hours, minutes and seconds.


// #include<iostream>
// using namespace std;

// class Time
// {
// 	int hours, minutes,seconds;
// 	public:
// 	void input(int h, int m, int s)
// 	{
// 		hours = h;
// 		minutes = m;
// 		seconds = s;
// 	}
// 	void display(void)
// 	{	
// 		cout << hours << " Hours " << minutes << " Minutes and " << seconds<<"\n";
// 	}
// 	Time sum(Time M);
// };

// Time Time::sum(Time M){
// 	Time temp;
// 	temp.minutes = minutes + M.minutes;
// 	temp.hours = temp.minutes / 60;
// 	temp.minutes = temp.minutes % 60;
// 	temp.seconds = temp.seconds;
// 	temp.hours = temp.hours + hours + M.hours;
// 	return temp;
// }

// int main(){
// 	Time T1, T2, T3;
// 	T1.input(2, 45, 35);
// 	T2.input(3, 30, 40);
// 	T3 = T1.sum(T2);
// 	T3.display();
// 	return 0;
// }


/*
----------------	REFERANCE VARIABLE	-------------------

	• A variable which are provided alternate name for the priviously defined or existing variable is called 
		referance variable.
	• & = referance operator
syntax:-
	data_type & referance_variable = actual_variable

1) With using pointer :-
	• Limited referance variable you can create.

	int a;
	a = 4;
	int& b=a;			//here b is a referance variable of a.
	cout << a;	-->4
	cout << b;	-->4
	a++;
	cout << a;	-->5
	cout << b;	-->4
	b++;
	cout << a;	-->5
	cout << b;	-->6

	• int& --> referance to int
		   --> Datatype of b

2) Without using pointer :-
	• As many as you can create pointer.

	int a;
	a = 4;
	int* b = &a;
	cout << a;	-->4
	cout << *b;	-->4
	a++;
	cout << a;	-->5
	cout << b;	-->5
	b++;
	cout << a;	-->6
	cout << b;	-->6



*/

// #include<iostream>
// using namespace std;

// int main(){

// int a;
// a=4;
// int& b = a;
// cout << a;
// cout << b;
// a++;
// cout << a;
// cout << b;
// b++;
// cout << a;
// cout << b;

#include<iostream>
using namespace std;

int main(){

int a;
a=4;
int* b = &a;
cout <<"\n"<< a;
cout <<"\n"<< *b;
a++;
cout <<"\n"<< a;
cout <<"\n"<< *b;
b++;
cout <<"\n"<< a;
cout <<"\n"<< *b;



	return 0;
}

