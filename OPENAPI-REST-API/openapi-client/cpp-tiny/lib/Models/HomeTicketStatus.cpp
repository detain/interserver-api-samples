

#include "Home_ticketStatus.h"

using namespace Tiny;

Home_ticketStatus::Home_ticketStatus()
{
	open = int(0);
	onHold = int(0);
}

Home_ticketStatus::Home_ticketStatus(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_ticketStatus::~Home_ticketStatus()
{

}

void
Home_ticketStatus::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *openKey = "Open";

    if(object.has_key(openKey))
    {
        bourne::json value = object[openKey];



        jsonToValue(&open, value, "int");


    }

    const char *onHoldKey = "On Hold";

    if(object.has_key(onHoldKey))
    {
        bourne::json value = object[onHoldKey];



        jsonToValue(&onHold, value, "int");


    }


}

bourne::json
Home_ticketStatus::toJson()
{
    bourne::json object = bourne::json::object();





    object["open"] = getOpen();






    object["onHold"] = getOnHold();



    return object;

}

int
Home_ticketStatus::getOpen()
{
	return open;
}

void
Home_ticketStatus::setOpen(int open)
{
	this->open = open;
}

int
Home_ticketStatus::getOnHold()
{
	return onHold;
}

void
Home_ticketStatus::setOnHold(int onHold)
{
	this->onHold = onHold;
}



