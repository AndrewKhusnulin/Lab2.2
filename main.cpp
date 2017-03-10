#include "iostream"
#include <string.h>
using namespace std;
class Point {
	char Surname [64];
	int point;
public:
	Point() {
		point = Surname [0] = 0;
	}

	void set(char sur[], double p) {
		strcpy(Surname, sur);
		point = p;
	}

	Point(char sur[], double p) {
		strcpy(Surname, sur);
		point = p;
	}

	void print() {
		cout << "Surname: " << Surname << endl << "Point: " << point << endl;
	}
};
int main()
{
	int n;
	char a[256], b[256];
	do
	{
		cout << "Number of students: ";
		cin >> b;
		n = atoi(b);
	} while (n <= 0);
	char S[64];
	double r, k = 0;
	Point **ppA;
	ppA = new Point*[n];
	for (unsigned int i = 0; i<n; ++i)
	{
		cout << "Student [" << (i + 1) << "] Surname: ";
		cin >> S;
		do
		{
			cout << "Point: ";
			cin >> a ;
			r = atoi(a);
		} while (r <= 0);
		ppA[i] = new Point(S, r);
		k += r;
	}
	for (unsigned int i = 0; i < n; ++i)
		ppA[i]->print();
	cout << "Average point: " << k / n;
	for (unsigned int i = 0; i < n; ++i) delete ppA[i];
	delete[]ppA;
	cout << endl << endl << "Press any button to exit the program!" << endl;
	system("pause");
	return 0;
}
