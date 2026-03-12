

#include "DomainAllInfo_attributes.h"

using namespace Tiny;

DomainAllInfo_attributes::DomainAllInfo_attributes()
{
	contact_set = DomainAllInfo_attributes_contact_set();
	registry_createdate = std::string();
	registry_expiredate = std::string();
	tld_data = std::string();
	let_expire = std::string();
	auto_renew = std::string();
	sponsoring_rsp = std::string();
	gdpr_consent_status = std::string();
	nameserver_list = std::list<DomainNameServer>();
	registry_updatedate = std::string();
	affiliate_id = std::string();
	expiredate = std::string();
}

DomainAllInfo_attributes::DomainAllInfo_attributes(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainAllInfo_attributes::~DomainAllInfo_attributes()
{

}

void
DomainAllInfo_attributes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *contact_setKey = "contact_set";

    if(object.has_key(contact_setKey))
    {
        bourne::json value = object[contact_setKey];




        DomainAllInfo_attributes_contact_set* obj = &contact_set;
		obj->fromJson(value.dump());

    }

    const char *registry_createdateKey = "registry_createdate";

    if(object.has_key(registry_createdateKey))
    {
        bourne::json value = object[registry_createdateKey];



        jsonToValue(&registry_createdate, value, "std::string");


    }

    const char *registry_expiredateKey = "registry_expiredate";

    if(object.has_key(registry_expiredateKey))
    {
        bourne::json value = object[registry_expiredateKey];



        jsonToValue(&registry_expiredate, value, "std::string");


    }

    const char *tld_dataKey = "tld_data";

    if(object.has_key(tld_dataKey))
    {
        bourne::json value = object[tld_dataKey];



        jsonToValue(&tld_data, value, "std::string");


    }

    const char *let_expireKey = "let_expire";

    if(object.has_key(let_expireKey))
    {
        bourne::json value = object[let_expireKey];



        jsonToValue(&let_expire, value, "std::string");


    }

    const char *auto_renewKey = "auto_renew";

    if(object.has_key(auto_renewKey))
    {
        bourne::json value = object[auto_renewKey];



        jsonToValue(&auto_renew, value, "std::string");


    }

    const char *sponsoring_rspKey = "sponsoring_rsp";

    if(object.has_key(sponsoring_rspKey))
    {
        bourne::json value = object[sponsoring_rspKey];



        jsonToValue(&sponsoring_rsp, value, "std::string");


    }

    const char *gdpr_consent_statusKey = "gdpr_consent_status";

    if(object.has_key(gdpr_consent_statusKey))
    {
        bourne::json value = object[gdpr_consent_statusKey];



        jsonToValue(&gdpr_consent_status, value, "std::string");


    }

    const char *nameserver_listKey = "nameserver_list";

    if(object.has_key(nameserver_listKey))
    {
        bourne::json value = object[nameserver_listKey];


        std::list<DomainNameServer> nameserver_list_list;
        DomainNameServer element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            nameserver_list_list.push_back(element);
        }
        nameserver_list = nameserver_list_list;


    }

    const char *registry_updatedateKey = "registry_updatedate";

    if(object.has_key(registry_updatedateKey))
    {
        bourne::json value = object[registry_updatedateKey];



        jsonToValue(&registry_updatedate, value, "std::string");


    }

    const char *affiliate_idKey = "affiliate_id";

    if(object.has_key(affiliate_idKey))
    {
        bourne::json value = object[affiliate_idKey];



        jsonToValue(&affiliate_id, value, "std::string");


    }

    const char *expiredateKey = "expiredate";

    if(object.has_key(expiredateKey))
    {
        bourne::json value = object[expiredateKey];



        jsonToValue(&expiredate, value, "std::string");


    }


}

