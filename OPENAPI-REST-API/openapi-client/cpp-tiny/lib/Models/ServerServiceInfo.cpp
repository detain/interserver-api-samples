

#include "ServerServiceInfo.h"

using namespace Tiny;

ServerServiceInfo::ServerServiceInfo()
{
	server_id = std::string();
	server_hostname = std::string();
	server_custid = std::string();
	server_type = std::string();
	server_currency = std::string();
	server_order_date = std::string();
	server_invoice = std::string();
	server_coupon = std::string();
	server_status = std::string();
	server_root = std::string();
	server_dedicated_tag = std::string();
	server_custom_tag = std::string();
	server_comment = std::string();
	server_initial_bill = std::string();
	server_hardware = std::string();
	server_ips = std::string();
	server_monthly_bill = std::string();
	server_setup = std::string();
	server_discount = null;
	server_rep = std::string();
	server_date = std::string();
	server_total_cost = std::string();
	server_location = null;
	server_hardware_ordered = std::string();
	server_billed = std::string();
	server_welcome_email = std::string();
	server_dedicated_cpu = std::string();
	server_dedicated_memory = std::string();
	server_dedicated_hd1 = std::string();
	server_dedicated_hd2 = null;
	server_dedicated_bandwidth = std::string();
	server_dedicated_ips = std::string();
	server_dedicated_os = std::string();
	server_dedicated_cp = null;
	server_dedicated_raid = std::string();
	server_extra = std::string();
}

ServerServiceInfo::ServerServiceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerServiceInfo::~ServerServiceInfo()
{

}

