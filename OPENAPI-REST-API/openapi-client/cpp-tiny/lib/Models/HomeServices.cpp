

#include "Home_services.h"

using namespace Tiny;

Home_services::Home_services()
{
	domains = Home_services_domains();
	webhosting = Home_services_webhosting();
	vps = Home_services_vps();
	licenses = Home_services_licenses();
	servers = Home_services_servers();
	backups = Home_services_backups();
}

Home_services::Home_services(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_services::~Home_services()
{

}

void
Home_services::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *domainsKey = "domains";

    if(object.has_key(domainsKey))
    {
        bourne::json value = object[domainsKey];




        Home_services_domains* obj = &domains;
		obj->fromJson(value.dump());

    }

    const char *webhostingKey = "webhosting";

    if(object.has_key(webhostingKey))
    {
        bourne::json value = object[webhostingKey];




        Home_services_webhosting* obj = &webhosting;
		obj->fromJson(value.dump());

    }

    const char *vpsKey = "vps";

    if(object.has_key(vpsKey))
    {
        bourne::json value = object[vpsKey];




        Home_services_vps* obj = &vps;
		obj->fromJson(value.dump());

    }

    const char *licensesKey = "licenses";

    if(object.has_key(licensesKey))
    {
        bourne::json value = object[licensesKey];




        Home_services_licenses* obj = &licenses;
		obj->fromJson(value.dump());

    }

    const char *serversKey = "servers";

    if(object.has_key(serversKey))
    {
        bourne::json value = object[serversKey];




        Home_services_servers* obj = &servers;
		obj->fromJson(value.dump());

    }

    const char *backupsKey = "backups";

    if(object.has_key(backupsKey))
    {
        bourne::json value = object[backupsKey];




        Home_services_backups* obj = &backups;
		obj->fromJson(value.dump());

    }


}

bourne::json
Home_services::toJson()
{
    bourne::json object = bourne::json::object();






	object["domains"] = getDomains().toJson();






	object["webhosting"] = getWebhosting().toJson();






	object["vps"] = getVps().toJson();






	object["licenses"] = getLicenses().toJson();






	object["servers"] = getServers().toJson();






	object["backups"] = getBackups().toJson();


    return object;

}

Home_services_domains
Home_services::getDomains()
{
	return domains;
}

void
Home_services::setDomains(Home_services_domains domains)
{
	this->domains = domains;
}

Home_services_webhosting
Home_services::getWebhosting()
{
	return webhosting;
}

void
Home_services::setWebhosting(Home_services_webhosting webhosting)
{
	this->webhosting = webhosting;
}

Home_services_vps
Home_services::getVps()
{
	return vps;
}

void
Home_services::setVps(Home_services_vps vps)
{
	this->vps = vps;
}

Home_services_licenses
Home_services::getLicenses()
{
	return licenses;
}

void
Home_services::setLicenses(Home_services_licenses licenses)
{
	this->licenses = licenses;
}

Home_services_servers
Home_services::getServers()
{
	return servers;
}

void
Home_services::setServers(Home_services_servers servers)
{
	this->servers = servers;
}

Home_services_backups
Home_services::getBackups()
{
	return backups;
}

void
Home_services::setBackups(Home_services_backups backups)
{
	this->backups = backups;
}



