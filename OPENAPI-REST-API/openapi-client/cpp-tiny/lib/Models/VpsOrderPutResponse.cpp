

#include "VpsOrderPutResponse.h"

using namespace Tiny;

VpsOrderPutResponse::VpsOrderPutResponse()
{
	r_continue = bool(false);
	errors = std::list<AnyType>();
	coupon_code = int(0);
	service_cost = int(0);
	slice_cost = int(0);
	service_type = int(0);
	repeat_slice_cost = int(0);
	original_slice_cost = int(0);
	original_cost = int(0);
	repeat_service_cost = int(0);
	monthly_service_cost = int(0);
	custid = std::string();
	os = std::string();
	slices = std::string();
	platform = std::string();
	controlpanel = std::string();
	period = int(0);
	location = int(0);
	version = std::string();
	hostname = std::string();
	coupon = std::string();
	rootpass = std::string();
}

VpsOrderPutResponse::VpsOrderPutResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrderPutResponse::~VpsOrderPutResponse()
{

}

void
VpsOrderPutResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *r_continueKey = "continue";

    if(object.has_key(r_continueKey))
    {
        bourne::json value = object[r_continueKey];



        jsonToValue(&r_continue, value, "bool");


    }

    const char *errorsKey = "errors";

    if(object.has_key(errorsKey))
    {
        bourne::json value = object[errorsKey];


        std::list<AnyType> errors_list;
        AnyType element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            errors_list.push_back(element);
        }
        errors = errors_list;


    }

    const char *coupon_codeKey = "coupon_code";

    if(object.has_key(coupon_codeKey))
    {
        bourne::json value = object[coupon_codeKey];



        jsonToValue(&coupon_code, value, "int");


    }

    const char *service_costKey = "service_cost";

    if(object.has_key(service_costKey))
    {
        bourne::json value = object[service_costKey];



        jsonToValue(&service_cost, value, "int");


    }

    const char *slice_costKey = "slice_cost";

    if(object.has_key(slice_costKey))
    {
        bourne::json value = object[slice_costKey];



        jsonToValue(&slice_cost, value, "int");


    }

    const char *service_typeKey = "service_type";

    if(object.has_key(service_typeKey))
    {
        bourne::json value = object[service_typeKey];



        jsonToValue(&service_type, value, "int");


    }

    const char *repeat_slice_costKey = "repeat_slice_cost";

    if(object.has_key(repeat_slice_costKey))
    {
        bourne::json value = object[repeat_slice_costKey];



        jsonToValue(&repeat_slice_cost, value, "int");


    }

    const char *original_slice_costKey = "original_slice_cost";

    if(object.has_key(original_slice_costKey))
    {
        bourne::json value = object[original_slice_costKey];



        jsonToValue(&original_slice_cost, value, "int");


    }

    const char *original_costKey = "original_cost";

    if(object.has_key(original_costKey))
    {
        bourne::json value = object[original_costKey];



        jsonToValue(&original_cost, value, "int");


    }

    const char *repeat_service_costKey = "repeat_service_cost";

    if(object.has_key(repeat_service_costKey))
    {
        bourne::json value = object[repeat_service_costKey];



        jsonToValue(&repeat_service_cost, value, "int");


    }

    const char *monthly_service_costKey = "monthly_service_cost";

    if(object.has_key(monthly_service_costKey))
    {
        bourne::json value = object[monthly_service_costKey];



        jsonToValue(&monthly_service_cost, value, "int");


    }

    const char *custidKey = "custid";

    if(object.has_key(custidKey))
    {
        bourne::json value = object[custidKey];



        jsonToValue(&custid, value, "std::string");


    }

    const char *osKey = "os";

    if(object.has_key(osKey))
    {
        bourne::json value = object[osKey];



        jsonToValue(&os, value, "std::string");


    }

    const char *slicesKey = "slices";

    if(object.has_key(slicesKey))
    {
        bourne::json value = object[slicesKey];



        jsonToValue(&slices, value, "std::string");


    }

    const char *platformKey = "platform";

    if(object.has_key(platformKey))
    {
        bourne::json value = object[platformKey];



        jsonToValue(&platform, value, "std::string");


    }

    const char *controlpanelKey = "controlpanel";

    if(object.has_key(controlpanelKey))
    {
        bourne::json value = object[controlpanelKey];



        jsonToValue(&controlpanel, value, "std::string");


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

    const char *versionKey = "version";

    if(object.has_key(versionKey))
    {
        bourne::json value = object[versionKey];



        jsonToValue(&version, value, "std::string");


    }

    const char *hostnameKey = "hostname";

    if(object.has_key(hostnameKey))
    {
        bourne::json value = object[hostnameKey];



        jsonToValue(&hostname, value, "std::string");


    }

    const char *couponKey = "coupon";

    if(object.has_key(couponKey))
    {
        bourne::json value = object[couponKey];



        jsonToValue(&coupon, value, "std::string");


    }

    const char *rootpassKey = "rootpass";

    if(object.has_key(rootpassKey))
    {
        bourne::json value = object[rootpassKey];



        jsonToValue(&rootpass, value, "std::string");


    }


}

