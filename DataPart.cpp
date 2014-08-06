#include <istream>
#include <ostream>
#include <vector>


using namespace std;
#include "ZNumber.hpp"
#include "DataPart.hpp"

DataPart::DataPart(){
}

DataPart::DataPart(const vector<vector<ZNumber>> &equasions): linearEquasions(equasions){
}


vector<vector<ZNumber>> &DataPart::get(){
	return linearEquasions;
}

const vector<vector<ZNumber>> &DataPart::get() const{
	return linearEquasions;
}
