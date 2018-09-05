#pragma once

/* 
����� � ������������ ����������� �����������������,
��������� ��� ������ � ����������� ��������� (���� ��� ����������� 
������ �������� � ���������)
*/
class Vector {
private:
	float x, y, z;
public:
	// ����������� ��� ������� � 3-� ����������
	Vector(float x_param, float y_param, float z_param);

	// ����������
	~Vector();

	// ������������ ��� ��������� ������
	void vectShowParams();

	// �������� �������� ��������
	Vector operator+ (Vector other);

	// �������� ��������� ��������
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