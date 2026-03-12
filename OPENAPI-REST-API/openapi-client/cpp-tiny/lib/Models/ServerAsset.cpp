

#include "ServerAsset.h"

using namespace Tiny;

ServerAsset::ServerAsset()
{
	id = int(0);
	order_id = std::string();
	hostname = std::string();
	status = std::string();
	primary_ipv4 = std::string();
	primary_ipv6 = std::string();
	datacenter = std::string();
	type_id = std::string();
	asset_tag = std::string();
	rack = std::string();
	row = std::string();
	col = std::string();
	unit_start = std::string();
	unit_end = std::string();
	unit_sub = std::string();
	ipmi_mac = std::string();
	ipmi_ip = std::string();
	ipmi_working = std::string();
	company = std::string();
	comments = std::string();
	make = std::string();
	model = std::string();
	description = std::string();
	customer_id = std::string();
	external_id = std::string();
	billing_status = std::string();
	overdue = std::string();
	asset_id = std::string();
	asset_name = std::string();
	rack_id = std::string();
	rack_name = std::string();
	rack_location = std::string();
	rack_size = std::string();
	rack_x = std::string();
	rack_y = std::string();
	switchports = std::list<int>();
	vlans = std::list<std::string>();
	vlans6 = std::list<std::string>();
	lease = ServerLease();
	mac = null;
	ipmi_admin_username = null;
	ipmi_admin_password = null;
	ipmi_client_username = null;
	ipmi_client_password = null;
	ipmi_updated = null;
	create_timestamp = null;
	update_timestamp = null;
	comment = null;
}

