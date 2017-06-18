#include<iostream>
using namespace std;
class Animal 
{
private:
	int age;
	int position[2];
	int minEnergyLevel;
	int maxEnergyLevel;
public:
	void setAge(int newAge);
	void setMaxEnergyLevel(int newMaxEnergy);
	void setMinEnergyLevel(int newMinEnergy);
	Animal();
	int getAge();
	int getPosition1();
	int  getPosition2();
	int getMaxEnergyLevel();
	int getMinEnergyLevel();
	void move(int newposition[2]);
	void eat();

};
Animal::Animal()
{
	age=1;
	minEnergyLevel=5;
	maxEnergyLevel=10;
	position[0]=0;
	position[1]=0;
}
void Animal::setAge(int newAge)
{
	age=newAge;
}
void Animal::setMaxEnergyLevel(int newMaxEnergy)
{
	maxEnergyLevel=newMaxEnergy;
}
void Animal::setMinEnergyLevel(int newMinEnergy)
{
	minEnergyLevel=newMinEnergy;
}
int Animal::getAge()
{
	return age;
}
int Animal::getPosition1()
{
	return position[0];
}
int Animal::getPosition2()
{
	return position[1];
}
int Animal::getMinEnergyLevel()
{
	return minEnergyLevel;

}
int Animal::getMaxEnergyLevel()
{
	return maxEnergyLevel;
}
void Animal::move(int newPosition[2])
{
	position[0]=newPosition[0];
	position[1]=newPosition[1];
}
void Animal::eat()
{
	cout<<"EAT!"<<endl;
}
int main()
{
	int p[2]={1,2};
	Animal animal;
	animal.setAge(10);
	animal.setMaxEnergyLevel(4000);
	animal.setMinEnergyLevel(100);
	animal.move(p);
	cout<<animal.getAge()<<endl;
	cout<<animal.getMaxEnergyLevel()<<endl;
	cout<<animal.getMinEnergyLevel()<<endl;
	//cout<<animal.*getPosition()<<endl;
	cout<<animal.getPosition1()<<" "<<animal.getPosition2()<<endl;
	return 0;
}
