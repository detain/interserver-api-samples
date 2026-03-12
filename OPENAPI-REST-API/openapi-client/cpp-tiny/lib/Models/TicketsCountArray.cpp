

#include "Tickets_countArray.h"

using namespace Tiny;

Tickets_countArray::Tickets_countArray()
{
	open = int(0);
	onHold = int(0);
	closed = int(0);
}

Tickets_countArray::Tickets_countArray(std::string jsonString)
{
	this->fromJson(jsonString);
}

Tickets_countArray::~Tickets_countArray()
{

}

void
Tickets_countArray::fromJson(std::string jsonObj)
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

    const char *closedKey = "Closed";

    if(object.has_key(closedKey))
    {
        bourne::json value = object[closedKey];



        jsonToValue(&closed, value, "int");


    }


}

bourne::json
Tickets_countArray::toJson()
{
    bourne::json object = bourne::json::object();





    object["open"] = getOpen();






    object["onHold"] = getOnHold();






    object["closed"] = getClosed();



    return object;

}

int
Tickets_countArray::getOpen()
{
	return open;
}

void
Tickets_countArray::setOpen(int open)
{
	this->open = open;
}

int
Tickets_countArray::getOnHold()
{
	return onHold;
}

void
Tickets_countArray::setOnHold(int onHold)
{
	this->onHold = onHold;
}

int
Tickets_countArray::getClosed()
{
	return closed;
}

void
Tickets_countArray::setClosed(int closed)
{
	this->closed = closed;
}