bourne::json
VpsOrderPutResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["r_continue"] = isRContinue();





    std::list<AnyType> errors_list = getErrors();
    bourne::json errors_arr = bourne::json::array();

    for(auto& var : errors_list)
    {
        AnyType obj = var;
        errors_arr.append(obj.toJson());
    }
    object["errors"] = errors_arr;







    object["coupon_code"] = getCouponCode();






    object["service_cost"] = getServiceCost();






    object["slice_cost"] = getSliceCost();






    object["service_type"] = getServiceType();






    object["repeat_slice_cost"] = getRepeatSliceCost();






    object["original_slice_cost"] = getOriginalSliceCost();






    object["original_cost"] = getOriginalCost();






    object["repeat_service_cost"] = getRepeatServiceCost();






    object["monthly_service_cost"] = getMonthlyServiceCost();






    object["custid"] = getCustid();






    object["os"] = getOs();






    object["slices"] = getSlices();






    object["platform"] = getPlatform();






    object["controlpanel"] = getControlpanel();






    object["period"] = getPeriod();






    object["location"] = getLocation();






    object["version"] = getVersion();






    object["hostname"] = getHostname();






    object["coupon"] = getCoupon();






    object["rootpass"] = getRootpass();



    return object;

}

bool
VpsOrderPutResponse::isRContinue()
{
	return r_continue;
}

void
VpsOrderPutResponse::setRContinue(bool r_continue)
{
	this->r_continue = r_continue;
}

std::list<AnyType>
VpsOrderPutResponse::getErrors()
{
	return errors;
}

void
VpsOrderPutResponse::setErrors(std::list<AnyType> errors)
{
	this->errors = errors;
}

int
VpsOrderPutResponse::getCouponCode()
{
	return coupon_code;
}

void
VpsOrderPutResponse::setCouponCode(int coupon_code)
{
	this->coupon_code = coupon_code;
}

int
VpsOrderPutResponse::getServiceCost()
{
	return service_cost;
}

void
VpsOrderPutResponse::setServiceCost(int service_cost)
{
	this->service_cost = service_cost;
}

int
VpsOrderPutResponse::getSliceCost()
{
	return slice_cost;
}

void
VpsOrderPutResponse::setSliceCost(int slice_cost)
{
	this->slice_cost = slice_cost;
}

int
VpsOrderPutResponse::getServiceType()
{
	return service_type;
}

void
VpsOrderPutResponse::setServiceType(int service_type)
{
	this->service_type = service_type;
}

int
VpsOrderPutResponse::getRepeatSliceCost()
{
	return repeat_slice_cost;
}

void
VpsOrderPutResponse::setRepeatSliceCost(int repeat_slice_cost)
{
	this->repeat_slice_cost = repeat_slice_cost;
}

int
VpsOrderPutResponse::getOriginalSliceCost()
{
	return original_slice_cost;
}

void
VpsOrderPutResponse::setOriginalSliceCost(int original_slice_cost)
{
	this->original_slice_cost = original_slice_cost;
}

int
VpsOrderPutResponse::getOriginalCost()
{
	return original_cost;
}

void
VpsOrderPutResponse::setOriginalCost(int original_cost)
{
	this->original_cost = original_cost;
}

int
VpsOrderPutResponse::getRepeatServiceCost()
{
	return repeat_service_cost;
}

void
VpsOrderPutResponse::setRepeatServiceCost(int repeat_service_cost)
{
	this->repeat_service_cost = repeat_service_cost;
}

int
VpsOrderPutResponse::getMonthlyServiceCost()
{
	return monthly_service_cost;
}

void
VpsOrderPutResponse::setMonthlyServiceCost(int monthly_service_cost)
{
	this->monthly_service_cost = monthly_service_cost;
}

std::string
VpsOrderPutResponse::getCustid()
{
	return custid;
}

void
VpsOrderPutResponse::setCustid(std::string custid)
{
	this->custid = custid;
}

std::string
VpsOrderPutResponse::getOs()
{
	return os;
}

void
VpsOrderPutResponse::setOs(std::string os)
{
	this->os = os;
}

std::string
VpsOrderPutResponse::getSlices()
{
	return slices;
}

void
VpsOrderPutResponse::setSlices(std::string slices)
{
	this->slices = slices;
}

std::string
VpsOrderPutResponse::getPlatform()
{
	return platform;
}

void
VpsOrderPutResponse::setPlatform(std::string platform)
{
	this->platform = platform;
}

std::string
VpsOrderPutResponse::getControlpanel()
{
	return controlpanel;
}

void
VpsOrderPutResponse::setControlpanel(std::string controlpanel)
{
	this->controlpanel = controlpanel;
}

int
VpsOrderPutResponse::getPeriod()
{
	return period;
}

void
VpsOrderPutResponse::setPeriod(int period)
{
	this->period = period;
}

int
VpsOrderPutResponse::getLocation()
{
	return location;
}

void
VpsOrderPutResponse::setLocation(int location)
{
	this->location = location;
}

std::string
VpsOrderPutResponse::getVersion()
{
	return version;
}

void
VpsOrderPutResponse::setVersion(std::string version)
{
	this->version = version;
}

std::string
VpsOrderPutResponse::getHostname()
{
	return hostname;
}

void
VpsOrderPutResponse::setHostname(std::string hostname)
{
	this->hostname = hostname;
}

std::string
VpsOrderPutResponse::getCoupon()
{
	return coupon;
}

void
VpsOrderPutResponse::setCoupon(std::string coupon)
{
	this->coupon = coupon;
}

std::string
VpsOrderPutResponse::getRootpass()
{
	return rootpass;
}

void
VpsOrderPutResponse::setRootpass(std::string rootpass)
{
	this->rootpass = rootpass;
}



