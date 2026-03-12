#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainAllInfo_attributes.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainAllInfo_attributes::DomainAllInfo_attributes()
{
	//__init();
}

DomainAllInfo_attributes::~DomainAllInfo_attributes()
{
	//__cleanup();
}

void
DomainAllInfo_attributes::__init()
{
	//contact_set = new DomainAllInfo_attributes_contact_set();
	//registry_createdate = std::string();
	//registry_expiredate = std::string();
	//tld_data = std::string();
	//let_expire = std::string();
	//auto_renew = std::string();
	//sponsoring_rsp = std::string();
	//gdpr_consent_status = std::string();
	//new std::list()std::list> nameserver_list;
	//registry_updatedate = std::string();
	//affiliate_id = std::string();
	//expiredate = std::string();
}

void
DomainAllInfo_attributes::__cleanup()
{
	//if(contact_set != NULL) {
	//
	//delete contact_set;
	//contact_set = NULL;
	//}
	//if(registry_createdate != NULL) {
	//
	//delete registry_createdate;
	//registry_createdate = NULL;
	//}
	//if(registry_expiredate != NULL) {
	//
	//delete registry_expiredate;
	//registry_expiredate = NULL;
	//}
	//if(tld_data != NULL) {
	//
	//delete tld_data;
	//tld_data = NULL;
	//}
	//if(let_expire != NULL) {
	//
	//delete let_expire;
	//let_expire = NULL;
	//}
	//if(auto_renew != NULL) {
	//
	//delete auto_renew;
	//auto_renew = NULL;
	//}
	//if(sponsoring_rsp != NULL) {
	//
	//delete sponsoring_rsp;
	//sponsoring_rsp = NULL;
	//}
	//if(gdpr_consent_status != NULL) {
	//
	//delete gdpr_consent_status;
	//gdpr_consent_status = NULL;
	//}
	//if(nameserver_list != NULL) {
	//nameserver_list.RemoveAll(true);
	//delete nameserver_list;
	//nameserver_list = NULL;
	//}
	//if(registry_updatedate != NULL) {
	//
	//delete registry_updatedate;
	//registry_updatedate = NULL;
	//}
	//if(affiliate_id != NULL) {
	//
	//delete affiliate_id;
	//affiliate_id = NULL;
	//}
	//if(expiredate != NULL) {
	//
	//delete expiredate;
	//expiredate = NULL;
	//}
	//
}

