#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailStatsType_volume_from.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailStatsType_volume_from::MailStatsType_volume_from()
{
	//__init();
}

MailStatsType_volume_from::~MailStatsType_volume_from()
{
	//__cleanup();
}

void
MailStatsType_volume_from::__init()
{
	//billingsomedomaincom = int(0);
	//salessomedomaincom = int(0);
}

void
MailStatsType_volume_from::__cleanup()
{
	//if(billingsomedomaincom != NULL) {
	//
	//delete billingsomedomaincom;
	//billingsomedomaincom = NULL;
	//}
	//if(salessomedomaincom != NULL) {
	//
	//delete salessomedomaincom;
	//salessomedomaincom = NULL;
	//}
	//
}

void
MailStatsType_volume_from::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *billingsomedomaincomKey = "billing@somedomain.com";
	node = json_object_get_member(pJsonObject, billingsomedomaincomKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&billingsomedomaincom, node, "int", "");
		} else {
			
		}
	}
	const gchar *salessomedomaincomKey = "sales@somedomain.com";
	node = json_object_get_member(pJsonObject, salessomedomaincomKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&salessomedomaincom, node, "int", "");
		} else {
			
		}
	}
}

MailStatsType_volume_from::MailStatsType_volume_from(char* json)
{
	this->fromJson(json);
}

char*
MailStatsType_volume_from::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getBillingsomedomaincom();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *billingsomedomaincomKey = "billing@somedomain.com";
	json_object_set_member(pJsonObject, billingsomedomaincomKey, node);
	if (isprimitive("int")) {
		int obj = getSalessomedomaincom();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *salessomedomaincomKey = "sales@somedomain.com";
	json_object_set_member(pJsonObject, salessomedomaincomKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MailStatsType_volume_from::getBillingsomedomaincom()
{
	return billingsomedomaincom;
}

void
MailStatsType_volume_from::setBillingsomedomaincom(int  billingsomedomaincom)
{
	this->billingsomedomaincom = billingsomedomaincom;
}

int
MailStatsType_volume_from::getSalessomedomaincom()
{
	return salessomedomaincom;
}

void
MailStatsType_volume_from::setSalessomedomaincom(int  salessomedomaincom)
{
	this->salessomedomaincom = salessomedomaincom;
}


