

#include "DomainProvProcessPending.h"

using namespace Tiny;

DomainProvProcessPending::DomainProvProcessPending()
{
	_OPS_version = std::string();
	response_text = std::string();
	protocol = std::string();
	response_code = std::string();
	action = std::string();
	object = std::string();
	is_success = std::string();
	attributes = DomainProvProcessPending_attributes();
}

DomainProvProcessPending::DomainProvProcessPending(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainProvProcessPending::~DomainProvProcessPending()
{

}

void
DomainProvProcessPending::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *_OPS_versionKey = "_OPS_version";

    if(object.has_key(_OPS_versionKey))
    {
        bourne::json value = object[_OPS_versionKey];



        jsonToValue(&_OPS_version, value, "std::string");


    }

    const char *response_textKey = "response_text";

    if(object.has_key(response_textKey))
    {
        bourne::json value = object[response_textKey];



        jsonToValue(&response_text, value, "std::string");


    }

    const char *protocolKey = "protocol";

    if(object.has_key(protocolKey))
    {
        bourne::json value = object[protocolKey];



        jsonToValue(&protocol, value, "std::string");


    }

    const char *response_codeKey = "response_code";

    if(object.has_key(response_codeKey))
    {
        bourne::json value = object[response_codeKey];



        jsonToValue(&response_code, value, "std::string");


    }

    const char *actionKey = "action";

    if(object.has_key(actionKey))
    {
        bourne::json value = object[actionKey];



        jsonToValue(&action, value, "std::string");


    }

    const char *objectKey = "object";

    if(object.has_key(objectKey))
    {
        bourne::json value = object[objectKey];



        jsonToValue(&object, value, "std::string");


    }

    const char *is_successKey = "is_success";

    if(object.has_key(is_successKey))
    {
        bourne::json value = object[is_successKey];



        jsonToValue(&is_success, value, "std::string");


    }

    const char *attributesKey = "attributes";

    if(object.has_key(attributesKey))
    {
        bourne::json value = object[attributesKey];




        DomainProvProcessPending_attributes* obj = &attributes;
		obj->fromJson(value.dump());

    }


}

bourne::json
DomainProvProcessPending::toJson()
{
    bourne::json object = bourne::json::object();





    object["_OPS_version"] = getOPSVersion();






    object["response_text"] = getResponseText();






    object["protocol"] = getProtocol();






    object["response_code"] = getResponseCode();






    object["action"] = getAction();






    object["object"] = getObject();






    object["is_success"] = getIsSuccess();







	object["attributes"] = getAttributes().toJson();


    return object;

}

std::string
DomainProvProcessPending::getOPSVersion()
{
	return _OPS_version;
}

void
DomainProvProcessPending::setOPSVersion(std::string _OPS_version)
{
	this->_OPS_version = _OPS_version;
}

std::string
DomainProvProcessPending::getResponseText()
{
	return response_text;
}

void
DomainProvProcessPending::setResponseText(std::string response_text)
{
	this->response_text = response_text;
}

std::string
DomainProvProcessPending::getProtocol()
{
	return protocol;
}

void
DomainProvProcessPending::setProtocol(std::string protocol)
{
	this->protocol = protocol;
}

std::string
DomainProvProcessPending::getResponseCode()
{
	return response_code;
}

void
DomainProvProcessPending::setResponseCode(std::string response_code)
{
	this->response_code = response_code;
}

std::string
DomainProvProcessPending::getAction()
{
	return action;
}

void
DomainProvProcessPending::setAction(std::string action)
{
	this->action = action;
}

std::string
DomainProvProcessPending::getObject()
{
	return object;
}

void
DomainProvProcessPending::setObject(std::string object)
{
	this->object = object;
}

std::string
DomainProvProcessPending::getIsSuccess()
{
	return is_success;
}

void
DomainProvProcessPending::setIsSuccess(std::string is_success)
{
	this->is_success = is_success;
}

DomainProvProcessPending_attributes
DomainProvProcessPending::getAttributes()
{
	return attributes;
}

void
DomainProvProcessPending::setAttributes(DomainProvProcessPending_attributes attributes)
{
	this->attributes = attributes;
}



