#include "Header.h"
#include <iomanip>
#define watch(x) cout << (#x) << " is " << (x) << endl

struct Testcase
{
	Testcase(int test_number){
		cout << "Test "<< test_number << " Passed\n{" << endl;
	}
    ~Testcase(){
		cout << "}" << endl; 
	} 
};

class Operations {
public:
	
		
	//template<class ...T>
	//static void values(T... args) {
	//	((cout << args << " "), ...);
	//	cout << endl;
	//}



	//helpful to find mac min of values
	template<typename T>
	static void showMinMax() {
		cout << "min: " << numeric_limits<T>::min() << endl;
		cout << "max: " << numeric_limits<T>::max() << endl;
		cout << endl;
	}

	//what i used to brute force some answers
	static void bruteforce() {
		int a{ 214748340 }, y{ 2 };
		cout << a + 1 << endl;
		while (1) {
			if (a + y != 0 && a + y < 0) {
				cout << "a: " << a << endl;
				break;
			}
			a++;
		}
	}

	static void part1() {
		Testcase part1(1);
		unsigned int a{ 4294967294 }, b{ 3 };
		cout << "(a + b) < a (" << (a + b < a) << ")" << endl;
		cout << "a= " << a << endl << "b= " << b << endl; 
		cout << "a + b = " << a + b << endl; 
	}

	static void part2() {
		Testcase part2(2);
		int a = 2147483646, b = 2;
		cout << "(a + b) < 0 (" << (a + b < 0) << ")" << endl;
		cout << "a= " << a << endl << "b= " << b << endl;
		cout << "a + b = " << a + b << endl;
	}

	static void part3() {
		Testcase part3(3);
		int a = -2147483645, b = -4;
		cout << "(a + b) > 0 (" << (a + b > 0) << ")" << endl;
		cout << "a= " << a << endl << "b= " << b << endl;
		cout << "a + b = " << a + b << endl;
	}

	static void part4() {
		Testcase part4(4);
		double a = 0.000000000007;
		cout << "(a+1.) = " << a + 1. << endl;
		cout << "a= " << a << endl;
		cout << a << " + 1. = " << a + 1. << endl;
	}
	static void part5() {
		Testcase part5(5);
		double a = 1, b = 1e20, c = -1e20;
		double x = (a + b) + c, y = (c + b) + a;;
		cout << "(a+b)+c != (c+b)+a (" << (y != x) << ")" << endl;
		cout << "a= " << a << endl << "b= " << b << endl;
		cout << "x = ("<< a << "+" << b << ") + " << c << endl;
		cout << "y = (" << c << "+" << b << ") + " << a << endl;
	}
	static void part6() {
		Testcase part6(6);
		cout << "pow(-2., 3) = " << pow(-2., 3) << ", pow(-2., 3.0) = "<< pow(-2., 3.0) << ", pow(-2., 3.00000000001) = " << pow(-2., 3.00000000001) << endl;
	}

	static void part7() {
		Testcase part7(7);
		cout << "sizeof(1.) = " << sizeof(1.) << endl; 
		cout << "sizeof(1.F) = " << sizeof(1.F) << endl;
		cout << "sizeof(1) = " << sizeof(1) << endl;
		cout << "sizeof('1') = " << sizeof('1') << endl;
		cout << "sizeof(\"1\") = " << sizeof("1") << endl;
	}

	static void part8() {
		Testcase part8(8);
		cout << "1./3 = " << setprecision(20) << (1. / 3) << endl;
	}

	static void part9() {
		Testcase part9(9);
		for (int i = 32; i <= 64; i++)
			cout << i << " " << char(i) << "\t" << (i+32) << " " << char(i+32) << "\t" << (i + 64) << " " << char(i + 64) << endl;
	}

	static void part10() {
		Testcase part10(10);
		cout << "sqrt(2.) = " << sqrt(2.) << endl;
	}

};