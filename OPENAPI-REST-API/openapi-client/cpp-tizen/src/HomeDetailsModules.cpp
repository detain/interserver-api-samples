#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_details_modules.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_details_modules::Home_details_modules()
{
	//__init();
}

Home_details_modules::~Home_details_modules()
{
	//__cleanup();
}

void
Home_details_modules::__init()
{
	//domains = new HomeDetailsModulesDomains();
	//webhosting = new HomeDetailsModulesWebhosting();
	//vps = new HomeDetailsModulesVps();
	//licenses = new HomeDetailsModulesLicenses();
	//backups = new HomeDetailsModulesBackups();
	//servers = new HomeDetailsModulesServers();
	//quickservers = new HomeDetailsModulesQuickservers();
}

void
Home_details_modules::__cleanup()
{
	//if(domains != NULL) {
	//
	//delete domains;
	//domains = NULL;
	//}
	//if(webhosting != NULL) {
	//
	//delete webhosting;
	//webhosting = NULL;
	//}
	//if(vps != NULL) {
	//
	//delete vps;
	//vps = NULL;
	//}
	//if(licenses != NULL) {
	//
	//delete licenses;
	//licenses = NULL;
	//}
	//if(backups != NULL) {
	//
	//delete backups;
	//backups = NULL;
	//}
	//if(servers != NULL) {
	//
	//delete servers;
	//servers = NULL;
	//}
	//if(quickservers != NULL) {
	//
	//delete quickservers;
	//quickservers = NULL;
	//}
	//
}

