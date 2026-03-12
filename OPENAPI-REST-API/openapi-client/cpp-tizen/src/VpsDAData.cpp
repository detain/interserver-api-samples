#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsDAData.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsDAData::VpsDAData()
{
	//__init();
}

VpsDAData::~VpsDAData()
{
	//__cleanup();
}

void
VpsDAData::__init()
{
	//free = new VpsDALicense();
}

void
VpsDAData::__cleanup()
{
	//if(free != NULL) {
	//
	//delete free;
	//free = NULL;
	//}
	//
}

void
VpsDAData::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *freeKey = "free";
	node = json_object_get_member(pJsonObject, freeKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsDALicense")) {
			jsonToValue(&free, node, "VpsDALicense", "VpsDALicense");
		} else {
			
			VpsDALicense* obj = static_cast<VpsDALicense*> (&free);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsDAData::VpsDAData(char* json)
{
	this->fromJson(json);
}

char*
VpsDAData::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsDALicense")) {
		VpsDALicense obj = getFree();
		node = converttoJson(&obj, "VpsDALicense", "");
	}
	else {
		
		VpsDALicense obj = static_cast<VpsDALicense> (getFree());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *freeKey = "free";
	json_object_set_member(pJsonObject, freeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsDALicense
VpsDAData::getFree()
{
	return free;
}

void
VpsDAData::setFree(VpsDALicense  free)
{
	this->free = free;
}


