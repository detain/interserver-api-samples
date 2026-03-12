

#include "MailDelistRequest.h"

using namespace Tiny;

MailDelistRequest::MailDelistRequest()
{
	unblock = std::string();
}

MailDelistRequest::MailDelistRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailDelistRequest::~MailDelistRequest()
{

}

void
MailDelistRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *unblockKey = "unblock";

    if(object.has_key(unblockKey))
    {
        bourne::json value = object[unblockKey];



        jsonToValue(&unblock, value, "std::string");


    }


}

bourne::json
MailDelistRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["unblock"] = getUnblock();



    return object;

}

std::string
MailDelistRequest::getUnblock()
{
	return unblock;
}

void
MailDelistRequest::setUnblock(std::string unblock)
{
	this->unblock = unblock;
}



