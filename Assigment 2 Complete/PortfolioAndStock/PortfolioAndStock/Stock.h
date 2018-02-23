
//****************************************************
// File: Stock.h
//
// Purpose: Contains an array of Stock.
//
// Written By: Juan Moreno
// 
// Compiler: Visual C++ 2015
//****************************************************

#ifndef STOCK_H
#define STOCK_H
#include <string>
class Stock {


	//****************************************************
	// Function: Private 
	//
	// Purpose: To hide implementation for the class
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated member variables to pointer.
	//
	//****************************************************
private:
	std::string *m_name;
	double *m_price;
	double *m_share;


	//****************************************************
	// Function: Public
	//
	// Purpose: use to access private members
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to work with pointers.
	//
	//****************************************************
public:

	//****************************************************************************
	// Function: Constructor
	//
	// Purpose: Set default Values
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated constructor to allocate memory for pointers.
	//			 
	//****************************************************************************
	Stock(); 

	//****************************************************************************
	// Function: Constructor with parameter
	//
	// Purpose: Copy data from on varible to another.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated constructor to allocate memory for pointers and setting 
	// values. 
	//			 
	//****************************************************************************
	Stock(std::string f, double p, double s); 

	//****************************************************************************
	// Function: Copy Constructor
	//
	//  Purpose: Used to perform a deep copy on variables to copy data
	//			from one variable to aother
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated constructor to copy data to pointer variables
	//			 
	//****************************************************************************
	Stock(const Stock &obj); 

	//****************************************************************************
	// Function: ~Stock
	//
	// Purpose: Free memory
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Added destructor to delete pointers.
	//			 
	//****************************************************************************
	~Stock(); 

	//****************************************************************************
	// Function: SetName
	//
	// Purpose: Set a string value to 
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description:Updated function to handle pointers when setting name.
	//			 
	//****************************************************************************
	void SetName(std::string n);

	//****************************************************************************
	// Function: SetPrice
	//
	// Purpose: Sets a double value to price
	//	
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated function to handle pointers when setting price.
	//
	//****************************************************************************
	void SetPrice(double p);

	//****************************************************************************
	// Function: SetShare
	//
	// Purpose: Sets a double value to share.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated function to handle pointers when setting share.
	//			 
	//****************************************************************************
	void SetShare(double s);
	
	//****************************************************************************
	// Function: GetName
	//
	// Purpose: Retreives the name value from the member variable
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated function to handle pointers when returning name.
	//			 
	//****************************************************************************
	std::string GetName();

	//****************************************************************************
	// Function: GetPrice
	//
	// Purpose: Retreives the price number from the member variable
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated function to handle pointers when returning price.
	//			 
	//****************************************************************************
	double GetPrice();

	//****************************************************************************
	// Function: GetShare
	//
	// Purpose:  Retreives the share number from the member variable
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated function to handle pointers when returning share.
	//			 
	//****************************************************************************
	double GetShare();

	//****************************************************************************
	// Function: CalculateValue
	//
	// Purpose: Multiplies Price * Share and returns the result.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated function to handle pointers.
	//			 
	//****************************************************************************
	double CalculateValue();

	//****************************************************************************
	// Function:  operator=
	//
	// Purpose: Overoading the assigment operator to set one instance of stock to another.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated function to handle pointers.
	//			 
	//****************************************************************************
	Stock& operator=(const Stock& stock);

	//****************************************************************************
	// Function: operator<<
	//
	// Purpose: Overloading the ostream operator to print a tock value to the screen.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated function to handle pointers to print to the screen.
	//****************************************************************************
	friend std::ostream & operator<<(std::ostream & os, Stock &ref);

	//****************************************************************************
	// Function:  operator>>
	//
	// Purpose: Overloading the istream operator to insert data to member variables.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Added istream operator insert data to member variables.
	//			 
	//****************************************************************************
	friend std::istream & operator>>(std::istream & in, Stock &ref);


};
#endif 