

#include "Invoice.h"

using namespace Tiny;

Invoice::Invoice()
{
	id = long(0);
}

Invoice::Invoice(std::string jsonString)
{
	this->fromJson(jsonString);
}

Invoice::~Invoice()
{

}

void
Invoice::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "long");


    }


}

bourne::json
Invoice::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();



    return object;

}

long
Invoice::getId()
{
	return id;
}

void
Invoice::setId(long id)
{
	this->id = id;
}



