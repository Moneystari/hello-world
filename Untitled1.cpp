

//最好所有的参数传递和返回都是 引用 ——>typename& 

/*#include<iostream>
using namespace std;
int main()
{
	int i=7,r=7;
	cout << "i=" << i << endl;
	cout << "r=" << r; 
	return 0;
}*/

/*#include<iostream>
using namespace std;
template<typename T>
class come
{
	public:
		come(T c=0.7) : c1 (c) { cout << "c1=" << c1 << endl;}
	private:
		T c1;
};
int main()
{
	int i=7,r=7,re=7;
	come<int> c;
//	cout << "c=" << c;
	cout << "i=" << i;
	cout << " r=" << r << endl;
	cout << "re=" << re;
	return 0;
}*/


/*#include<iostream>
#include"Untitled2 complex.h"
using namespace std;
int main()
{
	complexx c(7,7);
	cout << "c.r=" << c.real() << " c.i=" << c.imag() << endl;
	return 0;
}
*/
#include"Untitled2 complex.h"
#include<iostream>
using namespace std;

int main()
{
	complexx c1(7,7);
	c1 += complexx (7,7);
	cout << int (7) << endl;
// cout << complexx (7,7)   不能这样使用 
	cout << c1.real() << endl;
	return 0;
}















