//============================================================================
// Name        : Final Year Grades.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Module.h"
#include "AllModules.h"

using namespace std;

int main() {

	// 1. Financial Management
	Finance finMan("Financial Management");

	finMan.moduleInfo();
	const double markFM = 67.24; // fill the marks here
	finMan.markInfo(markFM);
	const double creditFME = finMan.getCredit(markFM);
	finMan.passOrFail(creditFME);
	finMan.getClass(markFM);
	finMan.creditInfo(creditFME);
	finMan.separateLine();

	// 2. Strategic Performance Management
	Finance stratPerform("Strategic Performance Management");

	stratPerform.moduleInfo();
	const double markSPM = 74.95; // fill the marks here
	stratPerform.markInfo(markSPM);
	const double creditSPM = stratPerform.getCredit(markSPM);
	stratPerform.passOrFail(creditSPM);
	stratPerform.getClass(markSPM);
	stratPerform.creditInfo(creditSPM);
	stratPerform.separateLine();

	//3. Dynamics and Control (created with pointers)
	Engineering *pDynamics = new Engineering("Dynamics and Control");

	const double markDynamics = 80.69; // fill the mark here
	pDynamics->moduleInfo();
	pDynamics->markInfo(markDynamics);
	const double creditDynamics = pDynamics->getCredit(markDynamics);
	pDynamics->passOrFail(creditDynamics);
	pDynamics->getClass(markDynamics);
	pDynamics->creditInfo(creditDynamics);
	pDynamics->separateLine();


	// 4. Materials
	Engineering *pMaterials = new Engineering("Engineering Materials - Failures and Design");

	const double markMaterials = 88.03; // fill the mark here
	pMaterials->moduleInfo();
	pMaterials->markInfo(markMaterials);
	const double creditMaterial = pMaterials->getCredit(markMaterials);
	pMaterials->passOrFail(creditMaterial);
	pMaterials->getClass(markMaterials);
	pMaterials->creditInfo(creditMaterial);
	pMaterials->separateLine();


	// 5. Thermo and Fluid
	Engineering *pThermo = new Engineering("Advanced Thermodynamics and Fluid Mechanics");

	const double markThermo = 85.69; // fill the mark here
	pThermo->moduleInfo();
	pThermo->markInfo(markThermo);
	const double creditThermo = pThermo->getCredit(markThermo);
	pThermo->passOrFail(creditThermo);
	pThermo->getClass(markThermo);
	pThermo->creditInfo(creditThermo);
	pThermo->separateLine();


	// 6. E&P
	Engineering *pEnP = new Engineering("Elasticity and Plasticity");

	const double markEnP = 81.50; // fill the mark here
	pEnP->moduleInfo();
	pEnP->markInfo(markEnP);
	const double creditEnP = pEnP->getCredit(markEnP);
	pEnP->passOrFail(creditEnP);
	pEnP->getClass(markEnP);
	pEnP->creditInfo(creditEnP);
	pEnP->separateLine();


	// 7. FYP
	Engineering fyp("Final Year Project");

	double markFYP = 66.19; // fill the mark here
	fyp.moduleInfo();
	fyp.markInfo(markFYP);
	double creditFYP = fyp.getCreditFYP(markFYP);
	fyp.passOrFail(creditFYP);
	fyp.getClass(markFYP);
	fyp.creditInfo(creditFYP);
	fyp.separateLine();


	// Total
	AllModules *pallModules = new AllModules;

	double averageMark = pallModules->averageMark(markFM, markSPM, markDynamics, markMaterials, markThermo, markEnP, markFYP);
	pallModules->averageTotalInfo(averageMark);
	//	finding the best 4 average
	double array[7] = {markFM, markSPM, markDynamics, markMaterials, markThermo, markEnP, markFYP};
	pallModules->bestFourAverage(array);
	// total credit and total class
	pallModules->totalCredit(creditFME, creditSPM, creditDynamics, creditMaterial, creditThermo, creditEnP, creditFYP);
	pallModules->getClass(averageMark);
	pallModules->separateLine();

	delete pallModules;	// delete the class created with pointers

	delete pDynamics;
	delete pMaterials;
	delete pThermo;
	delete pEnP;


	return 0;
}

