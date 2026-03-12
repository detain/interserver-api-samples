#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_services.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_services::Home_services()
{
	//__init();
}

Home_services::~Home_services()
{
	//__cleanup();
}

void
Home_services::__init()
{
	//domains = new Home_services_domains();
	//webhosting = new Home_services_webhosting();
	//vps = new Home_services_vps();
	//licenses = new Home_services_licenses();
	//servers = new Home_services_servers();
	//backups = new Home_services_backups();
}

void
Home_services::__cleanup()
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
	//if(servers != NULL) {
	//
	//delete servers;
	//servers = NULL;
	//}
	//if(backups != NULL) {
	//
	//delete backups;
	//backups = NULL;
	//}
	//
}

void
Home_services::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *domainsKey = "domains";
	node = json_object_get_member(pJsonObject, domainsKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_services_domains")) {
			jsonToValue(&domains, node, "Home_services_domains", "Home_services_domains");
		} else {
			
			Home_services_domains* obj = static_cast<Home_services_domains*> (&domains);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *webhostingKey = "webhosting";
	node = json_object_get_member(pJsonObject, webhostingKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_services_webhosting")) {
			jsonToValue(&webhosting, node, "Home_services_webhosting", "Home_services_webhosting");
		} else {
			
			Home_services_webhosting* obj = static_cast<Home_services_webhosting*> (&webhosting);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsKey = "vps";
	node = json_object_get_member(pJsonObject, vpsKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_services_vps")) {
			jsonToValue(&vps, node, "Home_services_vps", "Home_services_vps");
		} else {
			
			Home_services_vps* obj = static_cast<Home_services_vps*> (&vps);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *licensesKey = "licenses";
	node = json_object_get_member(pJsonObject, licensesKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_services_licenses")) {
			jsonToValue(&licenses, node, "Home_services_licenses", "Home_services_licenses");
		} else {
			
			Home_services_licenses* obj = static_cast<Home_services_licenses*> (&licenses);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serversKey = "servers";
	node = json_object_get_member(pJsonObject, serversKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_services_servers")) {
			jsonToValue(&servers, node, "Home_services_servers", "Home_services_servers");
		} else {
			
			Home_services_servers* obj = static_cast<Home_services_servers*> (&servers);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *backupsKey = "backups";
	node = json_object_get_member(pJsonObject, backupsKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_services_backups")) {
			jsonToValue(&backups, node, "Home_services_backups", "Home_services_backups");
		} else {
			
			Home_services_backups* obj = static_cast<Home_services_backups*> (&backups);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Home_services::Home_services(char* json)
{
	this->fromJson(json);
}

char*
Home_services::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Home_services_domains")) {
		Home_services_domains obj = getDomains();
		node = converttoJson(&obj, "Home_services_domains", "");
	}
	else {
		
		Home_services_domains obj = static_cast<Home_services_domains> (getDomains());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *domainsKey = "domains";
	json_object_set_member(pJsonObject, domainsKey, node);
	if (isprimitive("Home_services_webhosting")) {
		Home_services_webhosting obj = getWebhosting();
		node = converttoJson(&obj, "Home_services_webhosting", "");
	}
	else {
		
		Home_services_webhosting obj = static_cast<Home_services_webhosting> (getWebhosting());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *webhostingKey = "webhosting";
	json_object_set_member(pJsonObject, webhostingKey, node);
	if (isprimitive("Home_services_vps")) {
		Home_services_vps obj = getVps();
		node = converttoJson(&obj, "Home_services_vps", "");
	}
	else {
		
		Home_services_vps obj = static_cast<Home_services_vps> (getVps());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsKey = "vps";
	json_object_set_member(pJsonObject, vpsKey, node);
	if (isprimitive("Home_services_licenses")) {
		Home_services_licenses obj = getLicenses();
		node = converttoJson(&obj, "Home_services_licenses", "");
	}
	else {
		
		Home_services_licenses obj = static_cast<Home_services_licenses> (getLicenses());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *licensesKey = "licenses";
	json_object_set_member(pJsonObject, licensesKey, node);
	if (isprimitive("Home_services_servers")) {
		Home_services_servers obj = getServers();
		node = converttoJson(&obj, "Home_services_servers", "");
	}
	else {
		
		Home_services_servers obj = static_cast<Home_services_servers> (getServers());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serversKey = "servers";
	json_object_set_member(pJsonObject, serversKey, node);
	if (isprimitive("Home_services_backups")) {
		Home_services_backups obj = getBackups();
		node = converttoJson(&obj, "Home_services_backups", "");
	}
	else {
		
		Home_services_backups obj = static_cast<Home_services_backups> (getBackups());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *backupsKey = "backups";
	json_object_set_member(pJsonObject, backupsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Home_services_domains
Home_services::getDomains()
{
	return domains;
}

void
Home_services::setDomains(Home_services_domains  domains)
{
	this->domains = domains;
}

Home_services_webhosting
Home_services::getWebhosting()
{
	return webhosting;
}

void
Home_services::setWebhosting(Home_services_webhosting  webhosting)
{
	this->webhosting = webhosting;
}

Home_services_vps
Home_services::getVps()
{
	return vps;
}

void
Home_services::setVps(Home_services_vps  vps)
{
	this->vps = vps;
}

Home_services_licenses
Home_services::getLicenses()
{
	return licenses;
}

void
Home_services::setLicenses(Home_services_licenses  licenses)
{
	this->licenses = licenses;
}

Home_services_servers
Home_services::getServers()
{
	return servers;
}

void
Home_services::setServers(Home_services_servers  servers)
{
	this->servers = servers;
}

Home_services_backups
Home_services::getBackups()
{
	return backups;
}

void
Home_services::setBackups(Home_services_backups  backups)
{
	this->backups = backups;
}


