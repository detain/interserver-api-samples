

#include "MailLogEntry.h"

using namespace Tiny;

MailLogEntry::MailLogEntry()
{
	_id = int(0);
	id = std::string();
	from = std::string();
	to = std::string();
	subject = std::string();
	created = std::string();
	time = int(0);
	user = std::string();
	transtype = std::string();
	origin = std::string();
	interface = std::string();
	sendingZone = std::string();
	bodySize = int(0);
	seq = int(0);
	recipient = std::string();
	domain = std::string();
	locked = int(0);
	lockTime = int(0);
	assigned = std::string();
	queued = std::string();
	mxHostname = std::string();
	response = std::string();
	messageId = std::string();
}

MailLogEntry::MailLogEntry(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailLogEntry::~MailLogEntry()
{

}

void
MailLogEntry::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *_idKey = "_id";

    if(object.has_key(_idKey))
    {
        bourne::json value = object[_idKey];



        jsonToValue(&_id, value, "int");


    }

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *fromKey = "from";

    if(object.has_key(fromKey))
    {
        bourne::json value = object[fromKey];



        jsonToValue(&from, value, "std::string");


    }

    const char *toKey = "to";

    if(object.has_key(toKey))
    {
        bourne::json value = object[toKey];



        jsonToValue(&to, value, "std::string");


    }

    const char *subjectKey = "subject";

    if(object.has_key(subjectKey))
    {
        bourne::json value = object[subjectKey];



        jsonToValue(&subject, value, "std::string");


    }

    const char *createdKey = "created";

    if(object.has_key(createdKey))
    {
        bourne::json value = object[createdKey];



        jsonToValue(&created, value, "std::string");


    }

    const char *timeKey = "time";

    if(object.has_key(timeKey))
    {
        bourne::json value = object[timeKey];



        jsonToValue(&time, value, "int");


    }

    const char *userKey = "user";

    if(object.has_key(userKey))
    {
        bourne::json value = object[userKey];



        jsonToValue(&user, value, "std::string");


    }

    const char *transtypeKey = "transtype";

    if(object.has_key(transtypeKey))
    {
        bourne::json value = object[transtypeKey];



        jsonToValue(&transtype, value, "std::string");


    }

    const char *originKey = "origin";

    if(object.has_key(originKey))
    {
        bourne::json value = object[originKey];



        jsonToValue(&origin, value, "std::string");


    }

    const char *interfaceKey = "interface";

    if(object.has_key(interfaceKey))
    {
        bourne::json value = object[interfaceKey];



        jsonToValue(&interface, value, "std::string");


    }

    const char *sendingZoneKey = "sendingZone";

    if(object.has_key(sendingZoneKey))
    {
        bourne::json value = object[sendingZoneKey];



        jsonToValue(&sendingZone, value, "std::string");


    }

    const char *bodySizeKey = "bodySize";

    if(object.has_key(bodySizeKey))
    {
        bourne::json value = object[bodySizeKey];



        jsonToValue(&bodySize, value, "int");


    }

    const char *seqKey = "seq";

    if(object.has_key(seqKey))
    {
        bourne::json value = object[seqKey];



        jsonToValue(&seq, value, "int");


    }

    const char *recipientKey = "recipient";

    if(object.has_key(recipientKey))
    {
        bourne::json value = object[recipientKey];



        jsonToValue(&recipient, value, "std::string");


    }

    const char *domainKey = "domain";

    if(object.has_key(domainKey))
    {
        bourne::json value = object[domainKey];



        jsonToValue(&domain, value, "std::string");


    }

    const char *lockedKey = "locked";

    if(object.has_key(lockedKey))
    {
        bourne::json value = object[lockedKey];



        jsonToValue(&locked, value, "int");


    }

    const char *lockTimeKey = "lockTime";

    if(object.has_key(lockTimeKey))
    {
        bourne::json value = object[lockTimeKey];



        jsonToValue(&lockTime, value, "int");


    }

    const char *assignedKey = "assigned";

    if(object.has_key(assignedKey))
    {
        bourne::json value = object[assignedKey];



        jsonToValue(&assigned, value, "std::string");


    }

    const char *queuedKey = "queued";

    if(object.has_key(queuedKey))
    {
        bourne::json value = object[queuedKey];



        jsonToValue(&queued, value, "std::string");


    }

    const char *mxHostnameKey = "mxHostname";

    if(object.has_key(mxHostnameKey))
    {
        bourne::json value = object[mxHostnameKey];



        jsonToValue(&mxHostname, value, "std::string");


    }

    const char *responseKey = "response";

    if(object.has_key(responseKey))
    {
        bourne::json value = object[responseKey];



        jsonToValue(&response, value, "std::string");


    }

    const char *messageIdKey = "messageId";

    if(object.has_key(messageIdKey))
    {
        bourne::json value = object[messageIdKey];



        jsonToValue(&messageId, value, "std::string");


    }


}