void
Home_details_modules::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *domainsKey = "domains";
	node = json_object_get_member(pJsonObject, domainsKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeDetailsModulesDomains")) {
			jsonToValue(&domains, node, "HomeDetailsModulesDomains", "HomeDetailsModulesDomains");
		} else {
			
			HomeDetailsModulesDomains* obj = static_cast<HomeDetailsModulesDomains*> (&domains);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *webhostingKey = "webhosting";
	node = json_object_get_member(pJsonObject, webhostingKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeDetailsModulesWebhosting")) {
			jsonToValue(&webhosting, node, "HomeDetailsModulesWebhosting", "HomeDetailsModulesWebhosting");
		} else {
			
			HomeDetailsModulesWebhosting* obj = static_cast<HomeDetailsModulesWebhosting*> (&webhosting);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsKey = "vps";
	node = json_object_get_member(pJsonObject, vpsKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeDetailsModulesVps")) {
			jsonToValue(&vps, node, "HomeDetailsModulesVps", "HomeDetailsModulesVps");
		} else {
			
			HomeDetailsModulesVps* obj = static_cast<HomeDetailsModulesVps*> (&vps);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *licensesKey = "licenses";
	node = json_object_get_member(pJsonObject, licensesKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeDetailsModulesLicenses")) {
			jsonToValue(&licenses, node, "HomeDetailsModulesLicenses", "HomeDetailsModulesLicenses");
		} else {
			
			HomeDetailsModulesLicenses* obj = static_cast<HomeDetailsModulesLicenses*> (&licenses);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *backupsKey = "backups";
	node = json_object_get_member(pJsonObject, backupsKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeDetailsModulesBackups")) {
			jsonToValue(&backups, node, "HomeDetailsModulesBackups", "HomeDetailsModulesBackups");
		} else {
			
			HomeDetailsModulesBackups* obj = static_cast<HomeDetailsModulesBackups*> (&backups);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serversKey = "servers";
	node = json_object_get_member(pJsonObject, serversKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeDetailsModulesServers")) {
			jsonToValue(&servers, node, "HomeDetailsModulesServers", "HomeDetailsModulesServers");
		} else {
			
			HomeDetailsModulesServers* obj = static_cast<HomeDetailsModulesServers*> (&servers);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *quickserversKey = "quickservers";
	node = json_object_get_member(pJsonObject, quickserversKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeDetailsModulesQuickservers")) {
			jsonToValue(&quickservers, node, "HomeDetailsModulesQuickservers", "HomeDetailsModulesQuickservers");
		} else {
			
			HomeDetailsModulesQuickservers* obj = static_cast<HomeDetailsModulesQuickservers*> (&quickservers);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Home_details_modules::Home_details_modules(char* json)
{
	this->fromJson(json);
}

char*
Home_details_modules::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("HomeDetailsModulesDomains")) {
		HomeDetailsModulesDomains obj = getDomains();
		node = converttoJson(&obj, "HomeDetailsModulesDomains", "");
	}
	else {
		
		HomeDetailsModulesDomains obj = static_cast<HomeDetailsModulesDomains> (getDomains());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *domainsKey = "domains";
	json_object_set_member(pJsonObject, domainsKey, node);
	if (isprimitive("HomeDetailsModulesWebhosting")) {
		HomeDetailsModulesWebhosting obj = getWebhosting();
		node = converttoJson(&obj, "HomeDetailsModulesWebhosting", "");
	}
	else {
		
		HomeDetailsModulesWebhosting obj = static_cast<HomeDetailsModulesWebhosting> (getWebhosting());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *webhostingKey = "webhosting";
	json_object_set_member(pJsonObject, webhostingKey, node);
	if (isprimitive("HomeDetailsModulesVps")) {
		HomeDetailsModulesVps obj = getVps();
		node = converttoJson(&obj, "HomeDetailsModulesVps", "");
	}
	else {
		
		HomeDetailsModulesVps obj = static_cast<HomeDetailsModulesVps> (getVps());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsKey = "vps";
	json_object_set_member(pJsonObject, vpsKey, node);
	if (isprimitive("HomeDetailsModulesLicenses")) {
		HomeDetailsModulesLicenses obj = getLicenses();
		node = converttoJson(&obj, "HomeDetailsModulesLicenses", "");
	}
	else {
		
		HomeDetailsModulesLicenses obj = static_cast<HomeDetailsModulesLicenses> (getLicenses());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *licensesKey = "licenses";
	json_object_set_member(pJsonObject, licensesKey, node);
	if (isprimitive("HomeDetailsModulesBackups")) {
		HomeDetailsModulesBackups obj = getBackups();
		node = converttoJson(&obj, "HomeDetailsModulesBackups", "");
	}
	else {
		
		HomeDetailsModulesBackups obj = static_cast<HomeDetailsModulesBackups> (getBackups());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *backupsKey = "backups";
	json_object_set_member(pJsonObject, backupsKey, node);
	if (isprimitive("HomeDetailsModulesServers")) {
		HomeDetailsModulesServers obj = getServers();
		node = converttoJson(&obj, "HomeDetailsModulesServers", "");
	}
	else {
		
		HomeDetailsModulesServers obj = static_cast<HomeDetailsModulesServers> (getServers());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serversKey = "servers";
	json_object_set_member(pJsonObject, serversKey, node);
	if (isprimitive("HomeDetailsModulesQuickservers")) {
		HomeDetailsModulesQuickservers obj = getQuickservers();
		node = converttoJson(&obj, "HomeDetailsModulesQuickservers", "");
	}
	else {
		
		HomeDetailsModulesQuickservers obj = static_cast<HomeDetailsModulesQuickservers> (getQuickservers());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *quickserversKey = "quickservers";
	json_object_set_member(pJsonObject, quickserversKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

HomeDetailsModulesDomains
Home_details_modules::getDomains()
{
	return domains;
}

void
Home_details_modules::setDomains(HomeDetailsModulesDomains  domains)
{
	this->domains = domains;
}

HomeDetailsModulesWebhosting
Home_details_modules::getWebhosting()
{
	return webhosting;
}

void
Home_details_modules::setWebhosting(HomeDetailsModulesWebhosting  webhosting)
{
	this->webhosting = webhosting;
}

HomeDetailsModulesVps
Home_details_modules::getVps()
{
	return vps;
}

void
Home_details_modules::setVps(HomeDetailsModulesVps  vps)
{
	this->vps = vps;
}

HomeDetailsModulesLicenses
Home_details_modules::getLicenses()
{
	return licenses;
}

void
Home_details_modules::setLicenses(HomeDetailsModulesLicenses  licenses)
{
	this->licenses = licenses;
}

HomeDetailsModulesBackups
Home_details_modules::getBackups()
{
	return backups;
}

void
Home_details_modules::setBackups(HomeDetailsModulesBackups  backups)
{
	this->backups = backups;
}

HomeDetailsModulesServers
Home_details_modules::getServers()
{
	return servers;
}

void
Home_details_modules::setServers(HomeDetailsModulesServers  servers)
{
	this->servers = servers;
}

HomeDetailsModulesQuickservers
Home_details_modules::getQuickservers()
{
	return quickservers;
}

void
Home_details_modules::setQuickservers(HomeDetailsModulesQuickservers  quickservers)
{
	this->quickservers = quickservers;
}


