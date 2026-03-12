

#include "MailStatsType_volume_from.h"

using namespace Tiny;

MailStatsType_volume_from::MailStatsType_volume_from()
{
	billingsomedomaincom = int(0);
	salessomedomaincom = int(0);
}

MailStatsType_volume_from::MailStatsType_volume_from(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailStatsType_volume_from::~MailStatsType_volume_from()
{

}

void
MailStatsType_volume_from::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *billingsomedomaincomKey = "billing@somedomain.com";

    if(object.has_key(billingsomedomaincomKey))
    {
        bourne::json value = object[billingsomedomaincomKey];



        jsonToValue(&billingsomedomaincom, value, "int");


    }

    const char *salessomedomaincomKey = "sales@somedomain.com";

    if(object.has_key(salessomedomaincomKey))
    {
        bourne::json value = object[salessomedomaincomKey];



        jsonToValue(&salessomedomaincom, value, "int");


    }


}

bourne::json
MailStatsType_volume_from::toJson()
{
    bourne::json object = bourne::json::object();





    object["billingsomedomaincom"] = getBillingsomedomaincom();






    object["salessomedomaincom"] = getSalessomedomaincom();



    return object;

}

int
MailStatsType_volume_from::getBillingsomedomaincom()
{
	return billingsomedomaincom;
}

void
MailStatsType_volume_from::setBillingsomedomaincom(int billingsomedomaincom)
{
	this->billingsomedomaincom = billingsomedomaincom;
}

int
MailStatsType_volume_from::getSalessomedomaincom()
{
	return salessomedomaincom;
}

void
MailStatsType_volume_from::setSalessomedomaincom(int salessomedomaincom)
{
	this->salessomedomaincom = salessomedomaincom;
}



