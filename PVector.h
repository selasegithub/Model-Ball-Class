
//#ifndef PVECTOR_H
//#define PVECTOR_H

#include <iostream>
using namespace std;


class PVector
{

	private:
		float x;
		float y;
		float xSpeed;
		float ySpeed;
		
	public:
	
		//Default constructor
		PVector();
		
		//constructor for private data members
		PVector(float x_, 
		float y_, 
		float xSpeed_, 
		float ySpeed_);
		
	/* 	//constructor for private data members
		PVector(float xSpeed_, float ySpeed_); */
		
		//Declare getters for private data members
		float GetX();
		float GetY();
		float GetXSpeed();
		float GetYSpeed();
		
		//Declare setters for private data members
		void SetX(const float x_);
		void SetY(const float y_);
		void SetXSpeed(const float xSpeed_);
		void SetYSpeed(const float ySpeed_);
	
	
}
		
//#endif
