#pragma once

#include "GameFieldType.h"

class GameField
{
public:
	GameField(FieldType type, int x, int y, float cost): m_Type(type), m_X(x), m_Y(y), m_Cost(cost) {}
	~GameField() {}

	static GameField* CreateField(FieldType type, int x, int y);

	virtual bool IsZone() const { return false; };
	virtual bool IsEmpty() const { return false; };
	virtual bool IsRoad() const { return false; };
	virtual bool IsForest() const { return false; };
	virtual bool IsBuilding() const { return false; };

	inline int Get_X() const { return m_X; }
	inline int Get_Y() const { return m_Y; }
	inline float Get_SatisfactionPoints() const { return m_SatisfactionPoints; };
	inline float Get_Fee() const { return m_Fee; };
	inline float Get_Cost() const { return m_Cost; };
	inline FieldType Get_Type() const { return m_Type; };

private:
	int m_X;
	int m_Y;
	float m_Fee;
	float m_Cost;
	float m_SatisfactionPoints;
	float m_Power;
	FieldType m_Type;
};