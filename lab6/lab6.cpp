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
	complex(const complex& sF){
Re=sF.Re;
Im=sF.Im;
}
	void print(ostream& print){
		print << Re << " + " << Im << "i" << endl; 
	}
	
	void add(const complex& sF){
		Re += sF.Re;
		Im += sF.Im;
	}

	void sub(const complex& sF){
		Re -= sF.Re;
		Im -= sF.Im;
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


 complex operator*(const complex& sF){
        return complex(Re*sF.Re - Im*sF.Im, Im*sF.Re + Re*sF.Im);
    }
    complex operator/(const complex& sF){
        return complex((Re*sF.Re + Im*sF.Im)/(sF.Re*sF.Re + sF.Im*sF.Im),(-Re*sF.Im + Im*sF.Re)/(sF.Re*sF.Re + sF.Im*sF.Im));
    }
    complex operator+=(const complex& sF){
        Re += sF.Re;
        Im += sF.Im;
        return complex(Re, Im);
    }
    complex operator-=(const complex& sF){
        Re -= sF.Re;
        Im -= sF.Im;
        return complex(Re, Im);
    }
    complex operator*=(const complex& sF){
        double  tmp;
        tmp = Re*sF.Re - Im*sF.Im;
        Im = Im*sF.Re + Re*sF.Im;
        Re = tmp;
        return complex(Re,Im);
    }
    complex operator/=(const complex& sF){
        double tmp;
        tmp = (Re*sF.Re + Im*sF.Im)/(sF.Re*sF.Re + sF.Im*sF.Im);
        Im =  (-Re*sF.Im + Im*sF.Re)/(sF.Re*sF.Re + sF.Im*sF.Im);
        Re = tmp;
        return complex(Re,Im);
    }
    complex operator=(const complex& sF){
        Re = sF.Re;
        Im = sF.Im;
        return complex(Re,Im);
    }
    bool operator==(const complex& sF){
        return (Re == sF.Re && Im == sF.Im);
    }


    template <class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os, const complex& sF){
        os << sF.Re << "+" << sF.Im << "i" << std::endl;
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
y*=(x);
y.print(std::cout);
y.div(0);

return 0;
}	
