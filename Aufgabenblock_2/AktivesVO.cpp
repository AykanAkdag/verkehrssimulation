#include "AktivesVO.h"

AktivesVO::AktivesVO()
{
	vInitialisierung()
}

void AktivesVO::vInitialisierung()
{
	this->p_iID = Fahrzeug::p_iMaxID + 1;
	Fahrzeug::p_iMaxID = this->p_iID;
	this->p_sName = "";
	this->p_GesamteZeit = 0;
	this->p_dZeit = 0;
}

