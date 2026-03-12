#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DownloadQsBackup_request.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DownloadQsBackup_request::DownloadQsBackup_request()
{
	//__init();
}

DownloadQsBackup_request::~DownloadQsBackup_request()
{
	//__cleanup();
}

void
DownloadQsBackup_request::__init()
{
	//file = std::string();
}

void
DownloadQsBackup_request::__cleanup()
{
	//if(file != NULL) {
	//
	//delete file;
	//file = NULL;
	//}
	//
}

void
DownloadQsBackup_request::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *fileKey = "file";
	node = json_object_get_member(pJsonObject, fileKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&file, node, "std::string", "");
		} else {
			
		}
	}
}

DownloadQsBackup_request::DownloadQsBackup_request(char* json)
{
	this->fromJson(json);
}

char*
DownloadQsBackup_request::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getFile();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fileKey = "file";
	json_object_set_member(pJsonObject, fileKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DownloadQsBackup_request::getFile()
{
	return file;
}

void
DownloadQsBackup_request::setFile(std::string  file)
{
	this->file = file;
}


