#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>



using namespace std;

extern double dGlobaleZeit;

class AktivesVO
{
public:
	AktivesVO();
	AktivesVO(const AktivesVO& AktivesVO);
	AktivesVO(string sName);
	AktivesVO(string sName, double dZeit);
	~AktivesVO();
	void virtual vAbfertigung();
	void virtual vAusgabe();
	void virtual ostreamAusgabe(ostream& output);



private:
	static int p_iMaxID;


protected:
	int p_iID;
	string p_sName;
	double p_dZeit;
};