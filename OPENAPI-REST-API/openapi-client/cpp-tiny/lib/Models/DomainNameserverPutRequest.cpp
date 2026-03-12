

#include "DomainNameserverPutRequest.h"

using namespace Tiny;

DomainNameserverPutRequest::DomainNameserverPutRequest()
{
	nameserver = std::list<std::string>();
}

DomainNameserverPutRequest::DomainNameserverPutRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainNameserverPutRequest::~DomainNameserverPutRequest()
{

}

void
DomainNameserverPutRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameserverKey = "nameserver";

    if(object.has_key(nameserverKey))
    {
        bourne::json value = object[nameserverKey];


        std::list<std::string> nameserver_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            nameserver_list.push_back(element);
        }
        nameserver = nameserver_list;


    }


}

bourne::json
DomainNameserverPutRequest::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<std::string> nameserver_list = getNameserver();
    bourne::json nameserver_arr = bourne::json::array();

    for(auto& var : nameserver_list)
    {
        nameserver_arr.append(var);
    }
    object["nameserver"] = nameserver_arr;






    return object;

}

std::list<std::string>
DomainNameserverPutRequest::getNameserver()
{
	return nameserver;
}

void
DomainNameserverPutRequest::setNameserver(std::list<std::string> nameserver)
{
	this->nameserver = nameserver;
}



