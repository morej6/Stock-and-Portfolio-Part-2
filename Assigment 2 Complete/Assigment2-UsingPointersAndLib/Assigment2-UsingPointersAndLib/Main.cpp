
//****************************************************
// Written By: Juan Moreno
// 
// Compiler: Visual C++ 2015
//****************************************************
#include <iostream>
#include "Portfolio.h"
#include "Stock.h"
using namespace std;

//****************************************************
// Function: Main
//
// Purpose: To call program
//
// Update Information
// ------------------
// 
// Name: Juan Moreno	
// Date: 10/28/2017
// Description: New functions were called in order 
// to test them
//
//*******************************************************

int main()
{
	Stock s;  //Constructor is called.

			  //SET/GET Method for Stock *************************************************************************************
	cout << "Stock GET/SET Method" << endl;

	cout << "*******************************************************************" << endl;
	string validName = "Juan"; //Setting name value to a string variable.
	s.SetName(validName); //Calling Stock set method and passing a string variable.
	if (validName == s.GetName()) { // Testing if the variable that was passed to the set method is return.
		cout << "Stock Get / Set Name, Valid Value : Pass" << endl;
	}
	else {
		cout << "Stock Get / Set Name, Valid Value : FAIL!" << endl;
	}

	double invalidPrice = -10; //Setting -10 to a double variable
	s.SetPrice(invalidPrice); //Calling set and passing -10
	if (invalidPrice == s.GetPrice()) { // Testing if -10 is set. 
		cout << "Stock Get / Set Price, Invalid Value : Pass" << endl;
	}
	else {
		cout << "Stock Get / Set Price, Invalid Value : FAIL!" << endl;
	}


	double invalidShare = -10; //Setting -10 to a double variable
	s.SetShare(invalidShare); //Calling set and passing -10
	if (invalidShare == s.GetShare()) { // Testing if -10 is set
		cout << "Stock Get / Set Share, Invalid Value : Pass" << endl;
	}
	else {
		cout << "Stock Get / Set Share, Invalid Value : FAIL!" << endl;
	}

	double validPrice = 10; //Setting 10 to a double variable
	s.SetPrice(validPrice); //Calling set and passing 10
	if (validPrice == s.GetPrice()) { // Testing if 10 is set
		cout << "Stock Get / Set Price, Valid Value : Pass" << endl;
	}
	else {
		cout << "Stock Get / Set Price, Valid Value : FAIL!" << endl;
	}


	double validShare = 10; //Setting 10 to a double variable
	s.SetShare(validShare); //Calling set and passing 10
	if (validShare == s.GetShare()) { // Testing if 10 is set
		cout << "Stock Get / Set Share, Valid Value : Pass" << endl;
	}
	else {
		cout << "Stock Get / Set Share, Valid Value : FAIL!" << endl;
	}

	cout << "*******************************************************************" << endl;
	//SET/GET END *******************************************************************************************


	cout << "Portfolio Method Test" << endl;

	cout << "*******************************************************************" << endl;
	Portfolio p1(4); // Constructor for Portfoilio is called. 
	Stock s2;


	s2 = s; //testing assigment operator for Stock
	int index = 3;
	p1.Set(index, s2); //Passing an int variable and a stock variable to the Set method.

	if (s2.GetName() == p1.Get(index).GetName() && s2.GetPrice() == p1.Get(index).GetPrice() && s2.GetShare() == p1.Get(index).GetShare()) //Testing if the set and get method for Profoili worked.
	{
		cout << "Portfolio Get / Set Method, Valid Value : Pass" << endl;
	}
	else {
		cout << "Portfolio Get / Set Method, Valid Value : FAIL!" << endl;
	}

	Stock s22;
	s22.SetName("nonna");
	s22.SetPrice(1);
	s22.SetShare(12);
	int in = 1;
	p1.Set(in, s22);

	if (p1.PriceRangeCount(1, 15) == 2) //Testing if price range count matches the number inside the array.
	{
		cout << "Portfolio PriceRangeCount Method, Valid Value : Pass" << endl;
	}
	else
	{
		cout << "Portfolio PriceRangeCount Method, Valid Value : FAIL!" << endl;
	}

	//testing if Mostshare works.
	if (s22.GetName() == p1.MostShares().GetName() && s22.GetPrice() == p1.MostShares().GetPrice() && s22.GetShare() == p1.MostShares().GetShare())
	{
		cout << "Portfolio MostShares Method, Valid Value : Pass" << endl;
	}
	else
	{
		cout << "Portfolio MostShares Method, Valid Value : FAIL!" << endl;
	}

	Stock moonMan;
	if (p1.FindByName("Juan", moonMan) == true) //Testing findbyname function.
	{
		cout << "Portfolio FindByName Method, Valid Value : Pass" << endl;
	}
	else
	{
		cout << "Portfolio FindByName Method, Valid Value : FAIL!" << endl;
	}

	if (p1.TotalValue() == 112) //testing the total value of price * shares in the array and adding them. Should be 112.
	{
		cout << "Portfolio TotalValue Method, Valid Value : Pass" << endl;
	}
	else
	{
		cout << "Portfolio TotalValue Method, Valid Value : FAIL!" << endl;
	}


	p1.Resize(5); //Resizing Array.


	cout << "*******************************************************************" << endl;
	cout << "Testing Clone Function" << endl;
	cout << "*******************************************************************" << endl;
	Portfolio *c;
	c = p1.Clone(); //using cline function
	cout << *c << endl; //printing result.
	delete c; // Deleteing pointer

	return 0;
}