void
ServerServiceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *server_idKey = "server_id";

    if(object.has_key(server_idKey))
    {
        bourne::json value = object[server_idKey];



        jsonToValue(&server_id, value, "std::string");


    }

    const char *server_hostnameKey = "server_hostname";

    if(object.has_key(server_hostnameKey))
    {
        bourne::json value = object[server_hostnameKey];



        jsonToValue(&server_hostname, value, "std::string");


    }

    const char *server_custidKey = "server_custid";

    if(object.has_key(server_custidKey))
    {
        bourne::json value = object[server_custidKey];



        jsonToValue(&server_custid, value, "std::string");


    }

    const char *server_typeKey = "server_type";

    if(object.has_key(server_typeKey))
    {
        bourne::json value = object[server_typeKey];



        jsonToValue(&server_type, value, "std::string");


    }

    const char *server_currencyKey = "server_currency";

    if(object.has_key(server_currencyKey))
    {
        bourne::json value = object[server_currencyKey];



        jsonToValue(&server_currency, value, "std::string");


    }

    const char *server_order_dateKey = "server_order_date";

    if(object.has_key(server_order_dateKey))
    {
        bourne::json value = object[server_order_dateKey];



        jsonToValue(&server_order_date, value, "std::string");


    }

    const char *server_invoiceKey = "server_invoice";

    if(object.has_key(server_invoiceKey))
    {
        bourne::json value = object[server_invoiceKey];



        jsonToValue(&server_invoice, value, "std::string");


    }

    const char *server_couponKey = "server_coupon";

    if(object.has_key(server_couponKey))
    {
        bourne::json value = object[server_couponKey];



        jsonToValue(&server_coupon, value, "std::string");


    }

    const char *server_statusKey = "server_status";

    if(object.has_key(server_statusKey))
    {
        bourne::json value = object[server_statusKey];



        jsonToValue(&server_status, value, "std::string");


    }

    const char *server_rootKey = "server_root";

    if(object.has_key(server_rootKey))
    {
        bourne::json value = object[server_rootKey];



        jsonToValue(&server_root, value, "std::string");


    }

    const char *server_dedicated_tagKey = "server_dedicated_tag";

    if(object.has_key(server_dedicated_tagKey))
    {
        bourne::json value = object[server_dedicated_tagKey];



        jsonToValue(&server_dedicated_tag, value, "std::string");


    }

    const char *server_custom_tagKey = "server_custom_tag";

    if(object.has_key(server_custom_tagKey))
    {
        bourne::json value = object[server_custom_tagKey];



        jsonToValue(&server_custom_tag, value, "std::string");


    }

    const char *server_commentKey = "server_comment";

    if(object.has_key(server_commentKey))
    {
        bourne::json value = object[server_commentKey];



        jsonToValue(&server_comment, value, "std::string");


    }

    const char *server_initial_billKey = "server_initial_bill";

    if(object.has_key(server_initial_billKey))
    {
        bourne::json value = object[server_initial_billKey];



        jsonToValue(&server_initial_bill, value, "std::string");


    }

    const char *server_hardwareKey = "server_hardware";

    if(object.has_key(server_hardwareKey))
    {
        bourne::json value = object[server_hardwareKey];



        jsonToValue(&server_hardware, value, "std::string");


    }

    const char *server_ipsKey = "server_ips";

    if(object.has_key(server_ipsKey))
    {
        bourne::json value = object[server_ipsKey];



        jsonToValue(&server_ips, value, "std::string");


    }

    const char *server_monthly_billKey = "server_monthly_bill";

    if(object.has_key(server_monthly_billKey))
    {
        bourne::json value = object[server_monthly_billKey];



        jsonToValue(&server_monthly_bill, value, "std::string");


    }

    const char *server_setupKey = "server_setup";

    if(object.has_key(server_setupKey))
    {
        bourne::json value = object[server_setupKey];



        jsonToValue(&server_setup, value, "std::string");


    }

    const char *server_discountKey = "server_discount";

    if(object.has_key(server_discountKey))
    {
        bourne::json value = object[server_discountKey];




        AnyType* obj = &server_discount;
		obj->fromJson(value.dump());

    }

    const char *server_repKey = "server_rep";

    if(object.has_key(server_repKey))
    {
        bourne::json value = object[server_repKey];



        jsonToValue(&server_rep, value, "std::string");


    }

    const char *server_dateKey = "server_date";

    if(object.has_key(server_dateKey))
    {
        bourne::json value = object[server_dateKey];



        jsonToValue(&server_date, value, "std::string");


    }

    const char *server_total_costKey = "server_total_cost";

    if(object.has_key(server_total_costKey))
    {
        bourne::json value = object[server_total_costKey];



        jsonToValue(&server_total_cost, value, "std::string");


    }

    const char *server_locationKey = "server_location";

    if(object.has_key(server_locationKey))
    {
        bourne::json value = object[server_locationKey];




        AnyType* obj = &server_location;
		obj->fromJson(value.dump());

    }

    const char *server_hardware_orderedKey = "server_hardware_ordered";

    if(object.has_key(server_hardware_orderedKey))
    {
        bourne::json value = object[server_hardware_orderedKey];



        jsonToValue(&server_hardware_ordered, value, "std::string");


    }

    const char *server_billedKey = "server_billed";

    if(object.has_key(server_billedKey))
    {
        bourne::json value = object[server_billedKey];



        jsonToValue(&server_billed, value, "std::string");


    }

    const char *server_welcome_emailKey = "server_welcome_email";

    if(object.has_key(server_welcome_emailKey))
    {
        bourne::json value = object[server_welcome_emailKey];



        jsonToValue(&server_welcome_email, value, "std::string");


    }

    const char *server_dedicated_cpuKey = "server_dedicated_cpu";

    if(object.has_key(server_dedicated_cpuKey))
    {
        bourne::json value = object[server_dedicated_cpuKey];



        jsonToValue(&server_dedicated_cpu, value, "std::string");


    }

    const char *server_dedicated_memoryKey = "server_dedicated_memory";

    if(object.has_key(server_dedicated_memoryKey))
    {
        bourne::json value = object[server_dedicated_memoryKey];



        jsonToValue(&server_dedicated_memory, value, "std::string");


    }

    const char *server_dedicated_hd1Key = "server_dedicated_hd1";

    if(object.has_key(server_dedicated_hd1Key))
    {
        bourne::json value = object[server_dedicated_hd1Key];



        jsonToValue(&server_dedicated_hd1, value, "std::string");


    }

    const char *server_dedicated_hd2Key = "server_dedicated_hd2";

    if(object.has_key(server_dedicated_hd2Key))
    {
        bourne::json value = object[server_dedicated_hd2Key];




        AnyType* obj = &server_dedicated_hd2;
		obj->fromJson(value.dump());

    }

    const char *server_dedicated_bandwidthKey = "server_dedicated_bandwidth";

    if(object.has_key(server_dedicated_bandwidthKey))
    {
        bourne::json value = object[server_dedicated_bandwidthKey];



        jsonToValue(&server_dedicated_bandwidth, value, "std::string");


    }

    const char *server_dedicated_ipsKey = "server_dedicated_ips";

    if(object.has_key(server_dedicated_ipsKey))
    {
        bourne::json value = object[server_dedicated_ipsKey];



        jsonToValue(&server_dedicated_ips, value, "std::string");


    }

    const char *server_dedicated_osKey = "server_dedicated_os";

    if(object.has_key(server_dedicated_osKey))
    {
        bourne::json value = object[server_dedicated_osKey];



        jsonToValue(&server_dedicated_os, value, "std::string");


    }

    const char *server_dedicated_cpKey = "server_dedicated_cp";

    if(object.has_key(server_dedicated_cpKey))
    {
        bourne::json value = object[server_dedicated_cpKey];




        AnyType* obj = &server_dedicated_cp;
		obj->fromJson(value.dump());

    }

    const char *server_dedicated_raidKey = "server_dedicated_raid";

    if(object.has_key(server_dedicated_raidKey))
    {
        bourne::json value = object[server_dedicated_raidKey];



        jsonToValue(&server_dedicated_raid, value, "std::string");


    }

    const char *server_extraKey = "server_extra";

    if(object.has_key(server_extraKey))
    {
        bourne::json value = object[server_extraKey];



        jsonToValue(&server_extra, value, "std::string");


    }


}