ServerAsset::ServerAsset(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerAsset::~ServerAsset()
{

}

void
ServerAsset::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *order_idKey = "order_id";

    if(object.has_key(order_idKey))
    {
        bourne::json value = object[order_idKey];



        jsonToValue(&order_id, value, "std::string");


    }

    const char *hostnameKey = "hostname";

    if(object.has_key(hostnameKey))
    {
        bourne::json value = object[hostnameKey];



        jsonToValue(&hostname, value, "std::string");


    }

    const char *statusKey = "status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }

    const char *primary_ipv4Key = "primary_ipv4";

    if(object.has_key(primary_ipv4Key))
    {
        bourne::json value = object[primary_ipv4Key];



        jsonToValue(&primary_ipv4, value, "std::string");


    }

    const char *primary_ipv6Key = "primary_ipv6";

    if(object.has_key(primary_ipv6Key))
    {
        bourne::json value = object[primary_ipv6Key];



        jsonToValue(&primary_ipv6, value, "std::string");


    }

    const char *datacenterKey = "datacenter";

    if(object.has_key(datacenterKey))
    {
        bourne::json value = object[datacenterKey];



        jsonToValue(&datacenter, value, "std::string");


    }

    const char *type_idKey = "type_id";

    if(object.has_key(type_idKey))
    {
        bourne::json value = object[type_idKey];



        jsonToValue(&type_id, value, "std::string");


    }

    const char *asset_tagKey = "asset_tag";

    if(object.has_key(asset_tagKey))
    {
        bourne::json value = object[asset_tagKey];



        jsonToValue(&asset_tag, value, "std::string");


    }

    const char *rackKey = "rack";

    if(object.has_key(rackKey))
    {
        bourne::json value = object[rackKey];



        jsonToValue(&rack, value, "std::string");


    }

    const char *rowKey = "row";

    if(object.has_key(rowKey))
    {
        bourne::json value = object[rowKey];



        jsonToValue(&row, value, "std::string");


    }

    const char *colKey = "col";

    if(object.has_key(colKey))
    {
        bourne::json value = object[colKey];



        jsonToValue(&col, value, "std::string");


    }

    const char *unit_startKey = "unit_start";

    if(object.has_key(unit_startKey))
    {
        bourne::json value = object[unit_startKey];



        jsonToValue(&unit_start, value, "std::string");


    }

    const char *unit_endKey = "unit_end";

    if(object.has_key(unit_endKey))
    {
        bourne::json value = object[unit_endKey];



        jsonToValue(&unit_end, value, "std::string");


    }

    const char *unit_subKey = "unit_sub";

    if(object.has_key(unit_subKey))
    {
        bourne::json value = object[unit_subKey];



        jsonToValue(&unit_sub, value, "std::string");


    }

    const char *ipmi_macKey = "ipmi_mac";

    if(object.has_key(ipmi_macKey))
    {
        bourne::json value = object[ipmi_macKey];



        jsonToValue(&ipmi_mac, value, "std::string");


    }

    const char *ipmi_ipKey = "ipmi_ip";

    if(object.has_key(ipmi_ipKey))
    {
        bourne::json value = object[ipmi_ipKey];



        jsonToValue(&ipmi_ip, value, "std::string");


    }

    const char *ipmi_workingKey = "ipmi_working";

    if(object.has_key(ipmi_workingKey))
    {
        bourne::json value = object[ipmi_workingKey];



        jsonToValue(&ipmi_working, value, "std::string");


    }

    const char *companyKey = "company";

    if(object.has_key(companyKey))
    {
        bourne::json value = object[companyKey];



        jsonToValue(&company, value, "std::string");


    }

    const char *commentsKey = "comments";

    if(object.has_key(commentsKey))
    {
        bourne::json value = object[commentsKey];



        jsonToValue(&comments, value, "std::string");


    }

    const char *makeKey = "make";

    if(object.has_key(makeKey))
    {
        bourne::json value = object[makeKey];



        jsonToValue(&make, value, "std::string");


    }

    const char *modelKey = "model";

    if(object.has_key(modelKey))
    {
        bourne::json value = object[modelKey];



        jsonToValue(&model, value, "std::string");


    }

    const char *descriptionKey = "description";

    if(object.has_key(descriptionKey))
    {
        bourne::json value = object[descriptionKey];



        jsonToValue(&description, value, "std::string");


    }

    const char *customer_idKey = "customer_id";

    if(object.has_key(customer_idKey))
    {
        bourne::json value = object[customer_idKey];



        jsonToValue(&customer_id, value, "std::string");


    }

    const char *external_idKey = "external_id";

    if(object.has_key(external_idKey))
    {
        bourne::json value = object[external_idKey];



        jsonToValue(&external_id, value, "std::string");


    }

    const char *billing_statusKey = "billing_status";

    if(object.has_key(billing_statusKey))
    {
        bourne::json value = object[billing_statusKey];



        jsonToValue(&billing_status, value, "std::string");


    }

    const char *overdueKey = "overdue";

    if(object.has_key(overdueKey))
    {
        bourne::json value = object[overdueKey];



        jsonToValue(&overdue, value, "std::string");


    }

    const char *asset_idKey = "asset_id";

    if(object.has_key(asset_idKey))
    {
        bourne::json value = object[asset_idKey];



        jsonToValue(&asset_id, value, "std::string");


    }

    const char *asset_nameKey = "asset_name";

    if(object.has_key(asset_nameKey))
    {
        bourne::json value = object[asset_nameKey];



        jsonToValue(&asset_name, value, "std::string");


    }

    const char *rack_idKey = "rack_id";

    if(object.has_key(rack_idKey))
    {
        bourne::json value = object[rack_idKey];



        jsonToValue(&rack_id, value, "std::string");


    }

    const char *rack_nameKey = "rack_name";

    if(object.has_key(rack_nameKey))
    {
        bourne::json value = object[rack_nameKey];



        jsonToValue(&rack_name, value, "std::string");


    }

    const char *rack_locationKey = "rack_location";

    if(object.has_key(rack_locationKey))
    {
        bourne::json value = object[rack_locationKey];



        jsonToValue(&rack_location, value, "std::string");


    }

    const char *rack_sizeKey = "rack_size";

    if(object.has_key(rack_sizeKey))
    {
        bourne::json value = object[rack_sizeKey];



        jsonToValue(&rack_size, value, "std::string");


    }

    const char *rack_xKey = "rack_x";

    if(object.has_key(rack_xKey))
    {
        bourne::json value = object[rack_xKey];



        jsonToValue(&rack_x, value, "std::string");


    }

    const char *rack_yKey = "rack_y";

    if(object.has_key(rack_yKey))
    {
        bourne::json value = object[rack_yKey];



        jsonToValue(&rack_y, value, "std::string");


    }

    const char *switchportsKey = "switchports";

    if(object.has_key(switchportsKey))
    {
        bourne::json value = object[switchportsKey];


        std::list<int> switchports_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            switchports_list.push_back(element);
        }
        switchports = switchports_list;


    }

    const char *vlansKey = "vlans";

    if(object.has_key(vlansKey))
    {
        bourne::json value = object[vlansKey];


        std::list<std::string> vlans_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            vlans_list.push_back(element);
        }
        vlans = vlans_list;


    }

    const char *vlans6Key = "vlans6";

    if(object.has_key(vlans6Key))
    {
        bourne::json value = object[vlans6Key];


        std::list<std::string> vlans6_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            vlans6_list.push_back(element);
        }
        vlans6 = vlans6_list;


    }

    const char *leaseKey = "lease";

    if(object.has_key(leaseKey))
    {
        bourne::json value = object[leaseKey];




        ServerLease* obj = &lease;
		obj->fromJson(value.dump());

    }

    const char *macKey = "mac";

    if(object.has_key(macKey))
    {
        bourne::json value = object[macKey];




        AnyType* obj = &mac;
		obj->fromJson(value.dump());

    }

    const char *ipmi_admin_usernameKey = "ipmi_admin_username";

    if(object.has_key(ipmi_admin_usernameKey))
    {
        bourne::json value = object[ipmi_admin_usernameKey];




        AnyType* obj = &ipmi_admin_username;
		obj->fromJson(value.dump());

    }

    const char *ipmi_admin_passwordKey = "ipmi_admin_password";

    if(object.has_key(ipmi_admin_passwordKey))
    {
        bourne::json value = object[ipmi_admin_passwordKey];




        AnyType* obj = &ipmi_admin_password;
		obj->fromJson(value.dump());

    }

    const char *ipmi_client_usernameKey = "ipmi_client_username";

    if(object.has_key(ipmi_client_usernameKey))
    {
        bourne::json value = object[ipmi_client_usernameKey];




        AnyType* obj = &ipmi_client_username;
		obj->fromJson(value.dump());

    }

    const char *ipmi_client_passwordKey = "ipmi_client_password";

    if(object.has_key(ipmi_client_passwordKey))
    {
        bourne::json value = object[ipmi_client_passwordKey];




        AnyType* obj = &ipmi_client_password;
		obj->fromJson(value.dump());

    }

    const char *ipmi_updatedKey = "ipmi_updated";

    if(object.has_key(ipmi_updatedKey))
    {
        bourne::json value = object[ipmi_updatedKey];




        AnyType* obj = &ipmi_updated;
		obj->fromJson(value.dump());

    }

    const char *create_timestampKey = "create_timestamp";

    if(object.has_key(create_timestampKey))
    {
        bourne::json value = object[create_timestampKey];




        AnyType* obj = &create_timestamp;
		obj->fromJson(value.dump());

    }

    const char *update_timestampKey = "update_timestamp";

    if(object.has_key(update_timestampKey))
    {
        bourne::json value = object[update_timestampKey];




        AnyType* obj = &update_timestamp;
		obj->fromJson(value.dump());

    }

    const char *commentKey = "comment";

    if(object.has_key(commentKey))
    {
        bourne::json value = object[commentKey];




        AnyType* obj = &comment;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerAsset::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["order_id"] = getOrderId();






    object["hostname"] = getHostname();






    object["status"] = getStatus();






    object["primary_ipv4"] = getPrimaryIpv4();






    object["primary_ipv6"] = getPrimaryIpv6();






    object["datacenter"] = getDatacenter();






    object["type_id"] = getTypeId();






    object["asset_tag"] = getAssetTag();






    object["rack"] = getRack();






    object["row"] = getRow();






    object["col"] = getCol();






    object["unit_start"] = getUnitStart();






    object["unit_end"] = getUnitEnd();






    object["unit_sub"] = getUnitSub();






    object["ipmi_mac"] = getIpmiMac();






    object["ipmi_ip"] = getIpmiIp();






    object["ipmi_working"] = getIpmiWorking();






    object["company"] = getCompany();






    object["comments"] = getComments();






    object["make"] = getMake();






    object["model"] = getModel();






    object["description"] = getDescription();






    object["customer_id"] = getCustomerId();






    object["external_id"] = getExternalId();






    object["billing_status"] = getBillingStatus();






    object["overdue"] = getOverdue();






    object["asset_id"] = getAssetId();






    object["asset_name"] = getAssetName();






    object["rack_id"] = getRackId();






    object["rack_name"] = getRackName();






    object["rack_location"] = getRackLocation();






    object["rack_size"] = getRackSize();






    object["rack_x"] = getRackX();






    object["rack_y"] = getRackY();





    std::list<int> switchports_list = getSwitchports();
    bourne::json switchports_arr = bourne::json::array();

    for(auto& var : switchports_list)
    {
        switchports_arr.append(var);
    }
    object["switchports"] = switchports_arr;








    std::list<std::string> vlans_list = getVlans();
    bourne::json vlans_arr = bourne::json::array();

    for(auto& var : vlans_list)
    {
        vlans_arr.append(var);
    }
    object["vlans"] = vlans_arr;








    std::list<std::string> vlans6_list = getVlans6();
    bourne::json vlans6_arr = bourne::json::array();

    for(auto& var : vlans6_list)
    {
        vlans6_arr.append(var);
    }
    object["vlans6"] = vlans6_arr;










	object["lease"] = getLease().toJson();






	object["mac"] = getMac().toJson();






	object["ipmi_admin_username"] = getIpmiAdminUsername().toJson();






	object["ipmi_admin_password"] = getIpmiAdminPassword().toJson();






	object["ipmi_client_username"] = getIpmiClientUsername().toJson();






	object["ipmi_client_password"] = getIpmiClientPassword().toJson();






	object["ipmi_updated"] = getIpmiUpdated().toJson();






	object["create_timestamp"] = getCreateTimestamp().toJson();






	object["update_timestamp"] = getUpdateTimestamp().toJson();






	object["comment"] = getComment().toJson();


    return object;

}

