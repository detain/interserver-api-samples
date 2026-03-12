

#include "VpsOrderPutRequest.h"

using namespace Tiny;

VpsOrderPutRequest::VpsOrderPutRequest()
{
	osDistro = std::string();
	slices = int(0);
	vpsPlatform = std::string();
	period = int(0);
	location = int(0);
	osVersion = std::string();
	hostname = std::string();
	rootpass = std::string();
	controlpanel = std::string();
	coupon = std::string();
	comment = std::string();
}

VpsOrderPutRequest::VpsOrderPutRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrderPutRequest::~VpsOrderPutRequest()
{

}

void
VpsOrderPutRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *osDistroKey = "osDistro";

    if(object.has_key(osDistroKey))
    {
        bourne::json value = object[osDistroKey];



        jsonToValue(&osDistro, value, "std::string");


    }

    const char *slicesKey = "slices";

    if(object.has_key(slicesKey))
    {
        bourne::json value = object[slicesKey];



        jsonToValue(&slices, value, "int");


    }

    const char *vpsPlatformKey = "vpsPlatform";

    if(object.has_key(vpsPlatformKey))
    {
        bourne::json value = object[vpsPlatformKey];



        jsonToValue(&vpsPlatform, value, "std::string");


    }

    const char *periodKey = "period";

    if(object.has_key(periodKey))
    {
        bourne::json value = object[periodKey];



        jsonToValue(&period, value, "int");


    }

    const char *locationKey = "location";

    if(object.has_key(locationKey))
    {
        bourne::json value = object[locationKey];



        jsonToValue(&location, value, "int");


    }

    const char *osVersionKey = "osVersion";

    if(object.has_key(osVersionKey))
    {
        bourne::json value = object[osVersionKey];



        jsonToValue(&osVersion, value, "std::string");


    }

    const char *hostnameKey = "hostname";

    if(object.has_key(hostnameKey))
    {
        bourne::json value = object[hostnameKey];



        jsonToValue(&hostname, value, "std::string");


    }

    const char *rootpassKey = "rootpass";

    if(object.has_key(rootpassKey))
    {
        bourne::json value = object[rootpassKey];



        jsonToValue(&rootpass, value, "std::string");


    }

    const char *controlpanelKey = "controlpanel";

    if(object.has_key(controlpanelKey))
    {
        bourne::json value = object[controlpanelKey];



        jsonToValue(&controlpanel, value, "std::string");


    }

    const char *couponKey = "coupon";

    if(object.has_key(couponKey))
    {
        bourne::json value = object[couponKey];



        jsonToValue(&coupon, value, "std::string");


    }

    const char *commentKey = "comment";

    if(object.has_key(commentKey))
    {
        bourne::json value = object[commentKey];



        jsonToValue(&comment, value, "std::string");


    }


}

bourne::json
VpsOrderPutRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["osDistro"] = getOsDistro();






    object["slices"] = getSlices();






    object["vpsPlatform"] = getVpsPlatform();






    object["period"] = getPeriod();






    object["location"] = getLocation();






    object["osVersion"] = getOsVersion();






    object["hostname"] = getHostname();






    object["rootpass"] = getRootpass();






    object["controlpanel"] = getControlpanel();






    object["coupon"] = getCoupon();






    object["comment"] = getComment();



    return object;

}

std::string
VpsOrderPutRequest::getOsDistro()
{
	return osDistro;
}

void
VpsOrderPutRequest::setOsDistro(std::string osDistro)
{
	this->osDistro = osDistro;
}

int
VpsOrderPutRequest::getSlices()
{
	return slices;
}

void
VpsOrderPutRequest::setSlices(int slices)
{
	this->slices = slices;
}

std::string
VpsOrderPutRequest::getVpsPlatform()
{
	return vpsPlatform;
}

void
VpsOrderPutRequest::setVpsPlatform(std::string vpsPlatform)
{
	this->vpsPlatform = vpsPlatform;
}

int
VpsOrderPutRequest::getPeriod()
{
	return period;
}

void
VpsOrderPutRequest::setPeriod(int period)
{
	this->period = period;
}

int
VpsOrderPutRequest::getLocation()
{
	return location;
}

void
VpsOrderPutRequest::setLocation(int location)
{
	this->location = location;
}

std::string
VpsOrderPutRequest::getOsVersion()
{
	return osVersion;
}

void
VpsOrderPutRequest::setOsVersion(std::string osVersion)
{
	this->osVersion = osVersion;
}

std::string
VpsOrderPutRequest::getHostname()
{
	return hostname;
}

void
VpsOrderPutRequest::setHostname(std::string hostname)
{
	this->hostname = hostname;
}

std::string
VpsOrderPutRequest::getRootpass()
{
	return rootpass;
}

void
VpsOrderPutRequest::setRootpass(std::string rootpass)
{
	this->rootpass = rootpass;
}

std::string
VpsOrderPutRequest::getControlpanel()
{
	return controlpanel;
}

void
VpsOrderPutRequest::setControlpanel(std::string controlpanel)
{
	this->controlpanel = controlpanel;
}

std::string
VpsOrderPutRequest::getCoupon()
{
	return coupon;
}

void
VpsOrderPutRequest::setCoupon(std::string coupon)
{
	this->coupon = coupon;
}

std::string
VpsOrderPutRequest::getComment()
{
	return comment;
}

void
VpsOrderPutRequest::setComment(std::string comment)
{
	this->comment = comment;
}