bourne::json
ServerServiceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["server_id"] = getServerId();






    object["server_hostname"] = getServerHostname();






    object["server_custid"] = getServerCustid();






    object["server_type"] = getServerType();






    object["server_currency"] = getServerCurrency();






    object["server_order_date"] = getServerOrderDate();






    object["server_invoice"] = getServerInvoice();






    object["server_coupon"] = getServerCoupon();






    object["server_status"] = getServerStatus();






    object["server_root"] = getServerRoot();






    object["server_dedicated_tag"] = getServerDedicatedTag();






    object["server_custom_tag"] = getServerCustomTag();






    object["server_comment"] = getServerComment();






    object["server_initial_bill"] = getServerInitialBill();






    object["server_hardware"] = getServerHardware();






    object["server_ips"] = getServerIps();






    object["server_monthly_bill"] = getServerMonthlyBill();






    object["server_setup"] = getServerSetup();







	object["server_discount"] = getServerDiscount().toJson();





    object["server_rep"] = getServerRep();






    object["server_date"] = getServerDate();






    object["server_total_cost"] = getServerTotalCost();







	object["server_location"] = getServerLocation().toJson();





    object["server_hardware_ordered"] = getServerHardwareOrdered();






    object["server_billed"] = getServerBilled();






    object["server_welcome_email"] = getServerWelcomeEmail();






    object["server_dedicated_cpu"] = getServerDedicatedCpu();






    object["server_dedicated_memory"] = getServerDedicatedMemory();






    object["server_dedicated_hd1"] = getServerDedicatedHd1();







	object["server_dedicated_hd2"] = getServerDedicatedHd2().toJson();





    object["server_dedicated_bandwidth"] = getServerDedicatedBandwidth();






    object["server_dedicated_ips"] = getServerDedicatedIps();






    object["server_dedicated_os"] = getServerDedicatedOs();







	object["server_dedicated_cp"] = getServerDedicatedCp().toJson();





    object["server_dedicated_raid"] = getServerDedicatedRaid();






    object["server_extra"] = getServerExtra();



    return object;

}

std::string
ServerServiceInfo::getServerId()
{
	return server_id;
}

void
ServerServiceInfo::setServerId(std::string server_id)
{
	this->server_id = server_id;
}

