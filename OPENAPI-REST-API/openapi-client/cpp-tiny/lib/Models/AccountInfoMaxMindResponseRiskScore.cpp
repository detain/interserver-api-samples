

#include "AccountInfoMaxMindResponse_riskScore.h"

using namespace Tiny;

AccountInfoMaxMindResponse_riskScore::AccountInfoMaxMindResponse_riskScore()
{
}

AccountInfoMaxMindResponse_riskScore::AccountInfoMaxMindResponse_riskScore(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoMaxMindResponse_riskScore::~AccountInfoMaxMindResponse_riskScore()
{

}

void
AccountInfoMaxMindResponse_riskScore::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
AccountInfoMaxMindResponse_riskScore::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



