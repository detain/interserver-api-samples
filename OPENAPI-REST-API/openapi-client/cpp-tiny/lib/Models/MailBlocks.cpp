

#include "MailBlocks.h"

using namespace Tiny;

MailBlocks::MailBlocks()
{
	local = std::list<MailBlockClickHouse>();
	mbtrap = std::list<MailBlockClickHouse>();
	subject = std::list<MailBlockRspamd>();
}

MailBlocks::MailBlocks(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailBlocks::~MailBlocks()
{

}

void
MailBlocks::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *localKey = "local";

    if(object.has_key(localKey))
    {
        bourne::json value = object[localKey];


        std::list<MailBlockClickHouse> local_list;
        MailBlockClickHouse element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            local_list.push_back(element);
        }
        local = local_list;


    }

    const char *mbtrapKey = "mbtrap";

    if(object.has_key(mbtrapKey))
    {
        bourne::json value = object[mbtrapKey];


        std::list<MailBlockClickHouse> mbtrap_list;
        MailBlockClickHouse element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            mbtrap_list.push_back(element);
        }
        mbtrap = mbtrap_list;


    }

    const char *subjectKey = "subject";

    if(object.has_key(subjectKey))
    {
        bourne::json value = object[subjectKey];


        std::list<MailBlockRspamd> subject_list;
        MailBlockRspamd element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            subject_list.push_back(element);
        }
        subject = subject_list;


    }


}

bourne::json
MailBlocks::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<MailBlockClickHouse> local_list = getLocal();
    bourne::json local_arr = bourne::json::array();

    for(auto& var : local_list)
    {
        MailBlockClickHouse obj = var;
        local_arr.append(obj.toJson());
    }
    object["local"] = local_arr;






    std::list<MailBlockClickHouse> mbtrap_list = getMbtrap();
    bourne::json mbtrap_arr = bourne::json::array();

    for(auto& var : mbtrap_list)
    {
        MailBlockClickHouse obj = var;
        mbtrap_arr.append(obj.toJson());
    }
    object["mbtrap"] = mbtrap_arr;






    std::list<MailBlockRspamd> subject_list = getSubject();
    bourne::json subject_arr = bourne::json::array();

    for(auto& var : subject_list)
    {
        MailBlockRspamd obj = var;
        subject_arr.append(obj.toJson());
    }
    object["subject"] = subject_arr;




    return object;

}

std::list<MailBlockClickHouse>
MailBlocks::getLocal()
{
	return local;
}

void
MailBlocks::setLocal(std::list<MailBlockClickHouse> local)
{
	this->local = local;
}

std::list<MailBlockClickHouse>
MailBlocks::getMbtrap()
{
	return mbtrap;
}

void
MailBlocks::setMbtrap(std::list<MailBlockClickHouse> mbtrap)
{
	this->mbtrap = mbtrap;
}

std::list<MailBlockRspamd>
MailBlocks::getSubject()
{
	return subject;
}

void
MailBlocks::setSubject(std::list<MailBlockRspamd> subject)
{
	this->subject = subject;
}



