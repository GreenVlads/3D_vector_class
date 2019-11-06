#ifndef _MY_VECTOR_H
#define _MY_VECTOR_H
#include "My_vector.h"
#endif

/* 
Êëàññ ñ âîçìîæíîñòüþ äàëüíåéøåãî ñîâåðøåíñòâîâàíèÿ,
ñîçäàííûé äëÿ ðàáîòû ñ òðåõìåðíûìè âåêòîðàìè (ïîêà ÷òî ðåàëèçîâàíî 
òîëüêî ñëîæåíèå è âû÷èòàíèå)
*/
class Vector {
private:
	float x, y, z;
public:
	// êîíñòðóêòîð äëÿ âåêòîðà â 3-õ èçìåðåíèÿõ
	Vector(float x_param, float y_param, float z_param);

	// äåñòðóêòîð
	~Vector();

	// èñïîëüçóåòñÿ áåç îïåðàòîðà âûâîäà
	void vectShowParams();

	// îïåðàòîð ñëîæåíèÿ âåêòîðîâ
	Vector operator+ (Vector other);

	// îïåðàòîð âû÷èòàíèÿ âåêòîðîâ
	Vector operator- (Vector other);
};

Vector::Vector(float x_param = 0, float y_param = 0, float z_param = 0)
{
	this->x = x_param;
	this->y = y_param;
	this->z = z_param;
}

Vector::~Vector()
{
}

void Vector::vectShowParams() {
	std::cout << "{ " << this->x << ", " << this->y << ", " << this->z << " }" << std::endl;
}

Vector Vector::operator+ (Vector other) {
	Vector result(0, 0, 0);
	result.x = this->x + other.x;
	result.y = this->y + other.y;
	result.z = this->z + other.z;
	return result;
}

Vector Vector::operator- (Vector other) {
	Vector result(0, 0, 0);
	result.x = this->x - other.x;
	result.y = this->y - other.y;
	result.z = this->z - other.z;
	return result;
}