int
ServerAsset::getId()
{
	return id;
}

void
ServerAsset::setId(int id)
{
	this->id = id;
}

std::string
ServerAsset::getOrderId()
{
	return order_id;
}

void
ServerAsset::setOrderId(std::string order_id)
{
	this->order_id = order_id;
}

std::string
ServerAsset::getHostname()
{
	return hostname;
}

void
ServerAsset::setHostname(std::string hostname)
{
	this->hostname = hostname;
}

std::string
ServerAsset::getStatus()
{
	return status;
}

void
ServerAsset::setStatus(std::string status)
{
	this->status = status;
}

std::string
ServerAsset::getPrimaryIpv4()
{
	return primary_ipv4;
}

void
ServerAsset::setPrimaryIpv4(std::string primary_ipv4)
{
	this->primary_ipv4 = primary_ipv4;
}

std::string
ServerAsset::getPrimaryIpv6()
{
	return primary_ipv6;
}

void
ServerAsset::setPrimaryIpv6(std::string primary_ipv6)
{
	this->primary_ipv6 = primary_ipv6;
}

std::string
ServerAsset::getDatacenter()
{
	return datacenter;
}

void
ServerAsset::setDatacenter(std::string datacenter)
{
	this->datacenter = datacenter;
}

std::string
ServerAsset::getTypeId()
{
	return type_id;
}

