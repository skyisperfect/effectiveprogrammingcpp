

#include <iostream>
#include <cmath>

using namespace std;

class complex{
private:
	double Re, Im;
public:
	complex(){
Re=0.0;
Im=0.0; 
}
	complex(double RE, double IM){
Re=RE;
Im=IM; 
}
	void print(ostream& print){
		print << Re << " + " << Im << "i" << endl; 
	}
	
	void add(complex obj){
		Re += obj.Re;
		Im += obj.Im;
	}

	void sub(complex obj){
		Re -= obj.Re;
		Im -= obj.Im;
	}

	void mul(int M){
		Re *= M;
		Im *= M;
	}

	void div(int D){
	try{
		if(D==0){
			throw 1;
		}

		Re /= D;
		Im /= D;
	}catch (int D){
	cout << "btw division by zero" << endl;
	}
}
};

int main() {

complex x(1.0, 4.2);
complex y(3.2, 3.22);
x.sub(y);
x.print(std::cout);
x.add(y);
x.print(std::cout);
x.mul(5);
x.print(std::cout);
y.div(0);

return 0;
}	
