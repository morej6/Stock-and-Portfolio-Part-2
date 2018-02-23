#include "Stock.h"

Stock::Stock() {
	m_name = new std::string;
	m_price = new double;
	m_share = new double;
	*m_name = "Stock constructor";
	*m_price = 0;
	*m_share = 0;

}

Stock::Stock(std::string f, double p, double s)
{
	m_name = new std::string;
	m_price = new double;
	m_share = new double;
	*m_name = f;
	*m_price = p;
	*m_share = s;
}

Stock::Stock(const Stock &obj)
{
	m_name = new std::string;
	m_price = new double;
	m_share = new double;
	*m_name = *obj.m_name;
	*m_price = *obj.m_price;
	*m_share = *obj.m_share;

}

Stock::~Stock()
{
	delete m_name;
	delete m_price;
	delete m_share;
}

void Stock::SetName(std::string n)
{
	*m_name = n;
}

void Stock::SetPrice(double p)
{
	if (p >= 0) {
		*m_price = p;
	}
}

void Stock::SetShare(double s)
{
	if (s >= 0) {
		*m_share = s;
	}
}

std::string Stock::GetName()
{
	return  *m_name;
}

double Stock::GetPrice()
{
	return *m_price;
}

double Stock::GetShare()
{
	return *m_share;
}

double Stock::CalculateValue()
{
	return *m_price * *m_share;
}

Stock & Stock::operator=(const Stock &stock)
{

	//prevents self-assigment

	if (this == &stock)
	{
		return *this;
	}

	*m_name = *stock.m_name;
	*m_price = *stock.m_price;
	*m_share = *stock.m_share;
	return *this;

}

std::ostream & operator<<(std::ostream & os, Stock & ref)
{
	os << *ref.m_name << std::endl;
	os << *ref.m_price << std::endl;
	os << *ref.m_share << std::endl;
	return os;
}

std::istream & operator >> (std::istream & in, Stock & ref)
{
	in >> *ref.m_name >> *ref.m_price >> *ref.m_share;
	return in;

}