std::string
ServerServiceInfo::getServerHostname()
{
	return server_hostname;
}

void
ServerServiceInfo::setServerHostname(std::string server_hostname)
{
	this->server_hostname = server_hostname;
}

std::string
ServerServiceInfo::getServerCustid()
{
	return server_custid;
}

void
ServerServiceInfo::setServerCustid(std::string server_custid)
{
	this->server_custid = server_custid;
}

std::string
ServerServiceInfo::getServerType()
{
	return server_type;
}

void
ServerServiceInfo::setServerType(std::string server_type)
{
	this->server_type = server_type;
}

std::string
ServerServiceInfo::getServerCurrency()
{
	return server_currency;
}

void
ServerServiceInfo::setServerCurrency(std::string server_currency)
{
	this->server_currency = server_currency;
}

std::string
ServerServiceInfo::getServerOrderDate()
{
	return server_order_date;
}

void
ServerServiceInfo::setServerOrderDate(std::string server_order_date)
{
	this->server_order_date = server_order_date;
}

std::string
ServerServiceInfo::getServerInvoice()
{
	return server_invoice;
}

void
ServerServiceInfo::setServerInvoice(std::string server_invoice)
{
	this->server_invoice = server_invoice;
}

std::string
ServerServiceInfo::getServerCoupon()
{
	return server_coupon;
}

void
ServerServiceInfo::setServerCoupon(std::string server_coupon)
{
	this->server_coupon = server_coupon;
}

std::string
ServerServiceInfo::getServerStatus()
{
	return server_status;
}

void
ServerServiceInfo::setServerStatus(std::string server_status)
{
	this->server_status = server_status;
}

std::string
ServerServiceInfo::getServerRoot()
{
	return server_root;
}

void
ServerServiceInfo::setServerRoot(std::string server_root)
{
	this->server_root = server_root;
}

std::string
ServerServiceInfo::getServerDedicatedTag()
{
	return server_dedicated_tag;
}

void
ServerServiceInfo::setServerDedicatedTag(std::string server_dedicated_tag)
{
	this->server_dedicated_tag = server_dedicated_tag;
}

std::string
ServerServiceInfo::getServerCustomTag()
{
	return server_custom_tag;
}

void
ServerServiceInfo::setServerCustomTag(std::string server_custom_tag)
{
	this->server_custom_tag = server_custom_tag;
}

std::string
ServerServiceInfo::getServerComment()
{
	return server_comment;
}

void
ServerServiceInfo::setServerComment(std::string server_comment)
{
	this->server_comment = server_comment;
}

std::string
ServerServiceInfo::getServerInitialBill()
{
	return server_initial_bill;
}

void
ServerServiceInfo::setServerInitialBill(std::string server_initial_bill)
{
	this->server_initial_bill = server_initial_bill;
}

std::string
ServerServiceInfo::getServerHardware()
{
	return server_hardware;
}

void
ServerServiceInfo::setServerHardware(std::string server_hardware)
{
	this->server_hardware = server_hardware;
}

std::string
ServerServiceInfo::getServerIps()
{
	return server_ips;
}

void
ServerServiceInfo::setServerIps(std::string server_ips)
{
	this->server_ips = server_ips;
}

std::string
ServerServiceInfo::getServerMonthlyBill()
{
	return server_monthly_bill;
}

void
ServerServiceInfo::setServerMonthlyBill(std::string server_monthly_bill)
{
	this->server_monthly_bill = server_monthly_bill;
}

std::string
ServerServiceInfo::getServerSetup()
{
	return server_setup;
}

void
ServerServiceInfo::setServerSetup(std::string server_setup)
{
	this->server_setup = server_setup;
}

AnyType
ServerServiceInfo::getServerDiscount()
{
	return server_discount;
}

void
ServerServiceInfo::setServerDiscount(AnyType server_discount)
{
	this->server_discount = server_discount;
}

std::string
ServerServiceInfo::getServerRep()
{
	return server_rep;
}

void
ServerServiceInfo::setServerRep(std::string server_rep)
{
	this->server_rep = server_rep;
}

