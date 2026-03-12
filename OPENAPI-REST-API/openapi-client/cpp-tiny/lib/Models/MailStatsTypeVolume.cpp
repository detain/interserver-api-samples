

#include "MailStatsType_volume.h"

using namespace Tiny;

MailStatsType_volume::MailStatsType_volume()
{
	to = MailStatsType_volume_to();
	from = MailStatsType_volume_from();
	ip = MailStatsType_volume_ip();
}

MailStatsType_volume::MailStatsType_volume(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailStatsType_volume::~MailStatsType_volume()
{

}

void
MailStatsType_volume::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *toKey = "to";

    if(object.has_key(toKey))
    {
        bourne::json value = object[toKey];




        MailStatsType_volume_to* obj = &to;
		obj->fromJson(value.dump());

    }

    const char *fromKey = "from";

    if(object.has_key(fromKey))
    {
        bourne::json value = object[fromKey];




        MailStatsType_volume_from* obj = &from;
		obj->fromJson(value.dump());

    }

    const char *ipKey = "ip";

    if(object.has_key(ipKey))
    {
        bourne::json value = object[ipKey];




        MailStatsType_volume_ip* obj = &ip;
		obj->fromJson(value.dump());

    }


}

bourne::json
MailStatsType_volume::toJson()
{
    bourne::json object = bourne::json::object();






	object["to"] = getTo().toJson();






	object["from"] = getFrom().toJson();






	object["ip"] = getIp().toJson();


    return object;

}

MailStatsType_volume_to
MailStatsType_volume::getTo()
{
	return to;
}

void
MailStatsType_volume::setTo(MailStatsType_volume_to to)
{
	this->to = to;
}

MailStatsType_volume_from
MailStatsType_volume::getFrom()
{
	return from;
}

void
MailStatsType_volume::setFrom(MailStatsType_volume_from from)
{
	this->from = from;
}

MailStatsType_volume_ip
MailStatsType_volume::getIp()
{
	return ip;
}

void
MailStatsType_volume::setIp(MailStatsType_volume_ip ip)
{
	this->ip = ip;
}



