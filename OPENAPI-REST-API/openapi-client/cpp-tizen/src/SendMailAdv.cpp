#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SendMailAdv.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SendMailAdv::SendMailAdv()
{
	//__init();
}

SendMailAdv::~SendMailAdv()
{
	//__cleanup();
}

void
SendMailAdv::__init()
{
	//subject = std::string();
	//body = std::string();
	//from = new EmailAddressName();
	//new std::list()std::list> to;
	//new std::list()std::list> replyto;
	//new std::list()std::list> cc;
	//new std::list()std::list> bcc;
	//new std::list()std::list> attachments;
	//id = long(0);
}

void
SendMailAdv::__cleanup()
{
	//if(subject != NULL) {
	//
	//delete subject;
	//subject = NULL;
	//}
	//if(body != NULL) {
	//
	//delete body;
	//body = NULL;
	//}
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
	//}
	//if(to != NULL) {
	//to.RemoveAll(true);
	//delete to;
	//to = NULL;
	//}
	//if(replyto != NULL) {
	//replyto.RemoveAll(true);
	//delete replyto;
	//replyto = NULL;
	//}
	//if(cc != NULL) {
	//cc.RemoveAll(true);
	//delete cc;
	//cc = NULL;
	//}
	//if(bcc != NULL) {
	//bcc.RemoveAll(true);
	//delete bcc;
	//bcc = NULL;
	//}
	//if(attachments != NULL) {
	//attachments.RemoveAll(true);
	//delete attachments;
	//attachments = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//
}

