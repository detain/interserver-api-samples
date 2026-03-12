

#include "VpsPlesk12Data.h"

using namespace Tiny;

VpsPlesk12Data::VpsPlesk12Data()
{
	admin = VpsPleskLicense();
	pro = VpsPleskLicense();
	host = VpsPleskLicense();
}

VpsPlesk12Data::VpsPlesk12Data(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsPlesk12Data::~VpsPlesk12Data()
{

}

void
VpsPlesk12Data::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *adminKey = "admin";

    if(object.has_key(adminKey))
    {
        bourne::json value = object[adminKey];




        VpsPleskLicense* obj = &admin;
		obj->fromJson(value.dump());

    }

    const char *proKey = "pro";

    if(object.has_key(proKey))
    {
        bourne::json value = object[proKey];




        VpsPleskLicense* obj = &pro;
		obj->fromJson(value.dump());

    }

    const char *hostKey = "host";

    if(object.has_key(hostKey))
    {
        bourne::json value = object[hostKey];




        VpsPleskLicense* obj = &host;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsPlesk12Data::toJson()
{
    bourne::json object = bourne::json::object();






	object["admin"] = getAdmin().toJson();






	object["pro"] = getPro().toJson();






	object["host"] = getHost().toJson();


    return object;

}

VpsPleskLicense
VpsPlesk12Data::getAdmin()
{
	return admin;
}

void
VpsPlesk12Data::setAdmin(VpsPleskLicense admin)
{
	this->admin = admin;
}

VpsPleskLicense
VpsPlesk12Data::getPro()
{
	return pro;
}

void
VpsPlesk12Data::setPro(VpsPleskLicense pro)
{
	this->pro = pro;
}

VpsPleskLicense
VpsPlesk12Data::getHost()
{
	return host;
}

void
VpsPlesk12Data::setHost(VpsPleskLicense host)
{
	this->host = host;
}



