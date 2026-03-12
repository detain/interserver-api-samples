#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailLogEntry.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailLogEntry::MailLogEntry()
{
	//__init();
}

MailLogEntry::~MailLogEntry()
{
	//__cleanup();
}

void
MailLogEntry::__init()
{
	//_id = int(0);
	//id = std::string();
	//from = std::string();
	//to = std::string();
	//subject = std::string();
	//created = std::string();
	//time = int(0);
	//user = std::string();
	//transtype = std::string();
	//origin = std::string();
	//interface = std::string();
	//sendingZone = std::string();
	//bodySize = int(0);
	//seq = int(0);
	//recipient = std::string();
	//domain = std::string();
	//locked = int(0);
	//lockTime = int(0);
	//assigned = std::string();
	//queued = std::string();
	//mxHostname = std::string();
	//response = std::string();
	//messageId = std::string();
}

void
MailLogEntry::__cleanup()
{
	//if(_id != NULL) {
	//
	//delete _id;
	//_id = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
	//}
	//if(to != NULL) {
	//
	//delete to;
	//to = NULL;
	//}
	//if(subject != NULL) {
	//
	//delete subject;
	//subject = NULL;
	//}
	//if(created != NULL) {
	//
	//delete created;
	//created = NULL;
	//}
	//if(time != NULL) {
	//
	//delete time;
	//time = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//if(transtype != NULL) {
	//
	//delete transtype;
	//transtype = NULL;
	//}
	//if(origin != NULL) {
	//
	//delete origin;
	//origin = NULL;
	//}
	//if(interface != NULL) {
	//
	//delete interface;
	//interface = NULL;
	//}
	//if(sendingZone != NULL) {
	//
	//delete sendingZone;
	//sendingZone = NULL;
	//}
	//if(bodySize != NULL) {
	//
	//delete bodySize;
	//bodySize = NULL;
	//}
	//if(seq != NULL) {
	//
	//delete seq;
	//seq = NULL;
	//}
	//if(recipient != NULL) {
	//
	//delete recipient;
	//recipient = NULL;
	//}
	//if(domain != NULL) {
	//
	//delete domain;
	//domain = NULL;
	//}
	//if(locked != NULL) {
	//
	//delete locked;
	//locked = NULL;
	//}
	//if(lockTime != NULL) {
	//
	//delete lockTime;
	//lockTime = NULL;
	//}
	//if(assigned != NULL) {
	//
	//delete assigned;
	//assigned = NULL;
	//}
	//if(queued != NULL) {
	//
	//delete queued;
	//queued = NULL;
	//}
	//if(mxHostname != NULL) {
	//
	//delete mxHostname;
	//mxHostname = NULL;
	//}
	//if(response != NULL) {
	//
	//delete response;
	//response = NULL;
	//}
	//if(messageId != NULL) {
	//
	//delete messageId;
	//messageId = NULL;
	//}
	//
}

