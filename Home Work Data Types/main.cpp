#include <iostream>
using namespace std;
#define delimiter "\n------------\n"
#define LOGICAL_TYPES
void main ()
{
#if defined LOGICAL_TYPES
	cout <<"SHORT"<< endl;
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << 0 << "..." << USHRT_MAX << endl;
	cout << delimiter << endl;

	cout << "LONG" << endl;
	cout << sizeof(long) << endl;
	cout << LONG_MIN << "..." << LONG_MAX << endl;
	cout << 0 << "..." << ULONG_MAX << endl;
	cout << delimiter << endl;

	cout << "INT" << endl;
	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << INT_MAX << endl;
	cout << 0 << "..." << UINT_MAX << endl;
	cout << delimiter << endl;

	cout << "LONG LONG" << endl;
	cout << sizeof(long long) << endl;
	cout << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << 0 << "..." << ULLONG_MAX << endl;
#endif
}