#include<iostream>
using namespace std;

class Vehicle
{
	void fuelAmount()
	{
		cout<<"The amount of fuel is="<<endl;
	}
	void Capacity()
	{
		cout<<"Enter the capacity of vehicle="<<endl;
	
	}
	void Applybreaks()
	{
		cout<<"The Apply the break="<<endl;
	}
	
};
class Bus:Vehicle
{
	
};
class Car:Bus
{
	
};

int main()
{
	Car ob;
	ob.fuelAmount();
	ob.Capacity();
	ob.Applybreak();
	
}
