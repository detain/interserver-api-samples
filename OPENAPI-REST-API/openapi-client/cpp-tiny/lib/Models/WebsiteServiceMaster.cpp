

#include "WebsiteServiceMaster.h"

using namespace Tiny;

WebsiteServiceMaster::WebsiteServiceMaster()
{
	website_id = std::string();
	website_name = std::string();
	website_ip = std::string();
	website_type = std::string();
	website_available = std::string();
	website_hdsize = std::string();
	website_hdfree = std::string();
	website_load = std::string();
	website_last_update = std::string();
	website_max_sites = std::string();
	website_order = std::string();
	website_partitions = std::string();
	website_dns1 = std::string();
	website_dns2 = std::string();
}

WebsiteServiceMaster::WebsiteServiceMaster(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteServiceMaster::~WebsiteServiceMaster()
{

}

void
WebsiteServiceMaster::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *website_idKey = "website_id";

    if(object.has_key(website_idKey))
    {
        bourne::json value = object[website_idKey];



        jsonToValue(&website_id, value, "std::string");


    }

    const char *website_nameKey = "website_name";

    if(object.has_key(website_nameKey))
    {
        bourne::json value = object[website_nameKey];



        jsonToValue(&website_name, value, "std::string");


    }

    const char *website_ipKey = "website_ip";

    if(object.has_key(website_ipKey))
    {
        bourne::json value = object[website_ipKey];



        jsonToValue(&website_ip, value, "std::string");


    }

    const char *website_typeKey = "website_type";

    if(object.has_key(website_typeKey))
    {
        bourne::json value = object[website_typeKey];



        jsonToValue(&website_type, value, "std::string");


    }

    const char *website_availableKey = "website_available";

    if(object.has_key(website_availableKey))
    {
        bourne::json value = object[website_availableKey];



        jsonToValue(&website_available, value, "std::string");


    }

    const char *website_hdsizeKey = "website_hdsize";

    if(object.has_key(website_hdsizeKey))
    {
        bourne::json value = object[website_hdsizeKey];



        jsonToValue(&website_hdsize, value, "std::string");


    }

    const char *website_hdfreeKey = "website_hdfree";

    if(object.has_key(website_hdfreeKey))
    {
        bourne::json value = object[website_hdfreeKey];



        jsonToValue(&website_hdfree, value, "std::string");


    }

    const char *website_loadKey = "website_load";

    if(object.has_key(website_loadKey))
    {
        bourne::json value = object[website_loadKey];



        jsonToValue(&website_load, value, "std::string");


    }

    const char *website_last_updateKey = "website_last_update";

    if(object.has_key(website_last_updateKey))
    {
        bourne::json value = object[website_last_updateKey];



        jsonToValue(&website_last_update, value, "std::string");


    }

    const char *website_max_sitesKey = "website_max_sites";

    if(object.has_key(website_max_sitesKey))
    {
        bourne::json value = object[website_max_sitesKey];



        jsonToValue(&website_max_sites, value, "std::string");


    }

    const char *website_orderKey = "website_order";

    if(object.has_key(website_orderKey))
    {
        bourne::json value = object[website_orderKey];



        jsonToValue(&website_order, value, "std::string");


    }

    const char *website_partitionsKey = "website_partitions";

    if(object.has_key(website_partitionsKey))
    {
        bourne::json value = object[website_partitionsKey];



        jsonToValue(&website_partitions, value, "std::string");


    }

    const char *website_dns1Key = "website_dns1";

    if(object.has_key(website_dns1Key))
    {
        bourne::json value = object[website_dns1Key];



        jsonToValue(&website_dns1, value, "std::string");


    }

    const char *website_dns2Key = "website_dns2";

    if(object.has_key(website_dns2Key))
    {
        bourne::json value = object[website_dns2Key];



        jsonToValue(&website_dns2, value, "std::string");


    }


}

