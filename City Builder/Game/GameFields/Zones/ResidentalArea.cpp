#include "ResidentalArea.h"

float ResidentalArea::m_Lvl1TaxRate = 20;
float ResidentalArea::m_Lvl2TaxRate = 20;
float ResidentalArea::m_Lvl3TaxRate = 20;

float ResidentalArea::GetTaxRate() const
{
	if (level == LEVEL_1) { return m_Lvl1TaxRate; }
	if (level == LEVEL_2) { return m_Lvl2TaxRate; }
	else { return m_Lvl3TaxRate; }
}