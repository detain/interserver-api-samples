

#include "MailSchema_extraInfoTables.h"

using namespace Tiny;

MailSchema_extraInfoTables::MailSchema_extraInfoTables()
{
	mail = MailExtraInfoTable();
	tutorials = MailTutorialsTable();
}

MailSchema_extraInfoTables::MailSchema_extraInfoTables(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailSchema_extraInfoTables::~MailSchema_extraInfoTables()
{

}

void
MailSchema_extraInfoTables::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *mailKey = "mail";

    if(object.has_key(mailKey))
    {
        bourne::json value = object[mailKey];




        MailExtraInfoTable* obj = &mail;
		obj->fromJson(value.dump());

    }

    const char *tutorialsKey = "tutorials";

    if(object.has_key(tutorialsKey))
    {
        bourne::json value = object[tutorialsKey];




        MailTutorialsTable* obj = &tutorials;
		obj->fromJson(value.dump());

    }


}

bourne::json
MailSchema_extraInfoTables::toJson()
{
    bourne::json object = bourne::json::object();






	object["mail"] = getMail().toJson();






	object["tutorials"] = getTutorials().toJson();


    return object;

}

MailExtraInfoTable
MailSchema_extraInfoTables::getMail()
{
	return mail;
}

void
MailSchema_extraInfoTables::setMail(MailExtraInfoTable mail)
{
	this->mail = mail;
}

MailTutorialsTable
MailSchema_extraInfoTables::getTutorials()
{
	return tutorials;
}

void
MailSchema_extraInfoTables::setTutorials(MailTutorialsTable tutorials)
{
	this->tutorials = tutorials;
}



