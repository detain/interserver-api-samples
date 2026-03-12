

#include "CreateFilter.h"

using namespace Tiny;

CreateFilter::CreateFilter()
{
	filter_type = std::string();
	port = int(0);
}

CreateFilter::CreateFilter(std::string jsonString)
{
	this->fromJson(jsonString);
}

CreateFilter::~CreateFilter()
{

}

void
CreateFilter::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *filter_typeKey = "filter_type";

    if(object.has_key(filter_typeKey))
    {
        bourne::json value = object[filter_typeKey];



        jsonToValue(&filter_type, value, "std::string");


    }

    const char *portKey = "port";

    if(object.has_key(portKey))
    {
        bourne::json value = object[portKey];



        jsonToValue(&port, value, "int");


    }


}

bourne::json
CreateFilter::toJson()
{
    bourne::json object = bourne::json::object();





    object["filter_type"] = getFilterType();






    object["port"] = getPort();



    return object;

}

std::string
CreateFilter::getFilterType()
{
	return filter_type;
}

void
CreateFilter::setFilterType(std::string filter_type)
{
	this->filter_type = filter_type;
}

int
CreateFilter::getPort()
{
	return port;
}

void
CreateFilter::setPort(int port)
{
	this->port = port;
}



