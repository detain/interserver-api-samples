#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreateGeoFirewallRule.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreateGeoFirewallRule::CreateGeoFirewallRule()
{
	//__init();
}

CreateGeoFirewallRule::~CreateGeoFirewallRule()
{
	//__cleanup();
}

void
CreateGeoFirewallRule::__init()
{
	//xdp_action = int(0);
	//destination_port = int(0);
	//country_code = int(0);
	//asn = int(0);
}

void
CreateGeoFirewallRule::__cleanup()
{
	//if(xdp_action != NULL) {
	//
	//delete xdp_action;
	//xdp_action = NULL;
	//}
	//if(destination_port != NULL) {
	//
	//delete destination_port;
	//destination_port = NULL;
	//}
	//if(country_code != NULL) {
	//
	//delete country_code;
	//country_code = NULL;
	//}
	//if(asn != NULL) {
	//
	//delete asn;
	//asn = NULL;
	//}
	//
}

void
CreateGeoFirewallRule::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *xdp_actionKey = "xdp_action";
	node = json_object_get_member(pJsonObject, xdp_actionKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&xdp_action, node, "int", "");
		} else {
			
		}
	}
	const gchar *destination_portKey = "destination_port";
	node = json_object_get_member(pJsonObject, destination_portKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&destination_port, node, "int", "");
		} else {
			
		}
	}
	const gchar *country_codeKey = "country_code";
	node = json_object_get_member(pJsonObject, country_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&country_code, node, "int", "");
		} else {
			
		}
	}
	const gchar *asnKey = "asn";
	node = json_object_get_member(pJsonObject, asnKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&asn, node, "int", "");
		} else {
			
		}
	}
}

CreateGeoFirewallRule::CreateGeoFirewallRule(char* json)
{
	this->fromJson(json);
}

char*
CreateGeoFirewallRule::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getXdpAction();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *xdp_actionKey = "xdp_action";
	json_object_set_member(pJsonObject, xdp_actionKey, node);
	if (isprimitive("int")) {
		int obj = getDestinationPort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *destination_portKey = "destination_port";
	json_object_set_member(pJsonObject, destination_portKey, node);
	if (isprimitive("int")) {
		int obj = getCountryCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *country_codeKey = "country_code";
	json_object_set_member(pJsonObject, country_codeKey, node);
	if (isprimitive("int")) {
		int obj = getAsn();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *asnKey = "asn";
	json_object_set_member(pJsonObject, asnKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
CreateGeoFirewallRule::getXdpAction()
{
	return xdp_action;
}

void
CreateGeoFirewallRule::setXdpAction(int  xdp_action)
{
	this->xdp_action = xdp_action;
}

int
CreateGeoFirewallRule::getDestinationPort()
{
	return destination_port;
}

void
CreateGeoFirewallRule::setDestinationPort(int  destination_port)
{
	this->destination_port = destination_port;
}

int
CreateGeoFirewallRule::getCountryCode()
{
	return country_code;
}

void
CreateGeoFirewallRule::setCountryCode(int  country_code)
{
	this->country_code = country_code;
}

int
CreateGeoFirewallRule::getAsn()
{
	return asn;
}

void
CreateGeoFirewallRule::setAsn(int  asn)
{
	this->asn = asn;
}


