

#include "MailStatsType.h"

using namespace Tiny;

MailStatsType::MailStatsType()
{
	time = std::string();
	usage = int(0);
	currency = std::string();
	currencySymbol = std::string();
	cost = float(0);
	received = int(0);
	sent = int(0);
	volume = MailStatsType_volume();
}

MailStatsType::MailStatsType(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailStatsType::~MailStatsType()
{

}

void
MailStatsType::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *timeKey = "time";

    if(object.has_key(timeKey))
    {
        bourne::json value = object[timeKey];



        jsonToValue(&time, value, "std::string");


    }

    const char *usageKey = "usage";

    if(object.has_key(usageKey))
    {
        bourne::json value = object[usageKey];



        jsonToValue(&usage, value, "int");


    }

    const char *currencyKey = "currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *currencySymbolKey = "currencySymbol";

    if(object.has_key(currencySymbolKey))
    {
        bourne::json value = object[currencySymbolKey];



        jsonToValue(&currencySymbol, value, "std::string");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "double");


    }

    const char *receivedKey = "received";

    if(object.has_key(receivedKey))
    {
        bourne::json value = object[receivedKey];



        jsonToValue(&received, value, "int");


    }

    const char *sentKey = "sent";

    if(object.has_key(sentKey))
    {
        bourne::json value = object[sentKey];



        jsonToValue(&sent, value, "int");


    }

    const char *volumeKey = "volume";

    if(object.has_key(volumeKey))
    {
        bourne::json value = object[volumeKey];




        MailStatsType_volume* obj = &volume;
		obj->fromJson(value.dump());

    }


}

bourne::json
MailStatsType::toJson()
{
    bourne::json object = bourne::json::object();





    object["time"] = getTime();






    object["usage"] = getUsage();






    object["currency"] = getCurrency();






    object["currencySymbol"] = getCurrencySymbol();






    object["cost"] = getCost();






    object["received"] = getReceived();






    object["sent"] = getSent();







	object["volume"] = getVolume().toJson();


    return object;

}

std::string
MailStatsType::getTime()
{
	return time;
}

void
MailStatsType::setTime(std::string time)
{
	this->time = time;
}

int
MailStatsType::getUsage()
{
	return usage;
}

void
MailStatsType::setUsage(int usage)
{
	this->usage = usage;
}

std::string
MailStatsType::getCurrency()
{
	return currency;
}

void
MailStatsType::setCurrency(std::string currency)
{
	this->currency = currency;
}

std::string
MailStatsType::getCurrencySymbol()
{
	return currencySymbol;
}

void
MailStatsType::setCurrencySymbol(std::string currencySymbol)
{
	this->currencySymbol = currencySymbol;
}

double
MailStatsType::getCost()
{
	return cost;
}

void
MailStatsType::setCost(double cost)
{
	this->cost = cost;
}

int
MailStatsType::getReceived()
{
	return received;
}

void
MailStatsType::setReceived(int received)
{
	this->received = received;
}

int
MailStatsType::getSent()
{
	return sent;
}

void
MailStatsType::setSent(int sent)
{
	this->sent = sent;
}

MailStatsType_volume
MailStatsType::getVolume()
{
	return volume;
}

void
MailStatsType::setVolume(MailStatsType_volume volume)
{
	this->volume = volume;
}



