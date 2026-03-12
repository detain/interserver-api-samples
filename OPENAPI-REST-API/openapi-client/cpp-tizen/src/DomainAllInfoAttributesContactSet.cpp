#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainAllInfo_attributes_contact_set.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainAllInfo_attributes_contact_set::DomainAllInfo_attributes_contact_set()
{
	//__init();
}

DomainAllInfo_attributes_contact_set::~DomainAllInfo_attributes_contact_set()
{
	//__cleanup();
}

void
DomainAllInfo_attributes_contact_set::__init()
{
	//owner = new DomainOwnerContact();
	//admin = new DomainAdminContact();
	//tech = new DomainTechContact();
}

void
DomainAllInfo_attributes_contact_set::__cleanup()
{
	//if(owner != NULL) {
	//
	//delete owner;
	//owner = NULL;
	//}
	//if(admin != NULL) {
	//
	//delete admin;
	//admin = NULL;
	//}
	//if(tech != NULL) {
	//
	//delete tech;
	//tech = NULL;
	//}
	//
}

void
DomainAllInfo_attributes_contact_set::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ownerKey = "owner";
	node = json_object_get_member(pJsonObject, ownerKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainOwnerContact")) {
			jsonToValue(&owner, node, "DomainOwnerContact", "DomainOwnerContact");
		} else {
			
			DomainOwnerContact* obj = static_cast<DomainOwnerContact*> (&owner);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *adminKey = "admin";
	node = json_object_get_member(pJsonObject, adminKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainAdminContact")) {
			jsonToValue(&admin, node, "DomainAdminContact", "DomainAdminContact");
		} else {
			
			DomainAdminContact* obj = static_cast<DomainAdminContact*> (&admin);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *techKey = "tech";
	node = json_object_get_member(pJsonObject, techKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainTechContact")) {
			jsonToValue(&tech, node, "DomainTechContact", "DomainTechContact");
		} else {
			
			DomainTechContact* obj = static_cast<DomainTechContact*> (&tech);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

DomainAllInfo_attributes_contact_set::DomainAllInfo_attributes_contact_set(char* json)
{
	this->fromJson(json);
}

char*
DomainAllInfo_attributes_contact_set::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("DomainOwnerContact")) {
		DomainOwnerContact obj = getOwner();
		node = converttoJson(&obj, "DomainOwnerContact", "");
	}
	else {
		
		DomainOwnerContact obj = static_cast<DomainOwnerContact> (getOwner());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ownerKey = "owner";
	json_object_set_member(pJsonObject, ownerKey, node);
	if (isprimitive("DomainAdminContact")) {
		DomainAdminContact obj = getAdmin();
		node = converttoJson(&obj, "DomainAdminContact", "");
	}
	else {
		
		DomainAdminContact obj = static_cast<DomainAdminContact> (getAdmin());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *adminKey = "admin";
	json_object_set_member(pJsonObject, adminKey, node);
	if (isprimitive("DomainTechContact")) {
		DomainTechContact obj = getTech();
		node = converttoJson(&obj, "DomainTechContact", "");
	}
	else {
		
		DomainTechContact obj = static_cast<DomainTechContact> (getTech());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *techKey = "tech";
	json_object_set_member(pJsonObject, techKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

DomainOwnerContact
DomainAllInfo_attributes_contact_set::getOwner()
{
	return owner;
}

void
DomainAllInfo_attributes_contact_set::setOwner(DomainOwnerContact  owner)
{
	this->owner = owner;
}

DomainAdminContact
DomainAllInfo_attributes_contact_set::getAdmin()
{
	return admin;
}

void
DomainAllInfo_attributes_contact_set::setAdmin(DomainAdminContact  admin)
{
	this->admin = admin;
}

DomainTechContact
DomainAllInfo_attributes_contact_set::getTech()
{
	return tech;
}

void
DomainAllInfo_attributes_contact_set::setTech(DomainTechContact  tech)
{
	this->tech = tech;
}


