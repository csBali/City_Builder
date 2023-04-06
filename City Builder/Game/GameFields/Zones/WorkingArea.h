#ifndef WORKINGAREA_H
#define WORKINGAREA_H

#include "Zone.h"

class WorkingArea : public Zone
{
protected:
	WorkingArea(Level level) : Zone(level) {}
public:
	~WorkingArea() {}

	bool inline IsWorkingArea() const override { return true; }
	virtual inline bool IsIndustrialArea() const { return false; }
	virtual inline bool IsServiceArea() const { return false; }
};

class IndustrialArea : public WorkingArea 
{
public:
	IndustrialArea(Level level) : WorkingArea(level) {}
	~IndustrialArea() {}

	bool inline IsIndustrialArea() const override{ return true; }

	//Setter
	static void inline SetLvl1TaxRate(float taxRate) { m_Lvl1TaxRate = taxRate; }
	static void inline SetLvl2TaxRate(float taxRate) { m_Lvl2TaxRate = taxRate; }
	static void inline SetLvl3TaxRate(float taxRate) { m_Lvl3TaxRate = taxRate; }

	//Getter
	float GetTaxRate() const override;

private:
	static float m_Lvl1TaxRate;
	static float m_Lvl2TaxRate;
	static float m_Lvl3TaxRate;
};

class ServiceArea : public WorkingArea
{
public:
	ServiceArea(Level level) : WorkingArea(level) {}
	~ServiceArea() {}

	bool inline IsServiceArea() const override { return true; }

	//Setter
	static void inline SetLvl1TaxRate(float taxRate) { m_Lvl1TaxRate = taxRate; }
	static void inline SetLvl2TaxRate(float taxRate) { m_Lvl2TaxRate = taxRate; }
	static void inline SetLvl3TaxRate(float taxRate) { m_Lvl3TaxRate = taxRate; }

	//Getter
	float GetTaxRate() const override;

private:
	static float m_Lvl1TaxRate;
	static float m_Lvl2TaxRate;
	static float m_Lvl3TaxRate;
};

#endif
