#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DownloadQsBackup_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DownloadQsBackup_200_response::DownloadQsBackup_200_response()
{
	//__init();
}

DownloadQsBackup_200_response::~DownloadQsBackup_200_response()
{
	//__cleanup();
}

void
DownloadQsBackup_200_response::__init()
{
	//text = std::string();
	//url = std::string();
}

void
DownloadQsBackup_200_response::__cleanup()
{
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(url != NULL) {
	//
	//delete url;
	//url = NULL;
	//}
	//
}

void
DownloadQsBackup_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *urlKey = "url";
	node = json_object_get_member(pJsonObject, urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&url, node, "std::string", "");
		} else {
			
		}
	}
}

DownloadQsBackup_200_response::DownloadQsBackup_200_response(char* json)
{
	this->fromJson(json);
}

char*
DownloadQsBackup_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *urlKey = "url";
	json_object_set_member(pJsonObject, urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DownloadQsBackup_200_response::getText()
{
	return text;
}

void
DownloadQsBackup_200_response::setText(std::string  text)
{
	this->text = text;
}

std::string
DownloadQsBackup_200_response::getUrl()
{
	return url;
}

void
DownloadQsBackup_200_response::setUrl(std::string  url)
{
	this->url = url;
}


