

#include "MailDelistResponse.h"

using namespace Tiny;

MailDelistResponse::MailDelistResponse()
{
	id = int(0);
	local = std::list<Object>();
	mbtrap = std::list<Object>();
	subject = std::list<Object>();
	manual = std::list<Object>();
}

MailDelistResponse::MailDelistResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailDelistResponse::~MailDelistResponse()
{

}

void
MailDelistResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *localKey = "local";

    if(object.has_key(localKey))
    {
        bourne::json value = object[localKey];


        std::list<Object> local_list;
        Object element;
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


        std::list<Object> mbtrap_list;
        Object element;
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


        std::list<Object> subject_list;
        Object element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            subject_list.push_back(element);
        }
        subject = subject_list;


    }

    const char *manualKey = "manual";

    if(object.has_key(manualKey))
    {
        bourne::json value = object[manualKey];


        std::list<Object> manual_list;
        Object element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            manual_list.push_back(element);
        }
        manual = manual_list;


    }


}

bourne::json
MailDelistResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();





    std::list<Object> local_list = getLocal();
    bourne::json local_arr = bourne::json::array();

    for(auto& var : local_list)
    {
        Object obj = var;
        local_arr.append(obj.toJson());
    }
    object["local"] = local_arr;






    std::list<Object> mbtrap_list = getMbtrap();
    bourne::json mbtrap_arr = bourne::json::array();

    for(auto& var : mbtrap_list)
    {
        Object obj = var;
        mbtrap_arr.append(obj.toJson());
    }
    object["mbtrap"] = mbtrap_arr;






    std::list<Object> subject_list = getSubject();
    bourne::json subject_arr = bourne::json::array();

    for(auto& var : subject_list)
    {
        Object obj = var;
        subject_arr.append(obj.toJson());
    }
    object["subject"] = subject_arr;






    std::list<Object> manual_list = getManual();
    bourne::json manual_arr = bourne::json::array();

    for(auto& var : manual_list)
    {
        Object obj = var;
        manual_arr.append(obj.toJson());
    }
    object["manual"] = manual_arr;




    return object;

}

int
MailDelistResponse::getId()
{
	return id;
}

void
MailDelistResponse::setId(int id)
{
	this->id = id;
}

std::list<Object>
MailDelistResponse::getLocal()
{
	return local;
}

void
MailDelistResponse::setLocal(std::list<Object> local)
{
	this->local = local;
}

std::list<Object>
MailDelistResponse::getMbtrap()
{
	return mbtrap;
}

void
MailDelistResponse::setMbtrap(std::list<Object> mbtrap)
{
	this->mbtrap = mbtrap;
}

std::list<Object>
MailDelistResponse::getSubject()
{
	return subject;
}

void
MailDelistResponse::setSubject(std::list<Object> subject)
{
	this->subject = subject;
}

std::list<Object>
MailDelistResponse::getManual()
{
	return manual;
}

void
MailDelistResponse::setManual(std::list<Object> manual)
{
	this->manual = manual;
}



