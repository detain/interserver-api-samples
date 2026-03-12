

#include "BuyItNowList.h"

using namespace Tiny;

BuyItNowList::BuyItNowList()
{
}

BuyItNowList::BuyItNowList(std::string jsonString)
{
	this->fromJson(jsonString);
}

BuyItNowList::~BuyItNowList()
{

}

void
BuyItNowList::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
BuyItNowList::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



