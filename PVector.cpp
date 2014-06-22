
#include "PVector.h"


		//Default constructor
		PVector::PVector()
		{
			x = 0;
			y = 0;
		}
		
		//constructor for private data members
		PVector::PVector(float x_, float y_, float xSpeed_, float ySpeed_)
		{
			x = x_;
			y = y_;
			xSpeed = xSpeed_;
			ySpeed = ySpeed_;
		}
		
		/* //constructor for private data members
		PVector(float xSpeed_, float ySpeed_)
		{
			xSpeed = xSpeed_;
			ySpeed = ySpeed_;
		} */
		
		//implement getters for private data members
		float PVector::GetX()
		{
			return x;
		}
		float PVector::GetY()
		{
			return y;
		}
		float PVector::GetXSpeed()
		{
			return xSpeed;
		}
		float PVector::GetYSpeed()
		{
			return ySpeed;
		}
		
		//implement setters for private data members
		void PVector::SetX(const float x_)
		{
			x = x_;
		}
		void PVector::SetY(const float y_)
		{
			y = y_;
		}
		void PVector::SetXSpeed(const float xSpeed_)
		{
			xSpeed = xSpeed_;
		}
		void PVector::SetYSpeed(const float ySpeed_)
		{
			ySpeed = ySpeed_;
		}
		
		
		//Function to set position of ball
		void setXY()
		{
			
		}
		
		//Function to set speed of ball
		void setXYSpeed()
		{
			
		}
		
		
		//Function to increase location based on speed respectively
		void move()
		{
			/*x = x + xSpeed;
			y = y + ySpeed;*/
		}
		
		//Function to display ball location and speed
		void print()
		{
			
		}
