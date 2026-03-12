

#include "TicketPostDetails.h"

using namespace Tiny;

TicketPostDetails::TicketPostDetails()
{
}

TicketPostDetails::TicketPostDetails(std::string jsonString)
{
	this->fromJson(jsonString);
}

TicketPostDetails::~TicketPostDetails()
{

}

void
TicketPostDetails::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
TicketPostDetails::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