void
SendMailAdv::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *subjectKey = "subject";
	node = json_object_get_member(pJsonObject, subjectKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&subject, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bodyKey = "body";
	node = json_object_get_member(pJsonObject, bodyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&body, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fromKey = "from";
	node = json_object_get_member(pJsonObject, fromKey);
	if (node !=NULL) {
	

		if (isprimitive("EmailAddressName")) {
			jsonToValue(&from, node, "EmailAddressName", "EmailAddressName");
		} else {
			
			EmailAddressName* obj = static_cast<EmailAddressName*> (&from);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *toKey = "to";
	node = json_object_get_member(pJsonObject, toKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<EmailAddressName> new_list;
			EmailAddressName inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("EmailAddressName")) {
					jsonToValue(&inst, temp_json, "EmailAddressName", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			to = new_list;
		}
		
	}
	const gchar *replytoKey = "replyto";
	node = json_object_get_member(pJsonObject, replytoKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<EmailAddressName> new_list;
			EmailAddressName inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("EmailAddressName")) {
					jsonToValue(&inst, temp_json, "EmailAddressName", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			replyto = new_list;
		}
		
	}
	const gchar *ccKey = "cc";
	node = json_object_get_member(pJsonObject, ccKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<EmailAddressName> new_list;
			EmailAddressName inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("EmailAddressName")) {
					jsonToValue(&inst, temp_json, "EmailAddressName", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			cc = new_list;
		}
		
	}
	const gchar *bccKey = "bcc";
	node = json_object_get_member(pJsonObject, bccKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<EmailAddressName> new_list;
			EmailAddressName inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("EmailAddressName")) {
					jsonToValue(&inst, temp_json, "EmailAddressName", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			bcc = new_list;
		}
		
	}
	const gchar *attachmentsKey = "attachments";
	node = json_object_get_member(pJsonObject, attachmentsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<MailAttachment> new_list;
			MailAttachment inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("MailAttachment")) {
					jsonToValue(&inst, temp_json, "MailAttachment", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			attachments = new_list;
		}
		
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
}

SendMailAdv::SendMailAdv(char* json)
{
	this->fromJson(json);
}

char*
SendMailAdv::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getSubject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBody();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bodyKey = "body";
	json_object_set_member(pJsonObject, bodyKey, node);
	if (isprimitive("EmailAddressName")) {
		EmailAddressName obj = getFrom();
		node = converttoJson(&obj, "EmailAddressName", "");
	}
	else {
		
		EmailAddressName obj = static_cast<EmailAddressName> (getFrom());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *fromKey = "from";
	json_object_set_member(pJsonObject, fromKey, node);
	if (isprimitive("EmailAddressName")) {
		list<EmailAddressName> new_list = static_cast<list <EmailAddressName> > (getTo());
		node = converttoJson(&new_list, "EmailAddressName", "array");
	} else {
		node = json_node_alloc();
		list<EmailAddressName> new_list = static_cast<list <EmailAddressName> > (getTo());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<EmailAddressName>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			EmailAddressName obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *toKey = "to";
	json_object_set_member(pJsonObject, toKey, node);
	if (isprimitive("EmailAddressName")) {
		list<EmailAddressName> new_list = static_cast<list <EmailAddressName> > (getReplyto());
		node = converttoJson(&new_list, "EmailAddressName", "array");
	} else {
		node = json_node_alloc();
		list<EmailAddressName> new_list = static_cast<list <EmailAddressName> > (getReplyto());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<EmailAddressName>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			EmailAddressName obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *replytoKey = "replyto";
	json_object_set_member(pJsonObject, replytoKey, node);
	if (isprimitive("EmailAddressName")) {
		list<EmailAddressName> new_list = static_cast<list <EmailAddressName> > (getCc());
		node = converttoJson(&new_list, "EmailAddressName", "array");
	} else {
		node = json_node_alloc();
		list<EmailAddressName> new_list = static_cast<list <EmailAddressName> > (getCc());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<EmailAddressName>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			EmailAddressName obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *ccKey = "cc";
	json_object_set_member(pJsonObject, ccKey, node);
	if (isprimitive("EmailAddressName")) {
		list<EmailAddressName> new_list = static_cast<list <EmailAddressName> > (getBcc());
		node = converttoJson(&new_list, "EmailAddressName", "array");
	} else {
		node = json_node_alloc();
		list<EmailAddressName> new_list = static_cast<list <EmailAddressName> > (getBcc());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<EmailAddressName>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			EmailAddressName obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *bccKey = "bcc";
	json_object_set_member(pJsonObject, bccKey, node);
	if (isprimitive("MailAttachment")) {
		list<MailAttachment> new_list = static_cast<list <MailAttachment> > (getAttachments());
		node = converttoJson(&new_list, "MailAttachment", "array");
	} else {
		node = json_node_alloc();
		list<MailAttachment> new_list = static_cast<list <MailAttachment> > (getAttachments());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<MailAttachment>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			MailAttachment obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *attachmentsKey = "attachments";
	json_object_set_member(pJsonObject, attachmentsKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
SendMailAdv::getSubject()
{
	return subject;
}

void
SendMailAdv::setSubject(std::string  subject)
{
	this->subject = subject;
}

std::string
SendMailAdv::getBody()
{
	return body;
}

void
SendMailAdv::setBody(std::string  body)
{
	this->body = body;
}

EmailAddressName
SendMailAdv::getFrom()
{
	return from;
}

void
SendMailAdv::setFrom(EmailAddressName  from)
{
	this->from = from;
}

std::list<EmailAddressName>
SendMailAdv::getTo()
{
	return to;
}

void
SendMailAdv::setTo(std::list <EmailAddressName> to)
{
	this->to = to;
}

std::list<EmailAddressName>
SendMailAdv::getReplyto()
{
	return replyto;
}

void
SendMailAdv::setReplyto(std::list <EmailAddressName> replyto)
{
	this->replyto = replyto;
}

std::list<EmailAddressName>
SendMailAdv::getCc()
{
	return cc;
}

void
SendMailAdv::setCc(std::list <EmailAddressName> cc)
{
	this->cc = cc;
}

std::list<EmailAddressName>
SendMailAdv::getBcc()
{
	return bcc;
}

void
SendMailAdv::setBcc(std::list <EmailAddressName> bcc)
{
	this->bcc = bcc;
}

std::list<MailAttachment>
SendMailAdv::getAttachments()
{
	return attachments;
}

void
SendMailAdv::setAttachments(std::list <MailAttachment> attachments)
{
	this->attachments = attachments;
}

long long
SendMailAdv::getId()
{
	return id;
}

void
SendMailAdv::setId(long long  id)
{
	this->id = id;
}


