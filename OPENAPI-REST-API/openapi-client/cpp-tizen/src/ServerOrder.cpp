#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrder.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrder::ServerOrder()
{
	//__init();
}

ServerOrder::~ServerOrder()
{
	//__cleanup();
}

void
ServerOrder::__init()
{
	//form_values = new ServerOrderFormValues();
	//config_ids = new ServerOrderConfigIds();
	//cpu = int(0);
	//field_label = new ServerOrderFieldLabels();
	//cpu_li = new ServerOrder_cpu_li();
	//memory_li = new ServerOrder_memory_li();
	//bandwidth_li = new ServerOrder_bandwidth_li();
	//ips_li = new ServerOrder_ips_li();
	//os_li = new ServerOrder_os_li();
	//cp_li = new ServerOrder_cp_li();
	//new std::list()std::list> raid_li;
}

void
ServerOrder::__cleanup()
{
	//if(form_values != NULL) {
	//
	//delete form_values;
	//form_values = NULL;
	//}
	//if(config_ids != NULL) {
	//
	//delete config_ids;
	//config_ids = NULL;
	//}
	//if(cpu != NULL) {
	//
	//delete cpu;
	//cpu = NULL;
	//}
	//if(field_label != NULL) {
	//
	//delete field_label;
	//field_label = NULL;
	//}
	//if(cpu_li != NULL) {
	//
	//delete cpu_li;
	//cpu_li = NULL;
	//}
	//if(memory_li != NULL) {
	//
	//delete memory_li;
	//memory_li = NULL;
	//}
	//if(bandwidth_li != NULL) {
	//
	//delete bandwidth_li;
	//bandwidth_li = NULL;
	//}
	//if(ips_li != NULL) {
	//
	//delete ips_li;
	//ips_li = NULL;
	//}
	//if(os_li != NULL) {
	//
	//delete os_li;
	//os_li = NULL;
	//}
	//if(cp_li != NULL) {
	//
	//delete cp_li;
	//cp_li = NULL;
	//}
	//if(raid_li != NULL) {
	//raid_li.RemoveAll(true);
	//delete raid_li;
	//raid_li = NULL;
	//}
	//
}

