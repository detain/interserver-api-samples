

#include "MonthlyCounts.h"

using namespace Tiny;

MonthlyCounts::MonthlyCounts()
{
}

MonthlyCounts::MonthlyCounts(std::string jsonString)
{
	this->fromJson(jsonString);
}

MonthlyCounts::~MonthlyCounts()
{

}

void
MonthlyCounts::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
MonthlyCounts::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