void
ServerAsset::setTypeId(std::string type_id)
{
	this->type_id = type_id;
}

std::string
ServerAsset::getAssetTag()
{
	return asset_tag;
}

void
ServerAsset::setAssetTag(std::string asset_tag)
{
	this->asset_tag = asset_tag;
}

std::string
ServerAsset::getRack()
{
	return rack;
}

void
ServerAsset::setRack(std::string rack)
{
	this->rack = rack;
}

std::string
ServerAsset::getRow()
{
	return row;
}

void
ServerAsset::setRow(std::string row)
{
	this->row = row;
}

std::string
ServerAsset::getCol()
{
	return col;
}

void
ServerAsset::setCol(std::string col)
{
	this->col = col;
}

std::string
ServerAsset::getUnitStart()
{
	return unit_start;
}

void
ServerAsset::setUnitStart(std::string unit_start)
{
	this->unit_start = unit_start;
}

std::string
ServerAsset::getUnitEnd()
{
	return unit_end;
}

void
ServerAsset::setUnitEnd(std::string unit_end)
{
	this->unit_end = unit_end;
}

std::string
ServerAsset::getUnitSub()
{
	return unit_sub;
}

void
ServerAsset::setUnitSub(std::string unit_sub)
{
	this->unit_sub = unit_sub;
}

