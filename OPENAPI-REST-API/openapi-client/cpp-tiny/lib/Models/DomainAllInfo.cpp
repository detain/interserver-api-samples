

#include "DomainAllInfo.h"

using namespace Tiny;

DomainAllInfo::DomainAllInfo()
{
	_OPS_version = std::string();
	attributes = DomainAllInfo_attributes();
	object = std::string();
	protocol = std::string();
	response_text = std::string();
	response_code = std::string();
	action = std::string();
	is_success = std::string();
}

DomainAllInfo::DomainAllInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainAllInfo::~DomainAllInfo()
{

}

void
DomainAllInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *_OPS_versionKey = "_OPS_version";

    if(object.has_key(_OPS_versionKey))
    {
        bourne::json value = object[_OPS_versionKey];



        jsonToValue(&_OPS_version, value, "std::string");


    }

    const char *attributesKey = "attributes";

    if(object.has_key(attributesKey))
    {
        bourne::json value = object[attributesKey];




        DomainAllInfo_attributes* obj = &attributes;
		obj->fromJson(value.dump());

    }

    const char *objectKey = "object";

    if(object.has_key(objectKey))
    {
        bourne::json value = object[objectKey];



        jsonToValue(&object, value, "std::string");


    }

    const char *protocolKey = "protocol";

    if(object.has_key(protocolKey))
    {
        bourne::json value = object[protocolKey];



        jsonToValue(&protocol, value, "std::string");


    }

    const char *response_textKey = "response_text";

    if(object.has_key(response_textKey))
    {
        bourne::json value = object[response_textKey];



        jsonToValue(&response_text, value, "std::string");


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

    const char *is_successKey = "is_success";

    if(object.has_key(is_successKey))
    {
        bourne::json value = object[is_successKey];



        jsonToValue(&is_success, value, "std::string");


    }


}

bourne::json
DomainAllInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["_OPS_version"] = getOPSVersion();







	object["attributes"] = getAttributes().toJson();





    object["object"] = getObject();






    object["protocol"] = getProtocol();






    object["response_text"] = getResponseText();






    object["response_code"] = getResponseCode();






    object["action"] = getAction();






    object["is_success"] = getIsSuccess();



    return object;

}

std::string
DomainAllInfo::getOPSVersion()
{
	return _OPS_version;
}

void
DomainAllInfo::setOPSVersion(std::string _OPS_version)
{
	this->_OPS_version = _OPS_version;
}

DomainAllInfo_attributes
DomainAllInfo::getAttributes()
{
	return attributes;
}

void
DomainAllInfo::setAttributes(DomainAllInfo_attributes attributes)
{
	this->attributes = attributes;
}

std::string
DomainAllInfo::getObject()
{
	return object;
}

void
DomainAllInfo::setObject(std::string object)
{
	this->object = object;
}

std::string
DomainAllInfo::getProtocol()
{
	return protocol;
}

void
DomainAllInfo::setProtocol(std::string protocol)
{
	this->protocol = protocol;
}

std::string
DomainAllInfo::getResponseText()
{
	return response_text;
}

void
DomainAllInfo::setResponseText(std::string response_text)
{
	this->response_text = response_text;
}

std::string
DomainAllInfo::getResponseCode()
{
	return response_code;
}

void
DomainAllInfo::setResponseCode(std::string response_code)
{
	this->response_code = response_code;
}

std::string
DomainAllInfo::getAction()
{
	return action;
}

void
DomainAllInfo::setAction(std::string action)
{
	this->action = action;
}

std::string
DomainAllInfo::getIsSuccess()
{
	return is_success;
}

void
DomainAllInfo::setIsSuccess(std::string is_success)
{
	this->is_success = is_success;
}



