
#include	"vector.hpp"

vector::vector(){

}

vector::vector(vector const &copy){
	*this = copy;
}

~vector::vector(){

}

vector &	vector::operator=(vector const &rhs){
	if (this != &rhs)
	{

	}
	return *this;
}