std::string
ServerAsset::getIpmiMac()
{
	return ipmi_mac;
}

void
ServerAsset::setIpmiMac(std::string ipmi_mac)
{
	this->ipmi_mac = ipmi_mac;
}

std::string
ServerAsset::getIpmiIp()
{
	return ipmi_ip;
}

void
ServerAsset::setIpmiIp(std::string ipmi_ip)
{
	this->ipmi_ip = ipmi_ip;
}

std::string
ServerAsset::getIpmiWorking()
{
	return ipmi_working;
}

void
ServerAsset::setIpmiWorking(std::string ipmi_working)
{
	this->ipmi_working = ipmi_working;
}

std::string
ServerAsset::getCompany()
{
	return company;
}

void
ServerAsset::setCompany(std::string company)
{
	this->company = company;
}

std::string
ServerAsset::getComments()
{
	return comments;
}

void
ServerAsset::setComments(std::string comments)
{
	this->comments = comments;
}

std::string
ServerAsset::getMake()
{
	return make;
}

void
ServerAsset::setMake(std::string make)
{
	this->make = make;
}

std::string
ServerAsset::getModel()
{
	return model;
}

void
ServerAsset::setModel(std::string model)
{
	this->model = model;
}

std::string
ServerAsset::getDescription()
{
	return description;
}

void
ServerAsset::setDescription(std::string description)
{
	this->description = description;
}

std::string
ServerAsset::getCustomerId()
{
	return customer_id;
}

void
ServerAsset::setCustomerId(std::string customer_id)
{
	this->customer_id = customer_id;
}

std::string
ServerAsset::getExternalId()
{
	return external_id;
}

void
ServerAsset::setExternalId(std::string external_id)
{
	this->external_id = external_id;
}

std::string
ServerAsset::getBillingStatus()
{
	return billing_status;
}

void
ServerAsset::setBillingStatus(std::string billing_status)
{
	this->billing_status = billing_status;
}

std::string
ServerAsset::getOverdue()
{
	return overdue;
}

void
ServerAsset::setOverdue(std::string overdue)
{
	this->overdue = overdue;
}

std::string
ServerAsset::getAssetId()
{
	return asset_id;
}

void
ServerAsset::setAssetId(std::string asset_id)
{
	this->asset_id = asset_id;
}

std::string
ServerAsset::getAssetName()
{
	return asset_name;
}

void
ServerAsset::setAssetName(std::string asset_name)
{
	this->asset_name = asset_name;
}

