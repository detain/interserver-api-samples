

#include "DomainSearchResponse.h"

using namespace Tiny;

DomainSearchResponse::DomainSearchResponse()
{
	success = bool(false);
	response_text = std::string();
	response_time = std::string();
	lookup = std::list<Object>();
	suggest = std::list<Object>();
	tlds = std::list<std::string>();
}

DomainSearchResponse::DomainSearchResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainSearchResponse::~DomainSearchResponse()
{

}

void
DomainSearchResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *response_textKey = "response_text";

    if(object.has_key(response_textKey))
    {
        bourne::json value = object[response_textKey];



        jsonToValue(&response_text, value, "std::string");


    }

    const char *response_timeKey = "response_time";

    if(object.has_key(response_timeKey))
    {
        bourne::json value = object[response_timeKey];



        jsonToValue(&response_time, value, "std::string");


    }

    const char *lookupKey = "lookup";

    if(object.has_key(lookupKey))
    {
        bourne::json value = object[lookupKey];


        std::list<Object> lookup_list;
        Object element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            lookup_list.push_back(element);
        }
        lookup = lookup_list;


    }

    const char *suggestKey = "suggest";

    if(object.has_key(suggestKey))
    {
        bourne::json value = object[suggestKey];


        std::list<Object> suggest_list;
        Object element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            suggest_list.push_back(element);
        }
        suggest = suggest_list;


    }

    const char *tldsKey = "tlds";

    if(object.has_key(tldsKey))
    {
        bourne::json value = object[tldsKey];


        std::list<std::string> tlds_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            tlds_list.push_back(element);
        }
        tlds = tlds_list;


    }


}

bourne::json
DomainSearchResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["response_text"] = getResponseText();






    object["response_time"] = getResponseTime();





    std::list<Object> lookup_list = getLookup();
    bourne::json lookup_arr = bourne::json::array();

    for(auto& var : lookup_list)
    {
        Object obj = var;
        lookup_arr.append(obj.toJson());
    }
    object["lookup"] = lookup_arr;






    std::list<Object> suggest_list = getSuggest();
    bourne::json suggest_arr = bourne::json::array();

    for(auto& var : suggest_list)
    {
        Object obj = var;
        suggest_arr.append(obj.toJson());
    }
    object["suggest"] = suggest_arr;






    std::list<std::string> tlds_list = getTlds();
    bourne::json tlds_arr = bourne::json::array();

    for(auto& var : tlds_list)
    {
        tlds_arr.append(var);
    }
    object["tlds"] = tlds_arr;






    return object;

}

bool
DomainSearchResponse::isSuccess()
{
	return success;
}

void
DomainSearchResponse::setSuccess(bool success)
{
	this->success = success;
}

std::string
DomainSearchResponse::getResponseText()
{
	return response_text;
}

void
DomainSearchResponse::setResponseText(std::string response_text)
{
	this->response_text = response_text;
}

std::string
DomainSearchResponse::getResponseTime()
{
	return response_time;
}

void
DomainSearchResponse::setResponseTime(std::string response_time)
{
	this->response_time = response_time;
}

std::list<Object>
DomainSearchResponse::getLookup()
{
	return lookup;
}

void
DomainSearchResponse::setLookup(std::list<Object> lookup)
{
	this->lookup = lookup;
}

std::list<Object>
DomainSearchResponse::getSuggest()
{
	return suggest;
}

void
DomainSearchResponse::setSuggest(std::list<Object> suggest)
{
	this->suggest = suggest;
}

std::list<std::string>
DomainSearchResponse::getTlds()
{
	return tlds;
}

void
DomainSearchResponse::setTlds(std::list<std::string> tlds)
{
	this->tlds = tlds;
}