void
ServerOrder::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *form_valuesKey = "form_values";
	node = json_object_get_member(pJsonObject, form_valuesKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFormValues")) {
			jsonToValue(&form_values, node, "ServerOrderFormValues", "ServerOrderFormValues");
		} else {
			
			ServerOrderFormValues* obj = static_cast<ServerOrderFormValues*> (&form_values);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *config_idsKey = "config_ids";
	node = json_object_get_member(pJsonObject, config_idsKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderConfigIds")) {
			jsonToValue(&config_ids, node, "ServerOrderConfigIds", "ServerOrderConfigIds");
		} else {
			
			ServerOrderConfigIds* obj = static_cast<ServerOrderConfigIds*> (&config_ids);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cpuKey = "cpu";
	node = json_object_get_member(pJsonObject, cpuKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cpu, node, "int", "");
		} else {
			
		}
	}
	const gchar *field_labelKey = "field_label";
	node = json_object_get_member(pJsonObject, field_labelKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFieldLabels")) {
			jsonToValue(&field_label, node, "ServerOrderFieldLabels", "ServerOrderFieldLabels");
		} else {
			
			ServerOrderFieldLabels* obj = static_cast<ServerOrderFieldLabels*> (&field_label);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cpu_liKey = "cpu_li";
	node = json_object_get_member(pJsonObject, cpu_liKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrder_cpu_li")) {
			jsonToValue(&cpu_li, node, "ServerOrder_cpu_li", "ServerOrder_cpu_li");
		} else {
			
			ServerOrder_cpu_li* obj = static_cast<ServerOrder_cpu_li*> (&cpu_li);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *memory_liKey = "memory_li";
	node = json_object_get_member(pJsonObject, memory_liKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrder_memory_li")) {
			jsonToValue(&memory_li, node, "ServerOrder_memory_li", "ServerOrder_memory_li");
		} else {
			
			ServerOrder_memory_li* obj = static_cast<ServerOrder_memory_li*> (&memory_li);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *bandwidth_liKey = "bandwidth_li";
	node = json_object_get_member(pJsonObject, bandwidth_liKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrder_bandwidth_li")) {
			jsonToValue(&bandwidth_li, node, "ServerOrder_bandwidth_li", "ServerOrder_bandwidth_li");
		} else {
			
			ServerOrder_bandwidth_li* obj = static_cast<ServerOrder_bandwidth_li*> (&bandwidth_li);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *ips_liKey = "ips_li";
	node = json_object_get_member(pJsonObject, ips_liKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrder_ips_li")) {
			jsonToValue(&ips_li, node, "ServerOrder_ips_li", "ServerOrder_ips_li");
		} else {
			
			ServerOrder_ips_li* obj = static_cast<ServerOrder_ips_li*> (&ips_li);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *os_liKey = "os_li";
	node = json_object_get_member(pJsonObject, os_liKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrder_os_li")) {
			jsonToValue(&os_li, node, "ServerOrder_os_li", "ServerOrder_os_li");
		} else {
			
			ServerOrder_os_li* obj = static_cast<ServerOrder_os_li*> (&os_li);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cp_liKey = "cp_li";
	node = json_object_get_member(pJsonObject, cp_liKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrder_cp_li")) {
			jsonToValue(&cp_li, node, "ServerOrder_cp_li", "ServerOrder_cp_li");
		} else {
			
			ServerOrder_cp_li* obj = static_cast<ServerOrder_cp_li*> (&cp_li);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *raid_liKey = "raid_li";
	node = json_object_get_member(pJsonObject, raid_liKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ServerOrderRAID> new_list;
			ServerOrderRAID inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ServerOrderRAID")) {
					jsonToValue(&inst, temp_json, "ServerOrderRAID", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			raid_li = new_list;
		}
		
	}
}

ServerOrder::ServerOrder(char* json)
{
	this->fromJson(json);
}

char*
ServerOrder::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerOrderFormValues")) {
		ServerOrderFormValues obj = getFormValues();
		node = converttoJson(&obj, "ServerOrderFormValues", "");
	}
	else {
		
		ServerOrderFormValues obj = static_cast<ServerOrderFormValues> (getFormValues());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *form_valuesKey = "form_values";
	json_object_set_member(pJsonObject, form_valuesKey, node);
	if (isprimitive("ServerOrderConfigIds")) {
		ServerOrderConfigIds obj = getConfigIds();
		node = converttoJson(&obj, "ServerOrderConfigIds", "");
	}
	else {
		
		ServerOrderConfigIds obj = static_cast<ServerOrderConfigIds> (getConfigIds());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *config_idsKey = "config_ids";
	json_object_set_member(pJsonObject, config_idsKey, node);
	if (isprimitive("int")) {
		int obj = getCpu();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *cpuKey = "cpu";
	json_object_set_member(pJsonObject, cpuKey, node);
	if (isprimitive("ServerOrderFieldLabels")) {
		ServerOrderFieldLabels obj = getFieldLabel();
		node = converttoJson(&obj, "ServerOrderFieldLabels", "");
	}
	else {
		
		ServerOrderFieldLabels obj = static_cast<ServerOrderFieldLabels> (getFieldLabel());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *field_labelKey = "field_label";
	json_object_set_member(pJsonObject, field_labelKey, node);
	if (isprimitive("ServerOrder_cpu_li")) {
		ServerOrder_cpu_li obj = getCpuLi();
		node = converttoJson(&obj, "ServerOrder_cpu_li", "");
	}
	else {
		
		ServerOrder_cpu_li obj = static_cast<ServerOrder_cpu_li> (getCpuLi());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cpu_liKey = "cpu_li";
	json_object_set_member(pJsonObject, cpu_liKey, node);
	if (isprimitive("ServerOrder_memory_li")) {
		ServerOrder_memory_li obj = getMemoryLi();
		node = converttoJson(&obj, "ServerOrder_memory_li", "");
	}
	else {
		
		ServerOrder_memory_li obj = static_cast<ServerOrder_memory_li> (getMemoryLi());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *memory_liKey = "memory_li";
	json_object_set_member(pJsonObject, memory_liKey, node);
	if (isprimitive("ServerOrder_bandwidth_li")) {
		ServerOrder_bandwidth_li obj = getBandwidthLi();
		node = converttoJson(&obj, "ServerOrder_bandwidth_li", "");
	}
	else {
		
		ServerOrder_bandwidth_li obj = static_cast<ServerOrder_bandwidth_li> (getBandwidthLi());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *bandwidth_liKey = "bandwidth_li";
	json_object_set_member(pJsonObject, bandwidth_liKey, node);
	if (isprimitive("ServerOrder_ips_li")) {
		ServerOrder_ips_li obj = getIpsLi();
		node = converttoJson(&obj, "ServerOrder_ips_li", "");
	}
	else {
		
		ServerOrder_ips_li obj = static_cast<ServerOrder_ips_li> (getIpsLi());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ips_liKey = "ips_li";
	json_object_set_member(pJsonObject, ips_liKey, node);
	if (isprimitive("ServerOrder_os_li")) {
		ServerOrder_os_li obj = getOsLi();
		node = converttoJson(&obj, "ServerOrder_os_li", "");
	}
	else {
		
		ServerOrder_os_li obj = static_cast<ServerOrder_os_li> (getOsLi());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *os_liKey = "os_li";
	json_object_set_member(pJsonObject, os_liKey, node);
	if (isprimitive("ServerOrder_cp_li")) {
		ServerOrder_cp_li obj = getCpLi();
		node = converttoJson(&obj, "ServerOrder_cp_li", "");
	}
	else {
		
		ServerOrder_cp_li obj = static_cast<ServerOrder_cp_li> (getCpLi());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cp_liKey = "cp_li";
	json_object_set_member(pJsonObject, cp_liKey, node);
	if (isprimitive("ServerOrderRAID")) {
		list<ServerOrderRAID> new_list = static_cast<list <ServerOrderRAID> > (getRaidLi());
		node = converttoJson(&new_list, "ServerOrderRAID", "array");
	} else {
		node = json_node_alloc();
		list<ServerOrderRAID> new_list = static_cast<list <ServerOrderRAID> > (getRaidLi());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ServerOrderRAID>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ServerOrderRAID obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *raid_liKey = "raid_li";
	json_object_set_member(pJsonObject, raid_liKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerOrderFormValues
ServerOrder::getFormValues()
{
	return form_values;
}

void
ServerOrder::setFormValues(ServerOrderFormValues  form_values)
{
	this->form_values = form_values;
}

ServerOrderConfigIds
ServerOrder::getConfigIds()
{
	return config_ids;
}

void
ServerOrder::setConfigIds(ServerOrderConfigIds  config_ids)
{
	this->config_ids = config_ids;
}

int
ServerOrder::getCpu()
{
	return cpu;
}

void
ServerOrder::setCpu(int  cpu)
{
	this->cpu = cpu;
}

ServerOrderFieldLabels
ServerOrder::getFieldLabel()
{
	return field_label;
}

void
ServerOrder::setFieldLabel(ServerOrderFieldLabels  field_label)
{
	this->field_label = field_label;
}

ServerOrder_cpu_li
ServerOrder::getCpuLi()
{
	return cpu_li;
}

void
ServerOrder::setCpuLi(ServerOrder_cpu_li  cpu_li)
{
	this->cpu_li = cpu_li;
}

ServerOrder_memory_li
ServerOrder::getMemoryLi()
{
	return memory_li;
}

void
ServerOrder::setMemoryLi(ServerOrder_memory_li  memory_li)
{
	this->memory_li = memory_li;
}

ServerOrder_bandwidth_li
ServerOrder::getBandwidthLi()
{
	return bandwidth_li;
}

void
ServerOrder::setBandwidthLi(ServerOrder_bandwidth_li  bandwidth_li)
{
	this->bandwidth_li = bandwidth_li;
}

ServerOrder_ips_li
ServerOrder::getIpsLi()
{
	return ips_li;
}

void
ServerOrder::setIpsLi(ServerOrder_ips_li  ips_li)
{
	this->ips_li = ips_li;
}

ServerOrder_os_li
ServerOrder::getOsLi()
{
	return os_li;
}

void
ServerOrder::setOsLi(ServerOrder_os_li  os_li)
{
	this->os_li = os_li;
}

ServerOrder_cp_li
ServerOrder::getCpLi()
{
	return cp_li;
}

void
ServerOrder::setCpLi(ServerOrder_cp_li  cp_li)
{
	this->cp_li = cp_li;
}

std::list<ServerOrderRAID>
ServerOrder::getRaidLi()
{
	return raid_li;
}

void
ServerOrder::setRaidLi(std::list <ServerOrderRAID> raid_li)
{
	this->raid_li = raid_li;
}


