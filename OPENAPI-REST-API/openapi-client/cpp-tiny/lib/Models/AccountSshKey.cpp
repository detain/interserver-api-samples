

#include "AccountSshKey.h"

using namespace Tiny;

AccountSshKey::AccountSshKey()
{
	ssh_key = std::string();
}

AccountSshKey::AccountSshKey(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountSshKey::~AccountSshKey()
{

}

void
AccountSshKey::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ssh_keyKey = "ssh_key";

    if(object.has_key(ssh_keyKey))
    {
        bourne::json value = object[ssh_keyKey];



        jsonToValue(&ssh_key, value, "std::string");


    }


}

bourne::json
AccountSshKey::toJson()
{
    bourne::json object = bourne::json::object();





    object["ssh_key"] = getSshKey();



    return object;

}

std::string
AccountSshKey::getSshKey()
{
	return ssh_key;
}

void
AccountSshKey::setSshKey(std::string ssh_key)
{
	this->ssh_key = ssh_key;
}



