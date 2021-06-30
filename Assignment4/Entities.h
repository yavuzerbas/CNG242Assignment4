#pragma once
class Entities
{
protected:
	int size;
	char type;
public:
	Entities(int size,char type) {
		this->size = size;
		this->type = type;
	}
	virtual float getSize() = 0;
	virtual void setSize(int size) = 0;
	char getType() { return type; }
	void setType(char type) { this->type = type; }

};

