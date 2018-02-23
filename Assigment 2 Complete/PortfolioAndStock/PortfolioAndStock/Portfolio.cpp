#include "Portfolio.h"
#include <iostream>
void Portfolio::Set(int index, Stock s)
{
	index = index - 1;
	if (index < 0 || index > sizeOfArray) {
		std::cout << "Invalid index!!!" << std::endl;

	}
	else
	{
		m_array[index] = s;
	}


}

Stock Portfolio::Get(int index)
{
	return m_array[index - 1];
}

int Portfolio::PriceRangeCount(double lowerBound, double upperBound)
{
	double count = 0;
	for (int i = 0; i < sizeOfArray; i++) {
		if (lowerBound <= m_array[i].GetPrice() && upperBound >= m_array[i].GetPrice())
		{
			count++;
		}
	}
	return count;
}

Stock Portfolio::MostShares()
{
	Stock biggest;
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (biggest.GetShare() < m_array[i].GetShare())
		{
			biggest = m_array[i];
		}
	}
	return biggest;

}

bool Portfolio::FindByName(std::string name, Stock & v)
{
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (name == m_array[i].GetName())
		{
			v = m_array[i];
			return true;
		}
	}

	return false;
}

double Portfolio::TotalValue()
{
	double result = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		result = result + m_array[i].CalculateValue();
	}
	return result;
}

int Portfolio::Size()
{
	return sizeOfArray;
}

void Portfolio::Initialize()
{

	for (int i = 0; i < sizeOfArray; i++)
	{
		m_array[i].SetName("");
		m_array[i].SetPrice(0);
		m_array[i].SetShare(0);
	}


}

Portfolio::Portfolio()
{
	sizeOfArray = 0;

	m_array = new Stock[sizeOfArray];
	Initialize();

}

Portfolio::Portfolio(const Portfolio & obj)
{
	sizeOfArray = obj.sizeOfArray;

	m_array = new Stock[obj.sizeOfArray];
	for (int i = 0; i < sizeOfArray; i++)
	{
		m_array[i] = obj.m_array[i];
	}

}

Portfolio::~Portfolio()
{
	delete[]m_array;
}

Portfolio & Portfolio::operator=(const Portfolio & obj) //NEW FUNCTION
{
	if (this == &obj)
	{

		return *this;

	}
	delete[] m_array;
	sizeOfArray = obj.sizeOfArray;
	m_array = new Stock[obj.sizeOfArray];
	for (int i = 0; i < sizeOfArray; i++)
	{
		m_array[i] = obj.m_array[i];
	}

	return *this;
}

Portfolio::Portfolio(int size) // NEW FUNCTION
{
	sizeOfArray = size;
	m_array = new Stock[size];


}

std::string Portfolio::GetAuthor()
{
	return "Juan Moreno";
}

void Portfolio::Resize(int newSize) // NEW FUNCTION
{

	if (newSize <= 0)
	{
		this;
	}
	else if (newSize < sizeOfArray)
	{

		Stock *newArray = new Stock[newSize];


		for (int i = 0; i < newSize; i++)
		{
			newArray[i] = m_array[i];
		}

		delete[] m_array;
		sizeOfArray = newSize;
		m_array = newArray;

	}
	else
	{
		Stock *newArray = new Stock[newSize];


		for (int i = 0; i < sizeOfArray; i++)
		{
			newArray[i] = m_array[i];
		}

		delete[] m_array;
		sizeOfArray = newSize;
		m_array = newArray;
	}

}

Portfolio * Portfolio::Clone() //NEW FUCNTION
{
	Portfolio *temp = new Portfolio;
	*temp = *this;

	return temp;
}



std::ostream & operator<<(std::ostream & os, Portfolio & ref) //NEW FUNCTION
{
	for (int i = 0; i < ref.sizeOfArray; i++)
	{
		os << ref.m_array[i].GetName() << std::endl;
		os << ref.m_array[i].GetPrice() << std::endl;
		os << ref.m_array[i].GetShare() << std::endl;
	}
	return os;
}