bourne::json
WebsiteServiceMaster::toJson()
{
    bourne::json object = bourne::json::object();





    object["website_id"] = getWebsiteId();






    object["website_name"] = getWebsiteName();






    object["website_ip"] = getWebsiteIp();






    object["website_type"] = getWebsiteType();






    object["website_available"] = getWebsiteAvailable();






    object["website_hdsize"] = getWebsiteHdsize();






    object["website_hdfree"] = getWebsiteHdfree();






    object["website_load"] = getWebsiteLoad();






    object["website_last_update"] = getWebsiteLastUpdate();






    object["website_max_sites"] = getWebsiteMaxSites();






    object["website_order"] = getWebsiteOrder();






    object["website_partitions"] = getWebsitePartitions();






    object["website_dns1"] = getWebsiteDns1();






    object["website_dns2"] = getWebsiteDns2();



    return object;

}

std::string
WebsiteServiceMaster::getWebsiteId()
{
	return website_id;
}

void
WebsiteServiceMaster::setWebsiteId(std::string website_id)
{
	this->website_id = website_id;
}

std::string
WebsiteServiceMaster::getWebsiteName()
{
	return website_name;
}

void
WebsiteServiceMaster::setWebsiteName(std::string website_name)
{
	this->website_name = website_name;
}

std::string
WebsiteServiceMaster::getWebsiteIp()
{
	return website_ip;
}

void
WebsiteServiceMaster::setWebsiteIp(std::string website_ip)
{
	this->website_ip = website_ip;
}

std::string
WebsiteServiceMaster::getWebsiteType()
{
	return website_type;
}

void
WebsiteServiceMaster::setWebsiteType(std::string website_type)
{
	this->website_type = website_type;
}

std::string
WebsiteServiceMaster::getWebsiteAvailable()
{
	return website_available;
}

void
WebsiteServiceMaster::setWebsiteAvailable(std::string website_available)
{
	this->website_available = website_available;
}

std::string
WebsiteServiceMaster::getWebsiteHdsize()
{
	return website_hdsize;
}

void
WebsiteServiceMaster::setWebsiteHdsize(std::string website_hdsize)
{
	this->website_hdsize = website_hdsize;
}

std::string
WebsiteServiceMaster::getWebsiteHdfree()
{
	return website_hdfree;
}

void
WebsiteServiceMaster::setWebsiteHdfree(std::string website_hdfree)
{
	this->website_hdfree = website_hdfree;
}

std::string
WebsiteServiceMaster::getWebsiteLoad()
{
	return website_load;
}

void
WebsiteServiceMaster::setWebsiteLoad(std::string website_load)
{
	this->website_load = website_load;
}

std::string
WebsiteServiceMaster::getWebsiteLastUpdate()
{
	return website_last_update;
}

void
WebsiteServiceMaster::setWebsiteLastUpdate(std::string website_last_update)
{
	this->website_last_update = website_last_update;
}

std::string
WebsiteServiceMaster::getWebsiteMaxSites()
{
	return website_max_sites;
}

void
WebsiteServiceMaster::setWebsiteMaxSites(std::string website_max_sites)
{
	this->website_max_sites = website_max_sites;
}

std::string
WebsiteServiceMaster::getWebsiteOrder()
{
	return website_order;
}

void
WebsiteServiceMaster::setWebsiteOrder(std::string website_order)
{
	this->website_order = website_order;
}

std::string
WebsiteServiceMaster::getWebsitePartitions()
{
	return website_partitions;
}

void
WebsiteServiceMaster::setWebsitePartitions(std::string website_partitions)
{
	this->website_partitions = website_partitions;
}

std::string
WebsiteServiceMaster::getWebsiteDns1()
{
	return website_dns1;
}

void
WebsiteServiceMaster::setWebsiteDns1(std::string website_dns1)
{
	this->website_dns1 = website_dns1;
}

std::string
WebsiteServiceMaster::getWebsiteDns2()
{
	return website_dns2;
}

void
WebsiteServiceMaster::setWebsiteDns2(std::string website_dns2)
{
	this->website_dns2 = website_dns2;
}