bourne::json
DomainAllInfo_attributes::toJson()
{
    bourne::json object = bourne::json::object();






	object["contact_set"] = getContactSet().toJson();





    object["registry_createdate"] = getRegistryCreatedate();






    object["registry_expiredate"] = getRegistryExpiredate();






    object["tld_data"] = getTldData();






    object["let_expire"] = getLetExpire();






    object["auto_renew"] = getAutoRenew();






    object["sponsoring_rsp"] = getSponsoringRsp();






    object["gdpr_consent_status"] = getGdprConsentStatus();





    std::list<DomainNameServer> nameserver_list_list = getNameserverList();
    bourne::json nameserver_list_arr = bourne::json::array();

    for(auto& var : nameserver_list_list)
    {
        DomainNameServer obj = var;
        nameserver_list_arr.append(obj.toJson());
    }
    object["nameserver_list"] = nameserver_list_arr;







    object["registry_updatedate"] = getRegistryUpdatedate();






    object["affiliate_id"] = getAffiliateId();






    object["expiredate"] = getExpiredate();



    return object;

}

DomainAllInfo_attributes_contact_set
DomainAllInfo_attributes::getContactSet()
{
	return contact_set;
}

void
DomainAllInfo_attributes::setContactSet(DomainAllInfo_attributes_contact_set contact_set)
{
	this->contact_set = contact_set;
}

std::string
DomainAllInfo_attributes::getRegistryCreatedate()
{
	return registry_createdate;
}

void
DomainAllInfo_attributes::setRegistryCreatedate(std::string registry_createdate)
{
	this->registry_createdate = registry_createdate;
}

std::string
DomainAllInfo_attributes::getRegistryExpiredate()
{
	return registry_expiredate;
}

void
DomainAllInfo_attributes::setRegistryExpiredate(std::string registry_expiredate)
{
	this->registry_expiredate = registry_expiredate;
}

std::string
DomainAllInfo_attributes::getTldData()
{
	return tld_data;
}

void
DomainAllInfo_attributes::setTldData(std::string tld_data)
{
	this->tld_data = tld_data;
}

std::string
DomainAllInfo_attributes::getLetExpire()
{
	return let_expire;
}

void
DomainAllInfo_attributes::setLetExpire(std::string let_expire)
{
	this->let_expire = let_expire;
}

std::string
DomainAllInfo_attributes::getAutoRenew()
{
	return auto_renew;
}

void
DomainAllInfo_attributes::setAutoRenew(std::string auto_renew)
{
	this->auto_renew = auto_renew;
}

std::string
DomainAllInfo_attributes::getSponsoringRsp()
{
	return sponsoring_rsp;
}

void
DomainAllInfo_attributes::setSponsoringRsp(std::string sponsoring_rsp)
{
	this->sponsoring_rsp = sponsoring_rsp;
}

std::string
DomainAllInfo_attributes::getGdprConsentStatus()
{
	return gdpr_consent_status;
}

void
DomainAllInfo_attributes::setGdprConsentStatus(std::string gdpr_consent_status)
{
	this->gdpr_consent_status = gdpr_consent_status;
}

std::list<DomainNameServer>
DomainAllInfo_attributes::getNameserverList()
{
	return nameserver_list;
}

void
DomainAllInfo_attributes::setNameserverList(std::list<DomainNameServer> nameserver_list)
{
	this->nameserver_list = nameserver_list;
}

std::string
DomainAllInfo_attributes::getRegistryUpdatedate()
{
	return registry_updatedate;
}

void
DomainAllInfo_attributes::setRegistryUpdatedate(std::string registry_updatedate)
{
	this->registry_updatedate = registry_updatedate;
}

std::string
DomainAllInfo_attributes::getAffiliateId()
{
	return affiliate_id;
}

void
DomainAllInfo_attributes::setAffiliateId(std::string affiliate_id)
{
	this->affiliate_id = affiliate_id;
}

std::string
DomainAllInfo_attributes::getExpiredate()
{
	return expiredate;
}

void
DomainAllInfo_attributes::setExpiredate(std::string expiredate)
{
	this->expiredate = expiredate;
}



