

#include "Home_details_modules.h"

using namespace Tiny;

Home_details_modules::Home_details_modules()
{
	domains = HomeDetailsModulesDomains();
	webhosting = HomeDetailsModulesWebhosting();
	vps = HomeDetailsModulesVps();
	licenses = HomeDetailsModulesLicenses();
	backups = HomeDetailsModulesBackups();
	servers = HomeDetailsModulesServers();
	quickservers = HomeDetailsModulesQuickservers();
}

Home_details_modules::Home_details_modules(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_details_modules::~Home_details_modules()
{

}

void
Home_details_modules::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *domainsKey = "domains";

    if(object.has_key(domainsKey))
    {
        bourne::json value = object[domainsKey];




        HomeDetailsModulesDomains* obj = &domains;
		obj->fromJson(value.dump());

    }

    const char *webhostingKey = "webhosting";

    if(object.has_key(webhostingKey))
    {
        bourne::json value = object[webhostingKey];




        HomeDetailsModulesWebhosting* obj = &webhosting;
		obj->fromJson(value.dump());

    }

    const char *vpsKey = "vps";

    if(object.has_key(vpsKey))
    {
        bourne::json value = object[vpsKey];




        HomeDetailsModulesVps* obj = &vps;
		obj->fromJson(value.dump());

    }

    const char *licensesKey = "licenses";

    if(object.has_key(licensesKey))
    {
        bourne::json value = object[licensesKey];




        HomeDetailsModulesLicenses* obj = &licenses;
		obj->fromJson(value.dump());

    }

    const char *backupsKey = "backups";

    if(object.has_key(backupsKey))
    {
        bourne::json value = object[backupsKey];




        HomeDetailsModulesBackups* obj = &backups;
		obj->fromJson(value.dump());

    }

    const char *serversKey = "servers";

    if(object.has_key(serversKey))
    {
        bourne::json value = object[serversKey];




        HomeDetailsModulesServers* obj = &servers;
		obj->fromJson(value.dump());

    }

    const char *quickserversKey = "quickservers";

    if(object.has_key(quickserversKey))
    {
        bourne::json value = object[quickserversKey];




        HomeDetailsModulesQuickservers* obj = &quickservers;
		obj->fromJson(value.dump());

    }


}

bourne::json
Home_details_modules::toJson()
{
    bourne::json object = bourne::json::object();






	object["domains"] = getDomains().toJson();






	object["webhosting"] = getWebhosting().toJson();






	object["vps"] = getVps().toJson();






	object["licenses"] = getLicenses().toJson();






	object["backups"] = getBackups().toJson();






	object["servers"] = getServers().toJson();






	object["quickservers"] = getQuickservers().toJson();


    return object;

}

HomeDetailsModulesDomains
Home_details_modules::getDomains()
{
	return domains;
}

void
Home_details_modules::setDomains(HomeDetailsModulesDomains domains)
{
	this->domains = domains;
}

HomeDetailsModulesWebhosting
Home_details_modules::getWebhosting()
{
	return webhosting;
}

void
Home_details_modules::setWebhosting(HomeDetailsModulesWebhosting webhosting)
{
	this->webhosting = webhosting;
}

HomeDetailsModulesVps
Home_details_modules::getVps()
{
	return vps;
}

void
Home_details_modules::setVps(HomeDetailsModulesVps vps)
{
	this->vps = vps;
}

HomeDetailsModulesLicenses
Home_details_modules::getLicenses()
{
	return licenses;
}

void
Home_details_modules::setLicenses(HomeDetailsModulesLicenses licenses)
{
	this->licenses = licenses;
}

HomeDetailsModulesBackups
Home_details_modules::getBackups()
{
	return backups;
}

void
Home_details_modules::setBackups(HomeDetailsModulesBackups backups)
{
	this->backups = backups;
}

HomeDetailsModulesServers
Home_details_modules::getServers()
{
	return servers;
}

void
Home_details_modules::setServers(HomeDetailsModulesServers servers)
{
	this->servers = servers;
}

HomeDetailsModulesQuickservers
Home_details_modules::getQuickservers()
{
	return quickservers;
}

void
Home_details_modules::setQuickservers(HomeDetailsModulesQuickservers quickservers)
{
	this->quickservers = quickservers;
}



