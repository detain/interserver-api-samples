

#include "MailStatsType_volume_ip.h"

using namespace Tiny;

MailStatsType_volume_ip::MailStatsType_volume_ip()
{
	1111 = int(0);
	2222 = int(0);
	3333 = int(0);
	4444 = int(0);
}

MailStatsType_volume_ip::MailStatsType_volume_ip(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailStatsType_volume_ip::~MailStatsType_volume_ip()
{

}

void
MailStatsType_volume_ip::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *1111Key = "1.1.1.1";

    if(object.has_key(1111Key))
    {
        bourne::json value = object[1111Key];



        jsonToValue(&1111, value, "int");


    }

    const char *2222Key = "2.2.2.2";

    if(object.has_key(2222Key))
    {
        bourne::json value = object[2222Key];



        jsonToValue(&2222, value, "int");


    }

    const char *3333Key = "3.3.3.3";

    if(object.has_key(3333Key))
    {
        bourne::json value = object[3333Key];



        jsonToValue(&3333, value, "int");


    }

    const char *4444Key = "4.4.4.4";

    if(object.has_key(4444Key))
    {
        bourne::json value = object[4444Key];



        jsonToValue(&4444, value, "int");


    }


}

bourne::json
MailStatsType_volume_ip::toJson()
{
    bourne::json object = bourne::json::object();





    object["1111"] = get1111();






    object["2222"] = get2222();






    object["3333"] = get3333();






    object["4444"] = get4444();



    return object;

}

int
MailStatsType_volume_ip::get1111()
{
	return 1111;
}

void
MailStatsType_volume_ip::set1111(int 1111)
{
	this->1111 = 1111;
}

int
MailStatsType_volume_ip::get2222()
{
	return 2222;
}

void
MailStatsType_volume_ip::set2222(int 2222)
{
	this->2222 = 2222;
}

int
MailStatsType_volume_ip::get3333()
{
	return 3333;
}

void
MailStatsType_volume_ip::set3333(int 3333)
{
	this->3333 = 3333;
}

int
MailStatsType_volume_ip::get4444()
{
	return 4444;
}

void
MailStatsType_volume_ip::set4444(int 4444)
{
	this->4444 = 4444;
}



