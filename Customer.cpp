#pragma once
#include "Product.h"
#include "Customer.h"
#include<string>
#include<list>
#include<iostream>
using namespace std;


int Customer::getCustId()
{

	return cust_id;
}
string Customer::getCustName()
{
	return cust_name;
}
void Customer::setCustId(int custid)
{

	cust_id = custid;
}
void  Customer::setCustName(string nm)
{
	cust_name = nm;
}