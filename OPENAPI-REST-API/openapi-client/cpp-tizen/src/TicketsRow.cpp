#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TicketsRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TicketsRow::TicketsRow()
{
	//__init();
}

TicketsRow::~TicketsRow()
{
	//__cleanup();
}

void
TicketsRow::__init()
{
	//title = std::string();
	//ticketmaskid = std::string();
	//lastreplier = std::string();
	//status = std::string();
	//priority = std::string();
	//total_replies = int(0);
	//lastactivity = std::string();
	//departmenttitle = std::string();
	//ticketid = int(0);
	//can_close = std::string();
	//attachments = null;
	//status_text = std::string();
	//checked = bool(false);
}

void
TicketsRow::__cleanup()
{
	//if(title != NULL) {
	//
	//delete title;
	//title = NULL;
	//}
	//if(ticketmaskid != NULL) {
	//
	//delete ticketmaskid;
	//ticketmaskid = NULL;
	//}
	//if(lastreplier != NULL) {
	//
	//delete lastreplier;
	//lastreplier = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(priority != NULL) {
	//
	//delete priority;
	//priority = NULL;
	//}
	//if(total_replies != NULL) {
	//
	//delete total_replies;
	//total_replies = NULL;
	//}
	//if(lastactivity != NULL) {
	//
	//delete lastactivity;
	//lastactivity = NULL;
	//}
	//if(departmenttitle != NULL) {
	//
	//delete departmenttitle;
	//departmenttitle = NULL;
	//}
	//if(ticketid != NULL) {
	//
	//delete ticketid;
	//ticketid = NULL;
	//}
	//if(can_close != NULL) {
	//
	//delete can_close;
	//can_close = NULL;
	//}
	//if(attachments != NULL) {
	//
	//delete attachments;
	//attachments = NULL;
	//}
	//if(status_text != NULL) {
	//
	//delete status_text;
	//status_text = NULL;
	//}
	//if(checked != NULL) {
	//
	//delete checked;
	//checked = NULL;
	//}
	//
}