void
DomainAllInfo_attributes::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *contact_setKey = "contact_set";
	node = json_object_get_member(pJsonObject, contact_setKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainAllInfo_attributes_contact_set")) {
			jsonToValue(&contact_set, node, "DomainAllInfo_attributes_contact_set", "DomainAllInfo_attributes_contact_set");
		} else {
			
			DomainAllInfo_attributes_contact_set* obj = static_cast<DomainAllInfo_attributes_contact_set*> (&contact_set);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *registry_createdateKey = "registry_createdate";
	node = json_object_get_member(pJsonObject, registry_createdateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&registry_createdate, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *registry_expiredateKey = "registry_expiredate";
	node = json_object_get_member(pJsonObject, registry_expiredateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&registry_expiredate, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tld_dataKey = "tld_data";
	node = json_object_get_member(pJsonObject, tld_dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tld_data, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *let_expireKey = "let_expire";
	node = json_object_get_member(pJsonObject, let_expireKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&let_expire, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *auto_renewKey = "auto_renew";
	node = json_object_get_member(pJsonObject, auto_renewKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&auto_renew, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sponsoring_rspKey = "sponsoring_rsp";
	node = json_object_get_member(pJsonObject, sponsoring_rspKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sponsoring_rsp, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *gdpr_consent_statusKey = "gdpr_consent_status";
	node = json_object_get_member(pJsonObject, gdpr_consent_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&gdpr_consent_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *nameserver_listKey = "nameserver_list";
	node = json_object_get_member(pJsonObject, nameserver_listKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<DomainNameServer> new_list;
			DomainNameServer inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("DomainNameServer")) {
					jsonToValue(&inst, temp_json, "DomainNameServer", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			nameserver_list = new_list;
		}
		
	}
	const gchar *registry_updatedateKey = "registry_updatedate";
	node = json_object_get_member(pJsonObject, registry_updatedateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&registry_updatedate, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *affiliate_idKey = "affiliate_id";
	node = json_object_get_member(pJsonObject, affiliate_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&affiliate_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *expiredateKey = "expiredate";
	node = json_object_get_member(pJsonObject, expiredateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&expiredate, node, "std::string", "");
		} else {
			
		}
	}
}

DomainAllInfo_attributes::DomainAllInfo_attributes(char* json)
{
	this->fromJson(json);
}

char*
DomainAllInfo_attributes::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("DomainAllInfo_attributes_contact_set")) {
		DomainAllInfo_attributes_contact_set obj = getContactSet();
		node = converttoJson(&obj, "DomainAllInfo_attributes_contact_set", "");
	}
	else {
		
		DomainAllInfo_attributes_contact_set obj = static_cast<DomainAllInfo_attributes_contact_set> (getContactSet());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *contact_setKey = "contact_set";
	json_object_set_member(pJsonObject, contact_setKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegistryCreatedate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *registry_createdateKey = "registry_createdate";
	json_object_set_member(pJsonObject, registry_createdateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegistryExpiredate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *registry_expiredateKey = "registry_expiredate";
	json_object_set_member(pJsonObject, registry_expiredateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTldData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tld_dataKey = "tld_data";
	json_object_set_member(pJsonObject, tld_dataKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLetExpire();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *let_expireKey = "let_expire";
	json_object_set_member(pJsonObject, let_expireKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAutoRenew();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *auto_renewKey = "auto_renew";
	json_object_set_member(pJsonObject, auto_renewKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSponsoringRsp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sponsoring_rspKey = "sponsoring_rsp";
	json_object_set_member(pJsonObject, sponsoring_rspKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGdprConsentStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *gdpr_consent_statusKey = "gdpr_consent_status";
	json_object_set_member(pJsonObject, gdpr_consent_statusKey, node);
	if (isprimitive("DomainNameServer")) {
		list<DomainNameServer> new_list = static_cast<list <DomainNameServer> > (getNameserverList());
		node = converttoJson(&new_list, "DomainNameServer", "array");
	} else {
		node = json_node_alloc();
		list<DomainNameServer> new_list = static_cast<list <DomainNameServer> > (getNameserverList());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<DomainNameServer>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			DomainNameServer obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *nameserver_listKey = "nameserver_list";
	json_object_set_member(pJsonObject, nameserver_listKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegistryUpdatedate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *registry_updatedateKey = "registry_updatedate";
	json_object_set_member(pJsonObject, registry_updatedateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAffiliateId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *affiliate_idKey = "affiliate_id";
	json_object_set_member(pJsonObject, affiliate_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getExpiredate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *expiredateKey = "expiredate";
	json_object_set_member(pJsonObject, expiredateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

DomainAllInfo_attributes_contact_set
DomainAllInfo_attributes::getContactSet()
{
	return contact_set;
}

void
DomainAllInfo_attributes::setContactSet(DomainAllInfo_attributes_contact_set  contact_set)
{
	this->contact_set = contact_set;
}

std::string
DomainAllInfo_attributes::getRegistryCreatedate()
{
	return registry_createdate;
}

void
DomainAllInfo_attributes::setRegistryCreatedate(std::string  registry_createdate)
{
	this->registry_createdate = registry_createdate;
}

std::string
DomainAllInfo_attributes::getRegistryExpiredate()
{
	return registry_expiredate;
}

void
DomainAllInfo_attributes::setRegistryExpiredate(std::string  registry_expiredate)
{
	this->registry_expiredate = registry_expiredate;
}

std::string
DomainAllInfo_attributes::getTldData()
{
	return tld_data;
}

void
DomainAllInfo_attributes::setTldData(std::string  tld_data)
{
	this->tld_data = tld_data;
}

std::string
DomainAllInfo_attributes::getLetExpire()
{
	return let_expire;
}

void
DomainAllInfo_attributes::setLetExpire(std::string  let_expire)
{
	this->let_expire = let_expire;
}

std::string
DomainAllInfo_attributes::getAutoRenew()
{
	return auto_renew;
}

void
DomainAllInfo_attributes::setAutoRenew(std::string  auto_renew)
{
	this->auto_renew = auto_renew;
}

std::string
DomainAllInfo_attributes::getSponsoringRsp()
{
	return sponsoring_rsp;
}

void
DomainAllInfo_attributes::setSponsoringRsp(std::string  sponsoring_rsp)
{
	this->sponsoring_rsp = sponsoring_rsp;
}

std::string
DomainAllInfo_attributes::getGdprConsentStatus()
{
	return gdpr_consent_status;
}

void
DomainAllInfo_attributes::setGdprConsentStatus(std::string  gdpr_consent_status)
{
	this->gdpr_consent_status = gdpr_consent_status;
}

std::list<DomainNameServer>
DomainAllInfo_attributes::getNameserverList()
{
	return nameserver_list;
}

void
DomainAllInfo_attributes::setNameserverList(std::list <DomainNameServer> nameserver_list)
{
	this->nameserver_list = nameserver_list;
}

std::string
DomainAllInfo_attributes::getRegistryUpdatedate()
{
	return registry_updatedate;
}

void
DomainAllInfo_attributes::setRegistryUpdatedate(std::string  registry_updatedate)
{
	this->registry_updatedate = registry_updatedate;
}

std::string
DomainAllInfo_attributes::getAffiliateId()
{
	return affiliate_id;
}

void
DomainAllInfo_attributes::setAffiliateId(std::string  affiliate_id)
{
	this->affiliate_id = affiliate_id;
}

std::string
DomainAllInfo_attributes::getExpiredate()
{
	return expiredate;
}

void
DomainAllInfo_attributes::setExpiredate(std::string  expiredate)
{
	this->expiredate = expiredate;
}


