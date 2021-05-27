#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_number;
		public:
			void setroll_number(int );
			void getroll_number(void);
};
void student::setroll_number(int r)
{
	roll_number=r;
}
void student::getroll_number(void)
{
	cout<<"the value of roll_number is "<<roll_number<<endl;
}
class exam:public student
{
	protected:
		float maths;
		float physics;
		public:
			void setmarks(float m1,float m2);
			void getmarks(void);
		
};
void exam::setmarks(float m1,float m2)
{
	maths=m1;
	physics=m2;
}
void exam::getmarks()
{
	cout<<"the marks in maths is ="<<maths<<endl;
	cout<<"the marks in physics is ="<<physics<<endl;
}
class marks:public exam
{
	float percentage;
	public:
		void displayresults()
	{
		getroll_number();
		getmarks();
		cout<<"the percentage obtained in exams is "<<(maths+physics/2)<<"%"<<endl;
		
	}
};
	int main()
	{
		marks result;
		result.setroll_number(191944);
		result.setmarks(93.0,98.0);
		result.displayresults();
		return 0;
	}3
	
