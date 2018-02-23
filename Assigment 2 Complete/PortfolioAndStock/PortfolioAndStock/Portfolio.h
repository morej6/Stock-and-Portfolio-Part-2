
//****************************************************
// File: Portfolio.h
//
// Purpose: Contains an array of Stock.
//
// Written By: Juan Moreno
// 
// Compiler: Visual C++ 2015
//****************************************************


#ifndef PORTFOLIO_H
#define PORTFOLIO_H
#include <string>
#include "Stock.h"


class Portfolio {

	//****************************************************
	// Function: Private 
	//
	// Purpose: To hide implementation for the class
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated Stock variables to pointer and 
	// added sizeOfArray to keep track of the array size.
	//
	//****************************************************
private:
	int sizeOfArray;
	Stock *m_array;


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
	//****************************************************
public:

	//****************************************************************************
	// Function: Set
	//
	// Purpose: Sets a stock value to the given index.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to check an out of bounds array.
	//			 
	//****************************************************************************
	void Set(int index, Stock s);

	//****************************************************************************
	// Function: Get
	//
	// Purpose: retrives the value at the given index
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to minus 1 from index
	//			 
	//****************************************************************************
	Stock Get(int index);

	//****************************************************************************
	// Function: PriceRangeCount
	//
	// Purpose: Retrives the number of stocks that are between lowerbound and 
	//			upperbound
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to use sizeOfArray for loop condition
	//			 
	//****************************************************************************
	int PriceRangeCount(double lowerBound, double upperBound);

	//****************************************************************************
	// Function: MostShares
	//
	// Purpose: Retrives the stock with the most shares
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to use sizeOfArray for loop condition
	//			 
	//****************************************************************************
	Stock MostShares();

	//****************************************************************************
	// Function: FindByName
	//
	// Purpose: Searches the array to match the given name.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to use sizeOfArray for loop condition
	//			 
	//****************************************************************************
	bool FindByName(std::string name, Stock &v);

	//****************************************************************************
	// Function: TotalValue
	//
	// Purpose: Adds the stock value and adds them together.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to use sizeOfArray for loop condition
	//			 
	//****************************************************************************
	double TotalValue();

	//****************************************************************************
	// Function: Size
	//
	// Purpose: returns the size of the array
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to use sizeOfArray variable;
	//			 
	//****************************************************************************
	int Size();

	//****************************************************************************
	// Function: Default constructor
	//
	// Purpose: Initializes the array to default value
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to work with pointers.
	//			 
	//****************************************************************************
	Portfolio();

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
	// Description: Added copy constructor to copy data.
	//			 
	//****************************************************************************
	Portfolio(const Portfolio &obj);

	//****************************************************************************
	// Function: ~Portfolio
	//
	// Purpose: Free memory
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Added destructor to delete pointer data.
	//			 
	//****************************************************************************
	~Portfolio();

	//****************************************************************************
	// Function: operator=
	//
	// Purpose: Overoading the assigment operator to set one instance of Portfolio to another.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Added operator= to copy data.
	//			 
	//****************************************************************************
	Portfolio& operator=(const Portfolio& obj);

	//****************************************************************************
	// Function: Constructor with one parameter
	//
	// Purpose: Set the size of the array
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Added constructor to set the size of the array
	//			 
	//****************************************************************************
	Portfolio(int size);
	//****************************************************************************
	// Function: Initialize
	//
	// Purpose: Initializes the array to a default value
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Updated functions to use sizeOfArray variable;
	//****************************************************************************
	void Initialize();

	//****************************************************************************
	// Function: GetAuthor
	//
	// Purpose: returns the name of the author
	//		 
	//****************************************************************************
	std::string GetAuthor();

	//****************************************************************************
	// Function:  operator<<
	//
	// Purpose: Overloading the istream operator to insert data to member variables.
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Added ostream operatorto print out data.
	//			 
	friend std::ostream & operator<<(std::ostream & os, Portfolio &ref);
	//****************************************************************************
	// Function:  Resize
	//
	// Purpose: Changing the size of the array
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Added funtion to change the size of the array
	//***************************************************************************			 
	void Resize(int newSize);

	//****************************************************************************
	// Function:  *Clone
	//
	// Purpose: Use to copy an instance of Portfolio to another
	//
	// Update Information
	// ------------------
	// Name: Juan Moreno
	// Date 10/9/2017
	// Description: Added funtion to perform a deep copy.
	//***********************************************************************		 
	Portfolio *Clone();

};
#endif 