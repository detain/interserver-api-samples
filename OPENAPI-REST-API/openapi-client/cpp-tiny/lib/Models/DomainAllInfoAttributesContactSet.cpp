

#include "DomainAllInfo_attributes_contact_set.h"

using namespace Tiny;

DomainAllInfo_attributes_contact_set::DomainAllInfo_attributes_contact_set()
{
	owner = DomainOwnerContact();
	admin = DomainAdminContact();
	tech = DomainTechContact();
}

DomainAllInfo_attributes_contact_set::DomainAllInfo_attributes_contact_set(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainAllInfo_attributes_contact_set::~DomainAllInfo_attributes_contact_set()
{

}

void
DomainAllInfo_attributes_contact_set::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ownerKey = "owner";

    if(object.has_key(ownerKey))
    {
        bourne::json value = object[ownerKey];




        DomainOwnerContact* obj = &owner;
		obj->fromJson(value.dump());

    }

    const char *adminKey = "admin";

    if(object.has_key(adminKey))
    {
        bourne::json value = object[adminKey];




        DomainAdminContact* obj = &admin;
		obj->fromJson(value.dump());

    }

    const char *techKey = "tech";

    if(object.has_key(techKey))
    {
        bourne::json value = object[techKey];




        DomainTechContact* obj = &tech;
		obj->fromJson(value.dump());

    }


}

bourne::json
DomainAllInfo_attributes_contact_set::toJson()
{
    bourne::json object = bourne::json::object();






	object["owner"] = getOwner().toJson();






	object["admin"] = getAdmin().toJson();






	object["tech"] = getTech().toJson();


    return object;

}

DomainOwnerContact
DomainAllInfo_attributes_contact_set::getOwner()
{
	return owner;
}

void
DomainAllInfo_attributes_contact_set::setOwner(DomainOwnerContact owner)
{
	this->owner = owner;
}

DomainAdminContact
DomainAllInfo_attributes_contact_set::getAdmin()
{
	return admin;
}

void
DomainAllInfo_attributes_contact_set::setAdmin(DomainAdminContact admin)
{
	this->admin = admin;
}

DomainTechContact
DomainAllInfo_attributes_contact_set::getTech()
{
	return tech;
}

void
DomainAllInfo_attributes_contact_set::setTech(DomainTechContact tech)
{
	this->tech = tech;
}



