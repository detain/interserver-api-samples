

#include "ServerIpmiLiveInfo.h"

using namespace Tiny;

ServerIpmiLiveInfo::ServerIpmiLiveInfo()
{
	text = std::string();
	public_ip = std::string();
	allowed_ip = std::string();
	client_username = std::string();
	client_password = std::string();
}

ServerIpmiLiveInfo::ServerIpmiLiveInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerIpmiLiveInfo::~ServerIpmiLiveInfo()
{

}

void
ServerIpmiLiveInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }

    const char *public_ipKey = "public_ip";

    if(object.has_key(public_ipKey))
    {
        bourne::json value = object[public_ipKey];



        jsonToValue(&public_ip, value, "std::string");


    }

    const char *allowed_ipKey = "allowed_ip";

    if(object.has_key(allowed_ipKey))
    {
        bourne::json value = object[allowed_ipKey];



        jsonToValue(&allowed_ip, value, "std::string");


    }

    const char *client_usernameKey = "client_username";

    if(object.has_key(client_usernameKey))
    {
        bourne::json value = object[client_usernameKey];



        jsonToValue(&client_username, value, "std::string");


    }

    const char *client_passwordKey = "client_password";

    if(object.has_key(client_passwordKey))
    {
        bourne::json value = object[client_passwordKey];



        jsonToValue(&client_password, value, "std::string");


    }


}

bourne::json
ServerIpmiLiveInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["text"] = getText();






    object["public_ip"] = getPublicIp();






    object["allowed_ip"] = getAllowedIp();






    object["client_username"] = getClientUsername();






    object["client_password"] = getClientPassword();



    return object;

}

std::string
ServerIpmiLiveInfo::getText()
{
	return text;
}

void
ServerIpmiLiveInfo::setText(std::string text)
{
	this->text = text;
}

std::string
ServerIpmiLiveInfo::getPublicIp()
{
	return public_ip;
}

void
ServerIpmiLiveInfo::setPublicIp(std::string public_ip)
{
	this->public_ip = public_ip;
}

std::string
ServerIpmiLiveInfo::getAllowedIp()
{
	return allowed_ip;
}

void
ServerIpmiLiveInfo::setAllowedIp(std::string allowed_ip)
{
	this->allowed_ip = allowed_ip;
}

std::string
ServerIpmiLiveInfo::getClientUsername()
{
	return client_username;
}

void
ServerIpmiLiveInfo::setClientUsername(std::string client_username)
{
	this->client_username = client_username;
}

std::string
ServerIpmiLiveInfo::getClientPassword()
{
	return client_password;
}

void
ServerIpmiLiveInfo::setClientPassword(std::string client_password)
{
	this->client_password = client_password;
}



