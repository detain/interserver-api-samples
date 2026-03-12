

#include "QuickserverRow.h"

using namespace Tiny;

QuickserverRow::QuickserverRow()
{
	qs_id = std::string();
	qs_name = std::string();
	cost = std::string();
	qs_hostname = std::string();
	qs_status = std::string();
	qs_comment = std::string();
}

QuickserverRow::QuickserverRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverRow::~QuickserverRow()
{

}

void
QuickserverRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *qs_idKey = "qs_id";

    if(object.has_key(qs_idKey))
    {
        bourne::json value = object[qs_idKey];



        jsonToValue(&qs_id, value, "std::string");


    }

    const char *qs_nameKey = "qs_name";

    if(object.has_key(qs_nameKey))
    {
        bourne::json value = object[qs_nameKey];



        jsonToValue(&qs_name, value, "std::string");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "std::string");


    }

    const char *qs_hostnameKey = "qs_hostname";

    if(object.has_key(qs_hostnameKey))
    {
        bourne::json value = object[qs_hostnameKey];



        jsonToValue(&qs_hostname, value, "std::string");


    }

    const char *qs_statusKey = "qs_status";

    if(object.has_key(qs_statusKey))
    {
        bourne::json value = object[qs_statusKey];



        jsonToValue(&qs_status, value, "std::string");


    }

    const char *qs_commentKey = "qs_comment";

    if(object.has_key(qs_commentKey))
    {
        bourne::json value = object[qs_commentKey];



        jsonToValue(&qs_comment, value, "std::string");


    }


}

bourne::json
QuickserverRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["qs_id"] = getQsId();






    object["qs_name"] = getQsName();






    object["cost"] = getCost();






    object["qs_hostname"] = getQsHostname();






    object["qs_status"] = getQsStatus();






    object["qs_comment"] = getQsComment();



    return object;

}

std::string
QuickserverRow::getQsId()
{
	return qs_id;
}

void
QuickserverRow::setQsId(std::string qs_id)
{
	this->qs_id = qs_id;
}

std::string
QuickserverRow::getQsName()
{
	return qs_name;
}

void
QuickserverRow::setQsName(std::string qs_name)
{
	this->qs_name = qs_name;
}

std::string
QuickserverRow::getCost()
{
	return cost;
}

void
QuickserverRow::setCost(std::string cost)
{
	this->cost = cost;
}

std::string
QuickserverRow::getQsHostname()
{
	return qs_hostname;
}

void
QuickserverRow::setQsHostname(std::string qs_hostname)
{
	this->qs_hostname = qs_hostname;
}

std::string
QuickserverRow::getQsStatus()
{
	return qs_status;
}

void
QuickserverRow::setQsStatus(std::string qs_status)
{
	this->qs_status = qs_status;
}

std::string
QuickserverRow::getQsComment()
{
	return qs_comment;
}

void
QuickserverRow::setQsComment(std::string qs_comment)
{
	this->qs_comment = qs_comment;
}



