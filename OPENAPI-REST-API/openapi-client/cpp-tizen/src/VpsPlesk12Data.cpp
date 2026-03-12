#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsPlesk12Data.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsPlesk12Data::VpsPlesk12Data()
{
	//__init();
}

VpsPlesk12Data::~VpsPlesk12Data()
{
	//__cleanup();
}

void
VpsPlesk12Data::__init()
{
	//admin = new VpsPleskLicense();
	//pro = new VpsPleskLicense();
	//host = new VpsPleskLicense();
}

void
VpsPlesk12Data::__cleanup()
{
	//if(admin != NULL) {
	//
	//delete admin;
	//admin = NULL;
	//}
	//if(pro != NULL) {
	//
	//delete pro;
	//pro = NULL;
	//}
	//if(host != NULL) {
	//
	//delete host;
	//host = NULL;
	//}
	//
}

void
VpsPlesk12Data::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *adminKey = "admin";
	node = json_object_get_member(pJsonObject, adminKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsPleskLicense")) {
			jsonToValue(&admin, node, "VpsPleskLicense", "VpsPleskLicense");
		} else {
			
			VpsPleskLicense* obj = static_cast<VpsPleskLicense*> (&admin);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *proKey = "pro";
	node = json_object_get_member(pJsonObject, proKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsPleskLicense")) {
			jsonToValue(&pro, node, "VpsPleskLicense", "VpsPleskLicense");
		} else {
			
			VpsPleskLicense* obj = static_cast<VpsPleskLicense*> (&pro);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *hostKey = "host";
	node = json_object_get_member(pJsonObject, hostKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsPleskLicense")) {
			jsonToValue(&host, node, "VpsPleskLicense", "VpsPleskLicense");
		} else {
			
			VpsPleskLicense* obj = static_cast<VpsPleskLicense*> (&host);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsPlesk12Data::VpsPlesk12Data(char* json)
{
	this->fromJson(json);
}

char*
VpsPlesk12Data::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsPleskLicense")) {
		VpsPleskLicense obj = getAdmin();
		node = converttoJson(&obj, "VpsPleskLicense", "");
	}
	else {
		
		VpsPleskLicense obj = static_cast<VpsPleskLicense> (getAdmin());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *adminKey = "admin";
	json_object_set_member(pJsonObject, adminKey, node);
	if (isprimitive("VpsPleskLicense")) {
		VpsPleskLicense obj = getPro();
		node = converttoJson(&obj, "VpsPleskLicense", "");
	}
	else {
		
		VpsPleskLicense obj = static_cast<VpsPleskLicense> (getPro());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *proKey = "pro";
	json_object_set_member(pJsonObject, proKey, node);
	if (isprimitive("VpsPleskLicense")) {
		VpsPleskLicense obj = getHost();
		node = converttoJson(&obj, "VpsPleskLicense", "");
	}
	else {
		
		VpsPleskLicense obj = static_cast<VpsPleskLicense> (getHost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *hostKey = "host";
	json_object_set_member(pJsonObject, hostKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsPleskLicense
VpsPlesk12Data::getAdmin()
{
	return admin;
}

void
VpsPlesk12Data::setAdmin(VpsPleskLicense  admin)
{
	this->admin = admin;
}

VpsPleskLicense
VpsPlesk12Data::getPro()
{
	return pro;
}

void
VpsPlesk12Data::setPro(VpsPleskLicense  pro)
{
	this->pro = pro;
}

VpsPleskLicense
VpsPlesk12Data::getHost()
{
	return host;
}

void
VpsPlesk12Data::setHost(VpsPleskLicense  host)
{
	this->host = host;
}


