#pragma once
#include <string>
/*
what the player should have
level
health
mana
stats
drops
actions:
	attack
	defend
	skill
*/

class Enemy
{
private:
	std::string m_EnemyName = "None";
	int m_EnemyLevel = 0;
	int m_EnemyCurHP = 1;
	int m_EnemyMaxHP = 1;
	int m_EnemyCurMP = 1;
	int m_EnemyMaxMP = 1;
	int m_Strength = 1;
	int m_Constitution = 1;
	int m_Intelligence = 1;
	int m_Wisdom = 1;
	int m_Agility = 1;
public:
};