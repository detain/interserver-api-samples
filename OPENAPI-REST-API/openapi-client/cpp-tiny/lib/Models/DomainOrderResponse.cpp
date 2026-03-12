

#include "DomainOrderResponse.h"

using namespace Tiny;

DomainOrderResponse::DomainOrderResponse()
{
	_OPS_version = std::string();
	protocol = std::string();
	is_success = std::string();
	action = std::string();
	attributes = DomainOrderResponse_attributes();
	response_text = std::string();
	object = std::string();
	response_code = std::string();
}

DomainOrderResponse::DomainOrderResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainOrderResponse::~DomainOrderResponse()
{

}

void
DomainOrderResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *_OPS_versionKey = "_OPS_version";

    if(object.has_key(_OPS_versionKey))
    {
        bourne::json value = object[_OPS_versionKey];



        jsonToValue(&_OPS_version, value, "std::string");


    }

    const char *protocolKey = "protocol";

    if(object.has_key(protocolKey))
    {
        bourne::json value = object[protocolKey];



        jsonToValue(&protocol, value, "std::string");


    }

    const char *is_successKey = "is_success";

    if(object.has_key(is_successKey))
    {
        bourne::json value = object[is_successKey];



        jsonToValue(&is_success, value, "std::string");


    }

    const char *actionKey = "action";

    if(object.has_key(actionKey))
    {
        bourne::json value = object[actionKey];



        jsonToValue(&action, value, "std::string");


    }

    const char *attributesKey = "attributes";

    if(object.has_key(attributesKey))
    {
        bourne::json value = object[attributesKey];




        DomainOrderResponse_attributes* obj = &attributes;
		obj->fromJson(value.dump());

    }

    const char *response_textKey = "response_text";

    if(object.has_key(response_textKey))
    {
        bourne::json value = object[response_textKey];



        jsonToValue(&response_text, value, "std::string");


    }

    const char *objectKey = "object";

    if(object.has_key(objectKey))
    {
        bourne::json value = object[objectKey];



        jsonToValue(&object, value, "std::string");


    }

    const char *response_codeKey = "response_code";

    if(object.has_key(response_codeKey))
    {
        bourne::json value = object[response_codeKey];



        jsonToValue(&response_code, value, "std::string");


    }


}

bourne::json
DomainOrderResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["_OPS_version"] = getOPSVersion();






    object["protocol"] = getProtocol();






    object["is_success"] = getIsSuccess();






    object["action"] = getAction();







	object["attributes"] = getAttributes().toJson();





    object["response_text"] = getResponseText();






    object["object"] = getObject();






    object["response_code"] = getResponseCode();



    return object;

}

std::string
DomainOrderResponse::getOPSVersion()
{
	return _OPS_version;
}

void
DomainOrderResponse::setOPSVersion(std::string _OPS_version)
{
	this->_OPS_version = _OPS_version;
}

std::string
DomainOrderResponse::getProtocol()
{
	return protocol;
}

void
DomainOrderResponse::setProtocol(std::string protocol)
{
	this->protocol = protocol;
}

std::string
DomainOrderResponse::getIsSuccess()
{
	return is_success;
}

void
DomainOrderResponse::setIsSuccess(std::string is_success)
{
	this->is_success = is_success;
}

std::string
DomainOrderResponse::getAction()
{
	return action;
}

void
DomainOrderResponse::setAction(std::string action)
{
	this->action = action;
}

DomainOrderResponse_attributes
DomainOrderResponse::getAttributes()
{
	return attributes;
}

void
DomainOrderResponse::setAttributes(DomainOrderResponse_attributes attributes)
{
	this->attributes = attributes;
}

std::string
DomainOrderResponse::getResponseText()
{
	return response_text;
}

void
DomainOrderResponse::setResponseText(std::string response_text)
{
	this->response_text = response_text;
}

std::string
DomainOrderResponse::getObject()
{
	return object;
}

void
DomainOrderResponse::setObject(std::string object)
{
	this->object = object;
}

std::string
DomainOrderResponse::getResponseCode()
{
	return response_code;
}

void
DomainOrderResponse::setResponseCode(std::string response_code)
{
	this->response_code = response_code;
}



