#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrder.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrder::QuickserverOrder()
{
	//__init();
}

QuickserverOrder::~QuickserverOrder()
{
	//__cleanup();
}

void
QuickserverOrder::__init()
{
	//qs_id = std::string();
	//server_details = new QuickserverOrder_server_details();
	//templates = new QuickserverOrder_templates();
	//version = new QuickserverOrder_version();
	//distro_sel = new QuickserverOrder_distro_sel();
}

void
QuickserverOrder::__cleanup()
{
	//if(qs_id != NULL) {
	//
	//delete qs_id;
	//qs_id = NULL;
	//}
	//if(server_details != NULL) {
	//
	//delete server_details;
	//server_details = NULL;
	//}
	//if(templates != NULL) {
	//
	//delete templates;
	//templates = NULL;
	//}
	//if(version != NULL) {
	//
	//delete version;
	//version = NULL;
	//}
	//if(distro_sel != NULL) {
	//
	//delete distro_sel;
	//distro_sel = NULL;
	//}
	//
}

void
QuickserverOrder::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *qs_idKey = "qs_id";
	node = json_object_get_member(pJsonObject, qs_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_detailsKey = "server_details";
	node = json_object_get_member(pJsonObject, server_detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverOrder_server_details")) {
			jsonToValue(&server_details, node, "QuickserverOrder_server_details", "QuickserverOrder_server_details");
		} else {
			
			QuickserverOrder_server_details* obj = static_cast<QuickserverOrder_server_details*> (&server_details);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *templatesKey = "templates";
	node = json_object_get_member(pJsonObject, templatesKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverOrder_templates")) {
			jsonToValue(&templates, node, "QuickserverOrder_templates", "QuickserverOrder_templates");
		} else {
			
			QuickserverOrder_templates* obj = static_cast<QuickserverOrder_templates*> (&templates);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *versionKey = "version";
	node = json_object_get_member(pJsonObject, versionKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverOrder_version")) {
			jsonToValue(&version, node, "QuickserverOrder_version", "QuickserverOrder_version");
		} else {
			
			QuickserverOrder_version* obj = static_cast<QuickserverOrder_version*> (&version);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *distro_selKey = "distro_sel";
	node = json_object_get_member(pJsonObject, distro_selKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverOrder_distro_sel")) {
			jsonToValue(&distro_sel, node, "QuickserverOrder_distro_sel", "QuickserverOrder_distro_sel");
		} else {
			
			QuickserverOrder_distro_sel* obj = static_cast<QuickserverOrder_distro_sel*> (&distro_sel);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

QuickserverOrder::QuickserverOrder(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrder::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getQsId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_idKey = "qs_id";
	json_object_set_member(pJsonObject, qs_idKey, node);
	if (isprimitive("QuickserverOrder_server_details")) {
		QuickserverOrder_server_details obj = getServerDetails();
		node = converttoJson(&obj, "QuickserverOrder_server_details", "");
	}
	else {
		
		QuickserverOrder_server_details obj = static_cast<QuickserverOrder_server_details> (getServerDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *server_detailsKey = "server_details";
	json_object_set_member(pJsonObject, server_detailsKey, node);
	if (isprimitive("QuickserverOrder_templates")) {
		QuickserverOrder_templates obj = getTemplates();
		node = converttoJson(&obj, "QuickserverOrder_templates", "");
	}
	else {
		
		QuickserverOrder_templates obj = static_cast<QuickserverOrder_templates> (getTemplates());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *templatesKey = "templates";
	json_object_set_member(pJsonObject, templatesKey, node);
	if (isprimitive("QuickserverOrder_version")) {
		QuickserverOrder_version obj = getVersion();
		node = converttoJson(&obj, "QuickserverOrder_version", "");
	}
	else {
		
		QuickserverOrder_version obj = static_cast<QuickserverOrder_version> (getVersion());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *versionKey = "version";
	json_object_set_member(pJsonObject, versionKey, node);
	if (isprimitive("QuickserverOrder_distro_sel")) {
		QuickserverOrder_distro_sel obj = getDistroSel();
		node = converttoJson(&obj, "QuickserverOrder_distro_sel", "");
	}
	else {
		
		QuickserverOrder_distro_sel obj = static_cast<QuickserverOrder_distro_sel> (getDistroSel());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *distro_selKey = "distro_sel";
	json_object_set_member(pJsonObject, distro_selKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
QuickserverOrder::getQsId()
{
	return qs_id;
}

void
QuickserverOrder::setQsId(std::string  qs_id)
{
	this->qs_id = qs_id;
}

QuickserverOrder_server_details
QuickserverOrder::getServerDetails()
{
	return server_details;
}

void
QuickserverOrder::setServerDetails(QuickserverOrder_server_details  server_details)
{
	this->server_details = server_details;
}

QuickserverOrder_templates
QuickserverOrder::getTemplates()
{
	return templates;
}

void
QuickserverOrder::setTemplates(QuickserverOrder_templates  templates)
{
	this->templates = templates;
}

QuickserverOrder_version
QuickserverOrder::getVersion()
{
	return version;
}

void
QuickserverOrder::setVersion(QuickserverOrder_version  version)
{
	this->version = version;
}

QuickserverOrder_distro_sel
QuickserverOrder::getDistroSel()
{
	return distro_sel;
}

void
QuickserverOrder::setDistroSel(QuickserverOrder_distro_sel  distro_sel)
{
	this->distro_sel = distro_sel;
}


