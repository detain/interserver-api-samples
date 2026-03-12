#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TicketPostDetails_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TicketPostDetails_inner::TicketPostDetails_inner()
{
	//__init();
}

TicketPostDetails_inner::~TicketPostDetails_inner()
{
	//__cleanup();
}

void
TicketPostDetails_inner::__init()
{
	//post_id = int(0);
	//date = std::string();
	//contents = std::string();
	//creator = std::string();
	//creator_email = std::string();
	//creator_name = std::string();
	//hasattachments = int(0);
	//attachment_download = std::string();
}

void
TicketPostDetails_inner::__cleanup()
{
	//if(post_id != NULL) {
	//
	//delete post_id;
	//post_id = NULL;
	//}
	//if(date != NULL) {
	//
	//delete date;
	//date = NULL;
	//}
	//if(contents != NULL) {
	//
	//delete contents;
	//contents = NULL;
	//}
	//if(creator != NULL) {
	//
	//delete creator;
	//creator = NULL;
	//}
	//if(creator_email != NULL) {
	//
	//delete creator_email;
	//creator_email = NULL;
	//}
	//if(creator_name != NULL) {
	//
	//delete creator_name;
	//creator_name = NULL;
	//}
	//if(hasattachments != NULL) {
	//
	//delete hasattachments;
	//hasattachments = NULL;
	//}
	//if(attachment_download != NULL) {
	//
	//delete attachment_download;
	//attachment_download = NULL;
	//}
	//
}

void
TicketPostDetails_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *post_idKey = "post_id";
	node = json_object_get_member(pJsonObject, post_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&post_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *dateKey = "date";
	node = json_object_get_member(pJsonObject, dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *contentsKey = "contents";
	node = json_object_get_member(pJsonObject, contentsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&contents, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *creatorKey = "creator";
	node = json_object_get_member(pJsonObject, creatorKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&creator, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *creator_emailKey = "creator_email";
	node = json_object_get_member(pJsonObject, creator_emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&creator_email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *creator_nameKey = "creator_name";
	node = json_object_get_member(pJsonObject, creator_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&creator_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hasattachmentsKey = "hasattachments";
	node = json_object_get_member(pJsonObject, hasattachmentsKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&hasattachments, node, "int", "");
		} else {
			
		}
	}
	const gchar *attachment_downloadKey = "attachment_download";
	node = json_object_get_member(pJsonObject, attachment_downloadKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&attachment_download, node, "std::string", "");
		} else {
			
		}
	}
}

TicketPostDetails_inner::TicketPostDetails_inner(char* json)
{
	this->fromJson(json);
}

char*
TicketPostDetails_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getPostId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *post_idKey = "post_id";
	json_object_set_member(pJsonObject, post_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getContents();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contentsKey = "contents";
	json_object_set_member(pJsonObject, contentsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreator();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *creatorKey = "creator";
	json_object_set_member(pJsonObject, creatorKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreatorEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *creator_emailKey = "creator_email";
	json_object_set_member(pJsonObject, creator_emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreatorName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *creator_nameKey = "creator_name";
	json_object_set_member(pJsonObject, creator_nameKey, node);
	if (isprimitive("int")) {
		int obj = getHasattachments();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *hasattachmentsKey = "hasattachments";
	json_object_set_member(pJsonObject, hasattachmentsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAttachmentDownload();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *attachment_downloadKey = "attachment_download";
	json_object_set_member(pJsonObject, attachment_downloadKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
TicketPostDetails_inner::getPostId()
{
	return post_id;
}

void
TicketPostDetails_inner::setPostId(int  post_id)
{
	this->post_id = post_id;
}

std::string
TicketPostDetails_inner::getDate()
{
	return date;
}

void
TicketPostDetails_inner::setDate(std::string  date)
{
	this->date = date;
}

std::string
TicketPostDetails_inner::getContents()
{
	return contents;
}

void
TicketPostDetails_inner::setContents(std::string  contents)
{
	this->contents = contents;
}

std::string
TicketPostDetails_inner::getCreator()
{
	return creator;
}

void
TicketPostDetails_inner::setCreator(std::string  creator)
{
	this->creator = creator;
}

std::string
TicketPostDetails_inner::getCreatorEmail()
{
	return creator_email;
}

void
TicketPostDetails_inner::setCreatorEmail(std::string  creator_email)
{
	this->creator_email = creator_email;
}

std::string
TicketPostDetails_inner::getCreatorName()
{
	return creator_name;
}

void
TicketPostDetails_inner::setCreatorName(std::string  creator_name)
{
	this->creator_name = creator_name;
}

int
TicketPostDetails_inner::getHasattachments()
{
	return hasattachments;
}

void
TicketPostDetails_inner::setHasattachments(int  hasattachments)
{
	this->hasattachments = hasattachments;
}

std::string
TicketPostDetails_inner::getAttachmentDownload()
{
	return attachment_download;
}

void
TicketPostDetails_inner::setAttachmentDownload(std::string  attachment_download)
{
	this->attachment_download = attachment_download;
}


