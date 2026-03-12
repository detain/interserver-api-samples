

#include "MailAlertsResponse.h"

using namespace Tiny;

MailAlertsResponse::MailAlertsResponse()
{
}

MailAlertsResponse::MailAlertsResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailAlertsResponse::~MailAlertsResponse()
{

}

void
MailAlertsResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
MailAlertsResponse::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