void
MailLogEntry::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *_idKey = "_id";
	node = json_object_get_member(pJsonObject, _idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fromKey = "from";
	node = json_object_get_member(pJsonObject, fromKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&from, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *toKey = "to";
	node = json_object_get_member(pJsonObject, toKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&to, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *subjectKey = "subject";
	node = json_object_get_member(pJsonObject, subjectKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&subject, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *createdKey = "created";
	node = json_object_get_member(pJsonObject, createdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&created, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *timeKey = "time";
	node = json_object_get_member(pJsonObject, timeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&time, node, "int", "");
		} else {
			
		}
	}
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&user, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *transtypeKey = "transtype";
	node = json_object_get_member(pJsonObject, transtypeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&transtype, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *originKey = "origin";
	node = json_object_get_member(pJsonObject, originKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&origin, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *interfaceKey = "interface";
	node = json_object_get_member(pJsonObject, interfaceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&interface, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sendingZoneKey = "sendingZone";
	node = json_object_get_member(pJsonObject, sendingZoneKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sendingZone, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bodySizeKey = "bodySize";
	node = json_object_get_member(pJsonObject, bodySizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&bodySize, node, "int", "");
		} else {
			
		}
	}
	const gchar *seqKey = "seq";
	node = json_object_get_member(pJsonObject, seqKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&seq, node, "int", "");
		} else {
			
		}
	}
	const gchar *recipientKey = "recipient";
	node = json_object_get_member(pJsonObject, recipientKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&recipient, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domainKey = "domain";
	node = json_object_get_member(pJsonObject, domainKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *lockedKey = "locked";
	node = json_object_get_member(pJsonObject, lockedKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&locked, node, "int", "");
		} else {
			
		}
	}
	const gchar *lockTimeKey = "lockTime";
	node = json_object_get_member(pJsonObject, lockTimeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&lockTime, node, "int", "");
		} else {
			
		}
	}
	const gchar *assignedKey = "assigned";
	node = json_object_get_member(pJsonObject, assignedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&assigned, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *queuedKey = "queued";
	node = json_object_get_member(pJsonObject, queuedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&queued, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mxHostnameKey = "mxHostname";
	node = json_object_get_member(pJsonObject, mxHostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mxHostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *responseKey = "response";
	node = json_object_get_member(pJsonObject, responseKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&response, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *messageIdKey = "messageId";
	node = json_object_get_member(pJsonObject, messageIdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&messageId, node, "std::string", "");
		} else {
			
		}
	}
}

MailLogEntry::MailLogEntry(char* json)
{
	this->fromJson(json);
}

char*
MailLogEntry::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *_idKey = "_id";
	json_object_set_member(pJsonObject, _idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFrom();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fromKey = "from";
	json_object_set_member(pJsonObject, fromKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *toKey = "to";
	json_object_set_member(pJsonObject, toKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSubject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreated();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *createdKey = "created";
	json_object_set_member(pJsonObject, createdKey, node);
	if (isprimitive("int")) {
		int obj = getTime();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *timeKey = "time";
	json_object_set_member(pJsonObject, timeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUser();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTranstype();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *transtypeKey = "transtype";
	json_object_set_member(pJsonObject, transtypeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOrigin();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *originKey = "origin";
	json_object_set_member(pJsonObject, originKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInterface();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *interfaceKey = "interface";
	json_object_set_member(pJsonObject, interfaceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSendingZone();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sendingZoneKey = "sendingZone";
	json_object_set_member(pJsonObject, sendingZoneKey, node);
	if (isprimitive("int")) {
		int obj = getBodySize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *bodySizeKey = "bodySize";
	json_object_set_member(pJsonObject, bodySizeKey, node);
	if (isprimitive("int")) {
		int obj = getSeq();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *seqKey = "seq";
	json_object_set_member(pJsonObject, seqKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecipient();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recipientKey = "recipient";
	json_object_set_member(pJsonObject, recipientKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomain();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domainKey = "domain";
	json_object_set_member(pJsonObject, domainKey, node);
	if (isprimitive("int")) {
		int obj = getLocked();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *lockedKey = "locked";
	json_object_set_member(pJsonObject, lockedKey, node);
	if (isprimitive("int")) {
		int obj = getLockTime();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *lockTimeKey = "lockTime";
	json_object_set_member(pJsonObject, lockTimeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAssigned();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *assignedKey = "assigned";
	json_object_set_member(pJsonObject, assignedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQueued();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *queuedKey = "queued";
	json_object_set_member(pJsonObject, queuedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMxHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mxHostnameKey = "mxHostname";
	json_object_set_member(pJsonObject, mxHostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getResponse();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *responseKey = "response";
	json_object_set_member(pJsonObject, responseKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessageId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageIdKey = "messageId";
	json_object_set_member(pJsonObject, messageIdKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MailLogEntry::getId()
{
	return _id;
}

void
MailLogEntry::setId(int  _id)
{
	this->_id = _id;
}

std::string
MailLogEntry::getId()
{
	return id;
}

void
MailLogEntry::setId(std::string  id)
{
	this->id = id;
}

std::string
MailLogEntry::getFrom()
{
	return from;
}

void
MailLogEntry::setFrom(std::string  from)
{
	this->from = from;
}

std::string
MailLogEntry::getTo()
{
	return to;
}

void
MailLogEntry::setTo(std::string  to)
{
	this->to = to;
}

std::string
MailLogEntry::getSubject()
{
	return subject;
}

void
MailLogEntry::setSubject(std::string  subject)
{
	this->subject = subject;
}

std::string
MailLogEntry::getCreated()
{
	return created;
}

void
MailLogEntry::setCreated(std::string  created)
{
	this->created = created;
}

int
MailLogEntry::getTime()
{
	return time;
}

void
MailLogEntry::setTime(int  time)
{
	this->time = time;
}

std::string
MailLogEntry::getUser()
{
	return user;
}

void
MailLogEntry::setUser(std::string  user)
{
	this->user = user;
}

std::string
MailLogEntry::getTranstype()
{
	return transtype;
}

void
MailLogEntry::setTranstype(std::string  transtype)
{
	this->transtype = transtype;
}

std::string
MailLogEntry::getOrigin()
{
	return origin;
}

void
MailLogEntry::setOrigin(std::string  origin)
{
	this->origin = origin;
}

std::string
MailLogEntry::getInterface()
{
	return interface;
}

void
MailLogEntry::setInterface(std::string  interface)
{
	this->interface = interface;
}

std::string
MailLogEntry::getSendingZone()
{
	return sendingZone;
}

void
MailLogEntry::setSendingZone(std::string  sendingZone)
{
	this->sendingZone = sendingZone;
}

int
MailLogEntry::getBodySize()
{
	return bodySize;
}

void
MailLogEntry::setBodySize(int  bodySize)
{
	this->bodySize = bodySize;
}

int
MailLogEntry::getSeq()
{
	return seq;
}

void
MailLogEntry::setSeq(int  seq)
{
	this->seq = seq;
}

std::string
MailLogEntry::getRecipient()
{
	return recipient;
}

void
MailLogEntry::setRecipient(std::string  recipient)
{
	this->recipient = recipient;
}

std::string
MailLogEntry::getDomain()
{
	return domain;
}

void
MailLogEntry::setDomain(std::string  domain)
{
	this->domain = domain;
}

int
MailLogEntry::getLocked()
{
	return locked;
}

void
MailLogEntry::setLocked(int  locked)
{
	this->locked = locked;
}

int
MailLogEntry::getLockTime()
{
	return lockTime;
}

void
MailLogEntry::setLockTime(int  lockTime)
{
	this->lockTime = lockTime;
}

std::string
MailLogEntry::getAssigned()
{
	return assigned;
}

void
MailLogEntry::setAssigned(std::string  assigned)
{
	this->assigned = assigned;
}

std::string
MailLogEntry::getQueued()
{
	return queued;
}

void
MailLogEntry::setQueued(std::string  queued)
{
	this->queued = queued;
}

std::string
MailLogEntry::getMxHostname()
{
	return mxHostname;
}

void
MailLogEntry::setMxHostname(std::string  mxHostname)
{
	this->mxHostname = mxHostname;
}

std::string
MailLogEntry::getResponse()
{
	return response;
}

void
MailLogEntry::setResponse(std::string  response)
{
	this->response = response;
}

std::string
MailLogEntry::getMessageId()
{
	return messageId;
}

void
MailLogEntry::setMessageId(std::string  messageId)
{
	this->messageId = messageId;
}


