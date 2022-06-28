#pragma once
#include "Camion.h"
#include "Grue.h"

class CamionGrue : public Camion,  public Grue {

public:
	using Camion::demarrer;
	using Camion::avancer;
	using Grue::avancer;
};