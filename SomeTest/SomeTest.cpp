#include <iostream>

using namespace std;

class CalculatePerimeter
{
	public:
		const double pi = 3.14159265358979323846264338327950288419716939937510;
		double diamater = 0;

		CalculatePerimeter()
		{
			cout << "CalcluatePerimeter" << endl;
		}

		int GetDiameter()
		{
			cout << "Please input the diameter:" << endl;
			cin >> this->diamater;
			return 0;
		}

		double Calculate()
		{
			return this->pi * this->diamater*2;
		}

		int run()
		{
			this->GetDiameter();
			cout << "The Diameter is " << this->diamater << " " << "and the perimeter is " << this->Calculate() << endl;
			return 0;
		}
};

int main()
{
	CalculatePerimeter demo;
	while (1)
	{
		demo.run();
	}
	system("Pause");
	return 0;

}