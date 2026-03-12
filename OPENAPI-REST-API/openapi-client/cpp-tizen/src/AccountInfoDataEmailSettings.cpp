#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoData_email_settings.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoData_email_settings::AccountInfoData_email_settings()
{
	//__init();
}

AccountInfoData_email_settings::~AccountInfoData_email_settings()
{
	//__cleanup();
}

void
AccountInfoData_email_settings::__init()
{
	//admincc_bad_response = std::string();
	//adminmass_communicationstpl = std::string();
}

void
AccountInfoData_email_settings::__cleanup()
{
	//if(admincc_bad_response != NULL) {
	//
	//delete admincc_bad_response;
	//admincc_bad_response = NULL;
	//}
	//if(adminmass_communicationstpl != NULL) {
	//
	//delete adminmass_communicationstpl;
	//adminmass_communicationstpl = NULL;
	//}
	//
}

void
AccountInfoData_email_settings::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *admincc_bad_responseKey = "admin/cc_bad_response";
	node = json_object_get_member(pJsonObject, admincc_bad_responseKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&admincc_bad_response, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *adminmass_communicationstplKey = "admin/mass_communications.tpl";
	node = json_object_get_member(pJsonObject, adminmass_communicationstplKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&adminmass_communicationstpl, node, "std::string", "");
		} else {
			
		}
	}
}

AccountInfoData_email_settings::AccountInfoData_email_settings(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoData_email_settings::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAdminccBadResponse();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *admincc_bad_responseKey = "admin/cc_bad_response";
	json_object_set_member(pJsonObject, admincc_bad_responseKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAdminmassCommunicationstpl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *adminmass_communicationstplKey = "admin/mass_communications.tpl";
	json_object_set_member(pJsonObject, adminmass_communicationstplKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountInfoData_email_settings::getAdminccBadResponse()
{
	return admincc_bad_response;
}

void
AccountInfoData_email_settings::setAdminccBadResponse(std::string  admincc_bad_response)
{
	this->admincc_bad_response = admincc_bad_response;
}

std::string
AccountInfoData_email_settings::getAdminmassCommunicationstpl()
{
	return adminmass_communicationstpl;
}

void
AccountInfoData_email_settings::setAdminmassCommunicationstpl(std::string  adminmass_communicationstpl)
{
	this->adminmass_communicationstpl = adminmass_communicationstpl;
}


