#ifndef _UNTITLED2 COMPLEX_
#define _UNTITLED2 COMPLEX_

#include<math.h>

class ostream;
class complex;

//complex& _doapl (complex* ths, const complex r);

//template<typename T>
class complexx
{
	public:
		complexx (double r = 0,double i = 0) : re (r),im (i) {}
		complexx& operator += (const complexx&);	
		double real() const {return re;}
		double imag() const {return im;}
	private:
		double re, im;
		friend  complexx& _doapl(complexx*,const complexx&);
};


inline complexx& _doapl (complexx* ths,const complexx& r)
{
	ths->re += r.re;
	ths->im += r.im;
	return *ths;
}

/*complexx _doapl(const complexx& r)
{
	complexx* ths;
	ths->real += r.re;
	ths->imag += r.im;
	return *ths;	
}
*/

//成员函数 
inline complexx& complexx::operator +=(const complexx& r)
{
	return _doapl(this,r);
}

//非成员函数 (全局函数)
//如以下三种可能用法 
/*
//复数之间 
inline complexx operator + (const complexx& x,const complexx& y)
{
	return complexx (real (x) + real (y),
	 				imag (x) + imag (y));
}

//复数和实数 
inline complexx operator + (const complexx& x,double y)
{
	return complexx (real (x) + y,imag (x));
}

//实数和复数
inline complexx operator + (double x,const complexx& y)
{
	return complexx (x + real (y), imag (y));
} 
*/



















#endif 
