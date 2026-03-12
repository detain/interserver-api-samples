

#include "LicenseBillingDetails.h"

using namespace Tiny;

LicenseBillingDetails::LicenseBillingDetails()
{
	service_last_invoice_date = std::string();
	service_payment_status = std::string();
	service_frequency = std::string();
	next_date = std::string();
	service_next_invoice_date = std::string();
	service_currency = std::string();
	service_currency_symbol = std::string();
	service_coupon = std::string();
	service_cost_info = std::string();
	service_extra = std::list<std::string>();
	service_extra_json = std::string();
}

LicenseBillingDetails::LicenseBillingDetails(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicenseBillingDetails::~LicenseBillingDetails()
{

}

void
LicenseBillingDetails::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *service_last_invoice_dateKey = "service_last_invoice_date";

    if(object.has_key(service_last_invoice_dateKey))
    {
        bourne::json value = object[service_last_invoice_dateKey];



        jsonToValue(&service_last_invoice_date, value, "std::string");


    }

    const char *service_payment_statusKey = "service_payment_status";

    if(object.has_key(service_payment_statusKey))
    {
        bourne::json value = object[service_payment_statusKey];



        jsonToValue(&service_payment_status, value, "std::string");


    }

    const char *service_frequencyKey = "service_frequency";

    if(object.has_key(service_frequencyKey))
    {
        bourne::json value = object[service_frequencyKey];



        jsonToValue(&service_frequency, value, "std::string");


    }

    const char *next_dateKey = "next_date";

    if(object.has_key(next_dateKey))
    {
        bourne::json value = object[next_dateKey];



        jsonToValue(&next_date, value, "std::string");


    }

    const char *service_next_invoice_dateKey = "service_next_invoice_date";

    if(object.has_key(service_next_invoice_dateKey))
    {
        bourne::json value = object[service_next_invoice_dateKey];



        jsonToValue(&service_next_invoice_date, value, "std::string");


    }

    const char *service_currencyKey = "service_currency";

    if(object.has_key(service_currencyKey))
    {
        bourne::json value = object[service_currencyKey];



        jsonToValue(&service_currency, value, "std::string");


    }

    const char *service_currency_symbolKey = "service_currency_symbol";

    if(object.has_key(service_currency_symbolKey))
    {
        bourne::json value = object[service_currency_symbolKey];



        jsonToValue(&service_currency_symbol, value, "std::string");


    }

    const char *service_couponKey = "service_coupon";

    if(object.has_key(service_couponKey))
    {
        bourne::json value = object[service_couponKey];



        jsonToValue(&service_coupon, value, "std::string");


    }

    const char *service_cost_infoKey = "service_cost_info";

    if(object.has_key(service_cost_infoKey))
    {
        bourne::json value = object[service_cost_infoKey];



        jsonToValue(&service_cost_info, value, "std::string");


    }

    const char *service_extraKey = "service_extra";

    if(object.has_key(service_extraKey))
    {
        bourne::json value = object[service_extraKey];


        std::list<std::string> service_extra_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            service_extra_list.push_back(element);
        }
        service_extra = service_extra_list;


    }

    const char *service_extra_jsonKey = "service_extra_json";

    if(object.has_key(service_extra_jsonKey))
    {
        bourne::json value = object[service_extra_jsonKey];



        jsonToValue(&service_extra_json, value, "std::string");


    }


}

bourne::json
LicenseBillingDetails::toJson()
{
    bourne::json object = bourne::json::object();





    object["service_last_invoice_date"] = getServiceLastInvoiceDate();






    object["service_payment_status"] = getServicePaymentStatus();






    object["service_frequency"] = getServiceFrequency();






    object["next_date"] = getNextDate();






    object["service_next_invoice_date"] = getServiceNextInvoiceDate();






    object["service_currency"] = getServiceCurrency();






    object["service_currency_symbol"] = getServiceCurrencySymbol();






    object["service_coupon"] = getServiceCoupon();






    object["service_cost_info"] = getServiceCostInfo();





    std::list<std::string> service_extra_list = getServiceExtra();
    bourne::json service_extra_arr = bourne::json::array();

    for(auto& var : service_extra_list)
    {
        service_extra_arr.append(var);
    }
    object["service_extra"] = service_extra_arr;









    object["service_extra_json"] = getServiceExtraJson();



    return object;

}

std::string
LicenseBillingDetails::getServiceLastInvoiceDate()
{
	return service_last_invoice_date;
}

void
LicenseBillingDetails::setServiceLastInvoiceDate(std::string service_last_invoice_date)
{
	this->service_last_invoice_date = service_last_invoice_date;
}

std::string
LicenseBillingDetails::getServicePaymentStatus()
{
	return service_payment_status;
}

void
LicenseBillingDetails::setServicePaymentStatus(std::string service_payment_status)
{
	this->service_payment_status = service_payment_status;
}

std::string
LicenseBillingDetails::getServiceFrequency()
{
	return service_frequency;
}

void
LicenseBillingDetails::setServiceFrequency(std::string service_frequency)
{
	this->service_frequency = service_frequency;
}

std::string
LicenseBillingDetails::getNextDate()
{
	return next_date;
}

void
LicenseBillingDetails::setNextDate(std::string next_date)
{
	this->next_date = next_date;
}

std::string
LicenseBillingDetails::getServiceNextInvoiceDate()
{
	return service_next_invoice_date;
}

void
LicenseBillingDetails::setServiceNextInvoiceDate(std::string service_next_invoice_date)
{
	this->service_next_invoice_date = service_next_invoice_date;
}

std::string
LicenseBillingDetails::getServiceCurrency()
{
	return service_currency;
}

void
LicenseBillingDetails::setServiceCurrency(std::string service_currency)
{
	this->service_currency = service_currency;
}

std::string
LicenseBillingDetails::getServiceCurrencySymbol()
{
	return service_currency_symbol;
}

void
LicenseBillingDetails::setServiceCurrencySymbol(std::string service_currency_symbol)
{
	this->service_currency_symbol = service_currency_symbol;
}

std::string
LicenseBillingDetails::getServiceCoupon()
{
	return service_coupon;
}

void
LicenseBillingDetails::setServiceCoupon(std::string service_coupon)
{
	this->service_coupon = service_coupon;
}

std::string
LicenseBillingDetails::getServiceCostInfo()
{
	return service_cost_info;
}

void
LicenseBillingDetails::setServiceCostInfo(std::string service_cost_info)
{
	this->service_cost_info = service_cost_info;
}

std::list<std::string>
LicenseBillingDetails::getServiceExtra()
{
	return service_extra;
}

void
LicenseBillingDetails::setServiceExtra(std::list<std::string> service_extra)
{
	this->service_extra = service_extra;
}

std::string
LicenseBillingDetails::getServiceExtraJson()
{
	return service_extra_json;
}

void
LicenseBillingDetails::setServiceExtraJson(std::string service_extra_json)
{
	this->service_extra_json = service_extra_json;
}