std::string
ServerAsset::getRackId()
{
	return rack_id;
}

void
ServerAsset::setRackId(std::string rack_id)
{
	this->rack_id = rack_id;
}

std::string
ServerAsset::getRackName()
{
	return rack_name;
}

void
ServerAsset::setRackName(std::string rack_name)
{
	this->rack_name = rack_name;
}

std::string
ServerAsset::getRackLocation()
{
	return rack_location;
}

void
ServerAsset::setRackLocation(std::string rack_location)
{
	this->rack_location = rack_location;
}

std::string
ServerAsset::getRackSize()
{
	return rack_size;
}

void
ServerAsset::setRackSize(std::string rack_size)
{
	this->rack_size = rack_size;
}

std::string
ServerAsset::getRackX()
{
	return rack_x;
}

void
ServerAsset::setRackX(std::string rack_x)
{
	this->rack_x = rack_x;
}

std::string
ServerAsset::getRackY()
{
	return rack_y;
}

void
ServerAsset::setRackY(std::string rack_y)
{
	this->rack_y = rack_y;
}

std::list<int>
ServerAsset::getSwitchports()
{
	return switchports;
}

void
ServerAsset::setSwitchports(std::list<int> switchports)
{
	this->switchports = switchports;
}

std::list<std::string>
ServerAsset::getVlans()
{
	return vlans;
}

void
ServerAsset::setVlans(std::list<std::string> vlans)
{
	this->vlans = vlans;
}

std::list<std::string>
ServerAsset::getVlans6()
{
	return vlans6;
}

void
ServerAsset::setVlans6(std::list<std::string> vlans6)
{
	this->vlans6 = vlans6;
}

ServerLease
ServerAsset::getLease()
{
	return lease;
}

void
ServerAsset::setLease(ServerLease lease)
{
	this->lease = lease;
}

AnyType
ServerAsset::getMac()
{
	return mac;
}

void
ServerAsset::setMac(AnyType mac)
{
	this->mac = mac;
}

AnyType
ServerAsset::getIpmiAdminUsername()
{
	return ipmi_admin_username;
}

void
ServerAsset::setIpmiAdminUsername(AnyType ipmi_admin_username)
{
	this->ipmi_admin_username = ipmi_admin_username;
}

AnyType
ServerAsset::getIpmiAdminPassword()
{
	return ipmi_admin_password;
}

void
ServerAsset::setIpmiAdminPassword(AnyType ipmi_admin_password)
{
	this->ipmi_admin_password = ipmi_admin_password;
}

AnyType
ServerAsset::getIpmiClientUsername()
{
	return ipmi_client_username;
}

void
ServerAsset::setIpmiClientUsername(AnyType ipmi_client_username)
{
	this->ipmi_client_username = ipmi_client_username;
}

AnyType
ServerAsset::getIpmiClientPassword()
{
	return ipmi_client_password;
}

void
ServerAsset::setIpmiClientPassword(AnyType ipmi_client_password)
{
	this->ipmi_client_password = ipmi_client_password;
}

AnyType
ServerAsset::getIpmiUpdated()
{
	return ipmi_updated;
}

void
ServerAsset::setIpmiUpdated(AnyType ipmi_updated)
{
	this->ipmi_updated = ipmi_updated;
}

AnyType
ServerAsset::getCreateTimestamp()
{
	return create_timestamp;
}

void
ServerAsset::setCreateTimestamp(AnyType create_timestamp)
{
	this->create_timestamp = create_timestamp;
}

AnyType
ServerAsset::getUpdateTimestamp()
{
	return update_timestamp;
}

void
ServerAsset::setUpdateTimestamp(AnyType update_timestamp)
{
	this->update_timestamp = update_timestamp;
}

AnyType
ServerAsset::getComment()
{
	return comment;
}

void
ServerAsset::setComment(AnyType comment)
{
	this->comment = comment;
}



