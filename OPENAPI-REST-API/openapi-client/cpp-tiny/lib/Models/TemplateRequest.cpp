

#include "TemplateRequest.h"

using namespace Tiny;

TemplateRequest::TemplateRequest()
{
	r_template = std::string();
	localPassword = std::string();
	password = std::string();
}

TemplateRequest::TemplateRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

TemplateRequest::~TemplateRequest()
{

}

void
TemplateRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *r_templateKey = "template";

    if(object.has_key(r_templateKey))
    {
        bourne::json value = object[r_templateKey];



        jsonToValue(&r_template, value, "std::string");


    }

    const char *localPasswordKey = "localPassword";

    if(object.has_key(localPasswordKey))
    {
        bourne::json value = object[localPasswordKey];



        jsonToValue(&localPassword, value, "std::string");


    }

    const char *passwordKey = "password";

    if(object.has_key(passwordKey))
    {
        bourne::json value = object[passwordKey];



        jsonToValue(&password, value, "std::string");


    }


}

bourne::json
TemplateRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["r_template"] = getRTemplate();






    object["localPassword"] = getLocalPassword();






    object["password"] = getPassword();



    return object;

}

std::string
TemplateRequest::getRTemplate()
{
	return r_template;
}

void
TemplateRequest::setRTemplate(std::string r_template)
{
	this->r_template = r_template;
}

std::string
TemplateRequest::getLocalPassword()
{
	return localPassword;
}

void
TemplateRequest::setLocalPassword(std::string localPassword)
{
	this->localPassword = localPassword;
}

std::string
TemplateRequest::getPassword()
{
	return password;
}

void
TemplateRequest::setPassword(std::string password)
{
	this->password = password;
}



