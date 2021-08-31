#pragma once
#include <iostream>
#include <any>
#include <vector>

class Component {
public:
	Entity* ent;
	std::string name;
	std::any value;
};

class Entity {
public:
	std::vector<Component> components;
	virtual void Draw() = 0;
};