std::string
ServerServiceInfo::getServerDate()
{
	return server_date;
}

void
ServerServiceInfo::setServerDate(std::string server_date)
{
	this->server_date = server_date;
}

std::string
ServerServiceInfo::getServerTotalCost()
{
	return server_total_cost;
}

void
ServerServiceInfo::setServerTotalCost(std::string server_total_cost)
{
	this->server_total_cost = server_total_cost;
}

AnyType
ServerServiceInfo::getServerLocation()
{
	return server_location;
}

void
ServerServiceInfo::setServerLocation(AnyType server_location)
{
	this->server_location = server_location;
}

std::string
ServerServiceInfo::getServerHardwareOrdered()
{
	return server_hardware_ordered;
}

void
ServerServiceInfo::setServerHardwareOrdered(std::string server_hardware_ordered)
{
	this->server_hardware_ordered = server_hardware_ordered;
}

std::string
ServerServiceInfo::getServerBilled()
{
	return server_billed;
}

void
ServerServiceInfo::setServerBilled(std::string server_billed)
{
	this->server_billed = server_billed;
}

std::string
ServerServiceInfo::getServerWelcomeEmail()
{
	return server_welcome_email;
}

void
ServerServiceInfo::setServerWelcomeEmail(std::string server_welcome_email)
{
	this->server_welcome_email = server_welcome_email;
}

std::string
ServerServiceInfo::getServerDedicatedCpu()
{
	return server_dedicated_cpu;
}

void
ServerServiceInfo::setServerDedicatedCpu(std::string server_dedicated_cpu)
{
	this->server_dedicated_cpu = server_dedicated_cpu;
}

std::string
ServerServiceInfo::getServerDedicatedMemory()
{
	return server_dedicated_memory;
}

void
ServerServiceInfo::setServerDedicatedMemory(std::string server_dedicated_memory)
{
	this->server_dedicated_memory = server_dedicated_memory;
}

std::string
ServerServiceInfo::getServerDedicatedHd1()
{
	return server_dedicated_hd1;
}

void
ServerServiceInfo::setServerDedicatedHd1(std::string server_dedicated_hd1)
{
	this->server_dedicated_hd1 = server_dedicated_hd1;
}

AnyType
ServerServiceInfo::getServerDedicatedHd2()
{
	return server_dedicated_hd2;
}

void
ServerServiceInfo::setServerDedicatedHd2(AnyType server_dedicated_hd2)
{
	this->server_dedicated_hd2 = server_dedicated_hd2;
}

std::string
ServerServiceInfo::getServerDedicatedBandwidth()
{
	return server_dedicated_bandwidth;
}

void
ServerServiceInfo::setServerDedicatedBandwidth(std::string server_dedicated_bandwidth)
{
	this->server_dedicated_bandwidth = server_dedicated_bandwidth;
}

std::string
ServerServiceInfo::getServerDedicatedIps()
{
	return server_dedicated_ips;
}

void
ServerServiceInfo::setServerDedicatedIps(std::string server_dedicated_ips)
{
	this->server_dedicated_ips = server_dedicated_ips;
}

std::string
ServerServiceInfo::getServerDedicatedOs()
{
	return server_dedicated_os;
}

void
ServerServiceInfo::setServerDedicatedOs(std::string server_dedicated_os)
{
	this->server_dedicated_os = server_dedicated_os;
}

AnyType
ServerServiceInfo::getServerDedicatedCp()
{
	return server_dedicated_cp;
}

void
ServerServiceInfo::setServerDedicatedCp(AnyType server_dedicated_cp)
{
	this->server_dedicated_cp = server_dedicated_cp;
}

std::string
ServerServiceInfo::getServerDedicatedRaid()
{
	return server_dedicated_raid;
}

void
ServerServiceInfo::setServerDedicatedRaid(std::string server_dedicated_raid)
{
	this->server_dedicated_raid = server_dedicated_raid;
}

std::string
ServerServiceInfo::getServerExtra()
{
	return server_extra;
}

void
ServerServiceInfo::setServerExtra(std::string server_extra)
{
	this->server_extra = server_extra;
}



