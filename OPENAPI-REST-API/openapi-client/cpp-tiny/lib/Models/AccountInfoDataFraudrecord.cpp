

#include "AccountInfoData_fraudrecord.h"

using namespace Tiny;

AccountInfoData_fraudrecord::AccountInfoData_fraudrecord()
{
	score = std::string();
	count = std::string();
	reliability = std::string();
	code = std::string();
}

AccountInfoData_fraudrecord::AccountInfoData_fraudrecord(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoData_fraudrecord::~AccountInfoData_fraudrecord()
{

}

void
AccountInfoData_fraudrecord::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *scoreKey = "score";

    if(object.has_key(scoreKey))
    {
        bourne::json value = object[scoreKey];



        jsonToValue(&score, value, "std::string");


    }

    const char *countKey = "count";

    if(object.has_key(countKey))
    {
        bourne::json value = object[countKey];



        jsonToValue(&count, value, "std::string");


    }

    const char *reliabilityKey = "reliability";

    if(object.has_key(reliabilityKey))
    {
        bourne::json value = object[reliabilityKey];



        jsonToValue(&reliability, value, "std::string");


    }

    const char *codeKey = "code";

    if(object.has_key(codeKey))
    {
        bourne::json value = object[codeKey];



        jsonToValue(&code, value, "std::string");


    }


}

bourne::json
AccountInfoData_fraudrecord::toJson()
{
    bourne::json object = bourne::json::object();





    object["score"] = getScore();






    object["count"] = getCount();






    object["reliability"] = getReliability();






    object["code"] = getCode();



    return object;

}

std::string
AccountInfoData_fraudrecord::getScore()
{
	return score;
}

void
AccountInfoData_fraudrecord::setScore(std::string score)
{
	this->score = score;
}

std::string
AccountInfoData_fraudrecord::getCount()
{
	return count;
}

void
AccountInfoData_fraudrecord::setCount(std::string count)
{
	this->count = count;
}

std::string
AccountInfoData_fraudrecord::getReliability()
{
	return reliability;
}

void
AccountInfoData_fraudrecord::setReliability(std::string reliability)
{
	this->reliability = reliability;
}

std::string
AccountInfoData_fraudrecord::getCode()
{
	return code;
}

void
AccountInfoData_fraudrecord::setCode(std::string code)
{
	this->code = code;
}



