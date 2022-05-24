/*!
    @file
    @brief ���� � ��������� ������� ������ ������������ �����
*/

#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

//-------------------------------------------
/*!
    @brief ���������� ������ Complex
    @param aRe �������������� ������������
    @param aIm �������������� ������������
*/
Complex::Complex(double aRe, double aIm)
{
	Re = aRe;
	Im = aIm;
}

//-------------------------------------------
/*!
    @brief ���������� ����������� ������ Complex
    @param aRval ����������� �����
*/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
Complex::Complex(const Complex& aRval)
{
	Re = aRval.Re;
	Im = aRval.Im;
}

//-------------------------------------------
/*!
    @brief ������������ ������ Complex
*/
Complex::~Complex()
{
	int ngfn;
	Re = 0.0;
	Im = 0.0;
}

//-------------------------------------------
/*!
    @brief ���������� ������ Complex
    @param aRe �������������� ������������
    @param aIm �������������� ������������
*/
void Complex::Set(double aRe, double aIm)
{
	//������, ������������� ����������� �����

	Re = aRe;
	Im = aIm;
}

//-------------------------------------------
/*!
    @brief ���������������� ��������()
    @return ������ ������������ �����
*/
Complex::operator double()
{
	return abs();
}

//-------------------------------------------
/*!
    @brief ������ ������������ �����
    @return ������ ������������ �����
*/
double Complex::abs()
{
	return sqrt(Re * Re + Im * Im);
}

//-------------------------------------------
/*!
    @brief �������� ��������
    @param aRval ����������� �����
    @return ����� ����������� �����
*/
Complex Complex::operator+ (const Complex& aRval)
{
	Complex result;

	result.Re = Re + aRval.Re;
	result.Im = Im + aRval.Im;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� ���������
    @param aRval ����������� �����
    @return �������� ����������� �����
*/
Complex Complex::operator- (const Complex& aRval)
{
	Complex result;

	result.Re = Re - aRval.Re;
	result.Im = Im - aRval.Im;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� ��������
    @param aRval ������������ �����
    @return ����� ����������� �����
*/
Complex Complex::operator+ (const double& aRval)
{
	Complex result;

	result.Re = Re + aRval;
	result.Im = Im;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� ���������
    @param aRval ������������ �����
    @return �������� ����������� �����
*/
Complex Complex::operator- (const  double& aRval)
{
	Complex result(*this);

	result.Re = Re - aRval;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� ���������
    @param aRval ����������� �����
    @return ������������ ����������� �����
*/
Complex Complex::operator* (const Complex& aRval)
{
	Complex result;

	result.Re = Re * aRval.Re - Im * aRval.Im;
	result.Im = Re * aRval.Im + Im * aRval.Re;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� ���������
    @param aRval ������������ �����
    @return ������������ ����������� �����
*/
Complex Complex::operator* (const double& aRval)
{
	Complex result;

	result.Re = Re * aRval;
	result.Im = Im * aRval;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� �������
    @param aRval ������������ �����
    @return ������� ����������� �����
*/
Complex Complex::operator/ (const double& aRval)
{
	Complex result;

	result.Re = Re / aRval;
	result.Im = Im / aRval;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� �������� � �������������
    @param aRval ����������� �����
    @return ����� ����������� �����
*/
Complex& Complex::operator+= (const Complex& aRval)
{
	Re += aRval.Re;
	Im += aRval.Im;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� ��������� � �������������
    @param aRval ����������� �����
    @return �������� ����������� �����
*/
Complex& Complex::operator-= (const Complex& aRval)
{
	Re -= aRval.Re;
	Im -= aRval.Im;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� ��������� � �������������
    @param aRval ����������� �����
    @return ������������ ����������� �����
*/
Complex& Complex::operator*=(const Complex& aRval)
{
	double tmpRe = Re;

	Re = Re * aRval.Re - Im * aRval.Im;
	Im = Im * aRval.Re + tmpRe * aRval.Im;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� �������� � �������������
    @param aRval ������������ �����
    @return ����� ����������� �����
*/
Complex& Complex::operator+= (const double& aRval)
{
	Re += aRval;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� ��������� � �������������
    @param aRval ������������ �����
    @return �������� ����������� �����
*/
Complex& Complex::operator-= (const double& aRval)
{
	Re -= aRval;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� ��������� � �������������
    @param aRval ������������ �����
    @return ������������ ����������� �����
*/
Complex& Complex::operator*= (const double& aRval)
{
	Re *= aRval;
	Im *= aRval;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� ������� � �������������
    @param aRval ������������ �����
    @return ������� ����������� �����
*/
Complex& Complex::operator/= (const double& aRval)
{
	Re /= aRval;
	Im /= aRval;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� ������������
    @param aRval ����������� �����
    @return ������ �� ������
*/
Complex& Complex::operator= (const Complex& aRval)
{
	Re = aRval.Re;
	Im = aRval.Im;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� ������������
    @param aRval ������������ �����
    @return ������ �� ������
*/
Complex& Complex::operator= (const double& aRval)
{
	Re = aRval;
	Im = 0.0;

	return *this;
}

//-------------------------------------------
/*!
    @brief �������� ������ ������
    @param stream ����� �����
    @param aRval ����������� ����� �����
    @return IO �����
*/
istream& operator>> (istream& stream, Complex& aRval)
{
	char tmp[256];

	stream >> aRval.Re >> aRval.Im >> tmp;

	return stream;
}

//-------------------------------------------
/*!
    @brief �������� ������ ������
    @param stream ����� ������
    @param aRval ����������� ����� �����
    @return IO �����
*/
ostream& operator<< (ostream& stream, Complex& aRval)
{
	stream << aRval.Re;

	if (!(aRval.Im < 0))
		stream << '+';

	stream << aRval.Im << 'i';

	return stream;
}

//-------------------------------------------
/*!
    @brief �������� ��������
    @param aLval ������������ �����
    @param aRval ����������� �����
    @return ����� �����
*/
Complex operator+ (const double& aLval, const Complex& aRval)
{
	Complex result;

	result.Re = aLval + aRval.Re;
	result.Im = aRval.Im;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� ���������
    @param aLval ������������ �����
    @param aRval ����������� �����
    @return �������� �����
*/
Complex operator-(const double& aLval, const Complex& aRval)
{
	Complex result;
	result.Re = aLval - aRval.Re;
	result.Im = -aRval.Im;

	return result;
}

//-------------------------------------------
/*!
    @brief �������� ���������
    @param aLval ������������ �����
    @param aRval ����������� �����
    @return ������������ �����
*/
Complex operator* (const double& aLval, const Complex& aRval)
{
	Complex result;

	result.Re = aLval * aRval.Re;
	result.Im = aLval * aRval.Im;

	return result;
}
