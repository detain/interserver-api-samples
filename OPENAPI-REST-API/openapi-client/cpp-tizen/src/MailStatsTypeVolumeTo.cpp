#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailStatsType_volume_to.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailStatsType_volume_to::MailStatsType_volume_to()
{
	//__init();
}

MailStatsType_volume_to::~MailStatsType_volume_to()
{
	//__cleanup();
}

void
MailStatsType_volume_to::__init()
{
	//clientdomaincom = int(0);
	//usersitenet = int(0);
	//salescompanycom = int(0);
	//clientanothersitecom = int(0);
}

void
MailStatsType_volume_to::__cleanup()
{
	//if(clientdomaincom != NULL) {
	//
	//delete clientdomaincom;
	//clientdomaincom = NULL;
	//}
	//if(usersitenet != NULL) {
	//
	//delete usersitenet;
	//usersitenet = NULL;
	//}
	//if(salescompanycom != NULL) {
	//
	//delete salescompanycom;
	//salescompanycom = NULL;
	//}
	//if(clientanothersitecom != NULL) {
	//
	//delete clientanothersitecom;
	//clientanothersitecom = NULL;
	//}
	//
}

void
MailStatsType_volume_to::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *clientdomaincomKey = "client@domain.com";
	node = json_object_get_member(pJsonObject, clientdomaincomKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&clientdomaincom, node, "int", "");
		} else {
			
		}
	}
	const gchar *usersitenetKey = "user@site.net";
	node = json_object_get_member(pJsonObject, usersitenetKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&usersitenet, node, "int", "");
		} else {
			
		}
	}
	const gchar *salescompanycomKey = "sales@company.com";
	node = json_object_get_member(pJsonObject, salescompanycomKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&salescompanycom, node, "int", "");
		} else {
			
		}
	}
	const gchar *clientanothersitecomKey = "client@anothersite.com";
	node = json_object_get_member(pJsonObject, clientanothersitecomKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&clientanothersitecom, node, "int", "");
		} else {
			
		}
	}
}

MailStatsType_volume_to::MailStatsType_volume_to(char* json)
{
	this->fromJson(json);
}

char*
MailStatsType_volume_to::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getClientdomaincom();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *clientdomaincomKey = "client@domain.com";
	json_object_set_member(pJsonObject, clientdomaincomKey, node);
	if (isprimitive("int")) {
		int obj = getUsersitenet();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *usersitenetKey = "user@site.net";
	json_object_set_member(pJsonObject, usersitenetKey, node);
	if (isprimitive("int")) {
		int obj = getSalescompanycom();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *salescompanycomKey = "sales@company.com";
	json_object_set_member(pJsonObject, salescompanycomKey, node);
	if (isprimitive("int")) {
		int obj = getClientanothersitecom();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *clientanothersitecomKey = "client@anothersite.com";
	json_object_set_member(pJsonObject, clientanothersitecomKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MailStatsType_volume_to::getClientdomaincom()
{
	return clientdomaincom;
}

void
MailStatsType_volume_to::setClientdomaincom(int  clientdomaincom)
{
	this->clientdomaincom = clientdomaincom;
}

int
MailStatsType_volume_to::getUsersitenet()
{
	return usersitenet;
}

void
MailStatsType_volume_to::setUsersitenet(int  usersitenet)
{
	this->usersitenet = usersitenet;
}

int
MailStatsType_volume_to::getSalescompanycom()
{
	return salescompanycom;
}

void
MailStatsType_volume_to::setSalescompanycom(int  salescompanycom)
{
	this->salescompanycom = salescompanycom;
}

int
MailStatsType_volume_to::getClientanothersitecom()
{
	return clientanothersitecom;
}

void
MailStatsType_volume_to::setClientanothersitecom(int  clientanothersitecom)
{
	this->clientanothersitecom = clientanothersitecom;
}