void
TicketsRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *titleKey = "title";
	node = json_object_get_member(pJsonObject, titleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&title, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ticketmaskidKey = "ticketmaskid";
	node = json_object_get_member(pJsonObject, ticketmaskidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ticketmaskid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *lastreplierKey = "lastreplier";
	node = json_object_get_member(pJsonObject, lastreplierKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&lastreplier, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *priorityKey = "priority";
	node = json_object_get_member(pJsonObject, priorityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&priority, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *total_repliesKey = "total_replies";
	node = json_object_get_member(pJsonObject, total_repliesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&total_replies, node, "int", "");
		} else {
			
		}
	}
	const gchar *lastactivityKey = "lastactivity";
	node = json_object_get_member(pJsonObject, lastactivityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&lastactivity, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *departmenttitleKey = "departmenttitle";
	node = json_object_get_member(pJsonObject, departmenttitleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&departmenttitle, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ticketidKey = "ticketid";
	node = json_object_get_member(pJsonObject, ticketidKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&ticketid, node, "int", "");
		} else {
			
		}
	}
	const gchar *can_closeKey = "can_close";
	node = json_object_get_member(pJsonObject, can_closeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&can_close, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *attachmentsKey = "attachments";
	node = json_object_get_member(pJsonObject, attachmentsKey);
	if (node !=NULL) {
	

		if (isprimitive("AnyType")) {
			jsonToValue(&attachments, node, "AnyType", "");
		} else {
			
			AnyType* obj = static_cast<AnyType*> (&attachments);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *status_textKey = "status_text";
	node = json_object_get_member(pJsonObject, status_textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status_text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *checkedKey = "checked";
	node = json_object_get_member(pJsonObject, checkedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&checked, node, "bool", "");
		} else {
			
		}
	}
}

TicketsRow::TicketsRow(char* json)
{
	this->fromJson(json);
}

char*
TicketsRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getTitle();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *titleKey = "title";
	json_object_set_member(pJsonObject, titleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTicketmaskid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ticketmaskidKey = "ticketmaskid";
	json_object_set_member(pJsonObject, ticketmaskidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastreplier();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *lastreplierKey = "lastreplier";
	json_object_set_member(pJsonObject, lastreplierKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPriority();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *priorityKey = "priority";
	json_object_set_member(pJsonObject, priorityKey, node);
	if (isprimitive("int")) {
		int obj = getTotalReplies();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *total_repliesKey = "total_replies";
	json_object_set_member(pJsonObject, total_repliesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastactivity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *lastactivityKey = "lastactivity";
	json_object_set_member(pJsonObject, lastactivityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDepartmenttitle();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *departmenttitleKey = "departmenttitle";
	json_object_set_member(pJsonObject, departmenttitleKey, node);
	if (isprimitive("int")) {
		int obj = getTicketid();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *ticketidKey = "ticketid";
	json_object_set_member(pJsonObject, ticketidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCanClose();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *can_closeKey = "can_close";
	json_object_set_member(pJsonObject, can_closeKey, node);
	if (isprimitive("AnyType")) {
		AnyType obj = getAttachments();
		node = converttoJson(&obj, "AnyType", "");
	}
	else {
		
		AnyType obj = static_cast<AnyType> (getAttachments());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *attachmentsKey = "attachments";
	json_object_set_member(pJsonObject, attachmentsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatusText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *status_textKey = "status_text";
	json_object_set_member(pJsonObject, status_textKey, node);
	if (isprimitive("bool")) {
		bool obj = getChecked();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *checkedKey = "checked";
	json_object_set_member(pJsonObject, checkedKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TicketsRow::getTitle()
{
	return title;
}

void
TicketsRow::setTitle(std::string  title)
{
	this->title = title;
}

std::string
TicketsRow::getTicketmaskid()
{
	return ticketmaskid;
}

void
TicketsRow::setTicketmaskid(std::string  ticketmaskid)
{
	this->ticketmaskid = ticketmaskid;
}

std::string
TicketsRow::getLastreplier()
{
	return lastreplier;
}

void
TicketsRow::setLastreplier(std::string  lastreplier)
{
	this->lastreplier = lastreplier;
}

std::string
TicketsRow::getStatus()
{
	return status;
}

void
TicketsRow::setStatus(std::string  status)
{
	this->status = status;
}

std::string
TicketsRow::getPriority()
{
	return priority;
}

void
TicketsRow::setPriority(std::string  priority)
{
	this->priority = priority;
}

int
TicketsRow::getTotalReplies()
{
	return total_replies;
}

void
TicketsRow::setTotalReplies(int  total_replies)
{
	this->total_replies = total_replies;
}

std::string
TicketsRow::getLastactivity()
{
	return lastactivity;
}

void
TicketsRow::setLastactivity(std::string  lastactivity)
{
	this->lastactivity = lastactivity;
}

std::string
TicketsRow::getDepartmenttitle()
{
	return departmenttitle;
}

void
TicketsRow::setDepartmenttitle(std::string  departmenttitle)
{
	this->departmenttitle = departmenttitle;
}

int
TicketsRow::getTicketid()
{
	return ticketid;
}

void
TicketsRow::setTicketid(int  ticketid)
{
	this->ticketid = ticketid;
}

std::string
TicketsRow::getCanClose()
{
	return can_close;
}

void
TicketsRow::setCanClose(std::string  can_close)
{
	this->can_close = can_close;
}

AnyType
TicketsRow::getAttachments()
{
	return attachments;
}

void
TicketsRow::setAttachments(AnyType  attachments)
{
	this->attachments = attachments;
}

std::string
TicketsRow::getStatusText()
{
	return status_text;
}

void
TicketsRow::setStatusText(std::string  status_text)
{
	this->status_text = status_text;
}

bool
TicketsRow::getChecked()
{
	return checked;
}

void
TicketsRow::setChecked(bool  checked)
{
	this->checked = checked;
}


