

#include "MailLog.h"

using namespace Tiny;

MailLog::MailLog()
{
	total = int(0);
	skip = int(0);
	limit = int(0);
	emails = std::list<MailLogEntry>();
}

MailLog::MailLog(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailLog::~MailLog()
{

}

void
MailLog::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *totalKey = "total";

    if(object.has_key(totalKey))
    {
        bourne::json value = object[totalKey];



        jsonToValue(&total, value, "int");


    }

    const char *skipKey = "skip";

    if(object.has_key(skipKey))
    {
        bourne::json value = object[skipKey];



        jsonToValue(&skip, value, "int");


    }

    const char *limitKey = "limit";

    if(object.has_key(limitKey))
    {
        bourne::json value = object[limitKey];



        jsonToValue(&limit, value, "int");


    }

    const char *emailsKey = "emails";

    if(object.has_key(emailsKey))
    {
        bourne::json value = object[emailsKey];


        std::list<MailLogEntry> emails_list;
        MailLogEntry element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            emails_list.push_back(element);
        }
        emails = emails_list;


    }


}

bourne::json
MailLog::toJson()
{
    bourne::json object = bourne::json::object();





    object["total"] = getTotal();






    object["skip"] = getSkip();






    object["limit"] = getLimit();





    std::list<MailLogEntry> emails_list = getEmails();
    bourne::json emails_arr = bourne::json::array();

    for(auto& var : emails_list)
    {
        MailLogEntry obj = var;
        emails_arr.append(obj.toJson());
    }
    object["emails"] = emails_arr;




    return object;

}

int
MailLog::getTotal()
{
	return total;
}

void
MailLog::setTotal(int total)
{
	this->total = total;
}

int
MailLog::getSkip()
{
	return skip;
}

void
MailLog::setSkip(int skip)
{
	this->skip = skip;
}

int
MailLog::getLimit()
{
	return limit;
}

void
MailLog::setLimit(int limit)
{
	this->limit = limit;
}

std::list<MailLogEntry>
MailLog::getEmails()
{
	return emails;
}

void
MailLog::setEmails(std::list<MailLogEntry> emails)
{
	this->emails = emails;
}



