#pragma once
#include <string>
/*
what the player should have
level
	exp
	levelUP
class
health
mana
stats
inventory
actions:
	look around
	pick up item
	attack
	defend
	skill
		throw
			add target function
		burn
			same thing
*/


class Player
{
private:
	int m_PlayerLevel = 0;
	float m_PlayerCurExp = 1;
	float m_PlayerMaxExp = 2;
	int m_PlayerCurHP = 1;
	int m_PlayerMaxHP = 1;
	int m_PlayerCurMP = 1;
	int m_PlayerMaxMP = 1;
	std::string m_PlayerName = "None";
	std::string m_PlayerClass = "None";
	int m_Strength = 1;
	int m_Constitution = 1;
	int m_Intelligence = 1;
	int m_Wisdom = 1;
	int m_Agility = 1;

public:
	Player(int level);
	void lookAround();
	void showStats();
	void hideStats();
	void showInventory();
	void hideInventory();
	void statUp(int stat);
	void levelUP();
	void useSkill(std::string skillName);
	int attack(); //take "target' and relevent stats return damage taken
	int defend(); //take "defend from" and relevent stats return damage dealt
};