bourne::json
MailLogEntry::toJson()
{
    bourne::json object = bourne::json::object();





    object["_id"] = getId();






    object["id"] = getId();






    object["from"] = getFrom();






    object["to"] = getTo();






    object["subject"] = getSubject();






    object["created"] = getCreated();






    object["time"] = getTime();






    object["user"] = getUser();






    object["transtype"] = getTranstype();






    object["origin"] = getOrigin();






    object["interface"] = getInterface();






    object["sendingZone"] = getSendingZone();






    object["bodySize"] = getBodySize();






    object["seq"] = getSeq();






    object["recipient"] = getRecipient();






    object["domain"] = getDomain();






    object["locked"] = getLocked();






    object["lockTime"] = getLockTime();






    object["assigned"] = getAssigned();






    object["queued"] = getQueued();






    object["mxHostname"] = getMxHostname();






    object["response"] = getResponse();






    object["messageId"] = getMessageId();



    return object;

}

int
MailLogEntry::getId()
{
	return _id;
}

void
MailLogEntry::setId(int _id)
{
	this->_id = _id;
}

std::string
MailLogEntry::getId()
{
	return id;
}

void
MailLogEntry::setId(std::string id)
{
	this->id = id;
}

std::string
MailLogEntry::getFrom()
{
	return from;
}

void
MailLogEntry::setFrom(std::string from)
{
	this->from = from;
}

std::string
MailLogEntry::getTo()
{
	return to;
}

void
MailLogEntry::setTo(std::string to)
{
	this->to = to;
}

std::string
MailLogEntry::getSubject()
{
	return subject;
}

void
MailLogEntry::setSubject(std::string subject)
{
	this->subject = subject;
}

std::string
MailLogEntry::getCreated()
{
	return created;
}

void
MailLogEntry::setCreated(std::string created)
{
	this->created = created;
}

int
MailLogEntry::getTime()
{
	return time;
}

void
MailLogEntry::setTime(int time)
{
	this->time = time;
}

std::string
MailLogEntry::getUser()
{
	return user;
}

void
MailLogEntry::setUser(std::string user)
{
	this->user = user;
}

std::string
MailLogEntry::getTranstype()
{
	return transtype;
}

void
MailLogEntry::setTranstype(std::string transtype)
{
	this->transtype = transtype;
}

std::string
MailLogEntry::getOrigin()
{
	return origin;
}

void
MailLogEntry::setOrigin(std::string origin)
{
	this->origin = origin;
}

std::string
MailLogEntry::getInterface()
{
	return interface;
}

void
MailLogEntry::setInterface(std::string interface)
{
	this->interface = interface;
}

std::string
MailLogEntry::getSendingZone()
{
	return sendingZone;
}

void
MailLogEntry::setSendingZone(std::string sendingZone)
{
	this->sendingZone = sendingZone;
}

int
MailLogEntry::getBodySize()
{
	return bodySize;
}

void
MailLogEntry::setBodySize(int bodySize)
{
	this->bodySize = bodySize;
}

int
MailLogEntry::getSeq()
{
	return seq;
}

void
MailLogEntry::setSeq(int seq)
{
	this->seq = seq;
}

std::string
MailLogEntry::getRecipient()
{
	return recipient;
}

void
MailLogEntry::setRecipient(std::string recipient)
{
	this->recipient = recipient;
}

std::string
MailLogEntry::getDomain()
{
	return domain;
}

void
MailLogEntry::setDomain(std::string domain)
{
	this->domain = domain;
}

int
MailLogEntry::getLocked()
{
	return locked;
}

void
MailLogEntry::setLocked(int locked)
{
	this->locked = locked;
}

int
MailLogEntry::getLockTime()
{
	return lockTime;
}

void
MailLogEntry::setLockTime(int lockTime)
{
	this->lockTime = lockTime;
}

std::string
MailLogEntry::getAssigned()
{
	return assigned;
}

void
MailLogEntry::setAssigned(std::string assigned)
{
	this->assigned = assigned;
}

std::string
MailLogEntry::getQueued()
{
	return queued;
}

void
MailLogEntry::setQueued(std::string queued)
{
	this->queued = queued;
}

std::string
MailLogEntry::getMxHostname()
{
	return mxHostname;
}

void
MailLogEntry::setMxHostname(std::string mxHostname)
{
	this->mxHostname = mxHostname;
}

std::string
MailLogEntry::getResponse()
{
	return response;
}

void
MailLogEntry::setResponse(std::string response)
{
	this->response = response;
}

std::string
MailLogEntry::getMessageId()
{
	return messageId;
}

void
MailLogEntry::setMessageId(std::string messageId)
{
	this->messageId = messageId;
}



