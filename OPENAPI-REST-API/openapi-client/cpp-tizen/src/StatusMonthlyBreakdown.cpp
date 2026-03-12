#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "StatusMonthlyBreakdown.h"

using namespace std;
using namespace Tizen::ArtikCloud;

StatusMonthlyBreakdown::StatusMonthlyBreakdown()
{
	//__init();
}

StatusMonthlyBreakdown::~StatusMonthlyBreakdown()
{
	//__cleanup();
}

void
StatusMonthlyBreakdown::__init()
{
	//r_default = new MonthlyCounts();
	//failed = new MonthlyCounts();
	//rejected = new MonthlyCounts();
	//pending = new MonthlyCounts();
	//locked = new MonthlyCounts();
	//paid = new MonthlyCounts();
}

void
StatusMonthlyBreakdown::__cleanup()
{
	//if(r_default != NULL) {
	//
	//delete r_default;
	//r_default = NULL;
	//}
	//if(failed != NULL) {
	//
	//delete failed;
	//failed = NULL;
	//}
	//if(rejected != NULL) {
	//
	//delete rejected;
	//rejected = NULL;
	//}
	//if(pending != NULL) {
	//
	//delete pending;
	//pending = NULL;
	//}
	//if(locked != NULL) {
	//
	//delete locked;
	//locked = NULL;
	//}
	//if(paid != NULL) {
	//
	//delete paid;
	//paid = NULL;
	//}
	//
}

void
StatusMonthlyBreakdown::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *r_defaultKey = "default";
	node = json_object_get_member(pJsonObject, r_defaultKey);
	if (node !=NULL) {
	

		if (isprimitive("MonthlyCounts")) {
			jsonToValue(&r_default, node, "MonthlyCounts", "MonthlyCounts");
		} else {
			
			MonthlyCounts* obj = static_cast<MonthlyCounts*> (&r_default);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *failedKey = "failed";
	node = json_object_get_member(pJsonObject, failedKey);
	if (node !=NULL) {
	

		if (isprimitive("MonthlyCounts")) {
			jsonToValue(&failed, node, "MonthlyCounts", "MonthlyCounts");
		} else {
			
			MonthlyCounts* obj = static_cast<MonthlyCounts*> (&failed);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *rejectedKey = "rejected";
	node = json_object_get_member(pJsonObject, rejectedKey);
	if (node !=NULL) {
	

		if (isprimitive("MonthlyCounts")) {
			jsonToValue(&rejected, node, "MonthlyCounts", "MonthlyCounts");
		} else {
			
			MonthlyCounts* obj = static_cast<MonthlyCounts*> (&rejected);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *pendingKey = "pending";
	node = json_object_get_member(pJsonObject, pendingKey);
	if (node !=NULL) {
	

		if (isprimitive("MonthlyCounts")) {
			jsonToValue(&pending, node, "MonthlyCounts", "MonthlyCounts");
		} else {
			
			MonthlyCounts* obj = static_cast<MonthlyCounts*> (&pending);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *lockedKey = "locked";
	node = json_object_get_member(pJsonObject, lockedKey);
	if (node !=NULL) {
	

		if (isprimitive("MonthlyCounts")) {
			jsonToValue(&locked, node, "MonthlyCounts", "MonthlyCounts");
		} else {
			
			MonthlyCounts* obj = static_cast<MonthlyCounts*> (&locked);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *paidKey = "paid";
	node = json_object_get_member(pJsonObject, paidKey);
	if (node !=NULL) {
	

		if (isprimitive("MonthlyCounts")) {
			jsonToValue(&paid, node, "MonthlyCounts", "MonthlyCounts");
		} else {
			
			MonthlyCounts* obj = static_cast<MonthlyCounts*> (&paid);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

StatusMonthlyBreakdown::StatusMonthlyBreakdown(char* json)
{
	this->fromJson(json);
}

char*
StatusMonthlyBreakdown::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("MonthlyCounts")) {
		MonthlyCounts obj = getRDefault();
		node = converttoJson(&obj, "MonthlyCounts", "");
	}
	else {
		
		MonthlyCounts obj = static_cast<MonthlyCounts> (getRDefault());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *r_defaultKey = "default";
	json_object_set_member(pJsonObject, r_defaultKey, node);
	if (isprimitive("MonthlyCounts")) {
		MonthlyCounts obj = getFailed();
		node = converttoJson(&obj, "MonthlyCounts", "");
	}
	else {
		
		MonthlyCounts obj = static_cast<MonthlyCounts> (getFailed());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *failedKey = "failed";
	json_object_set_member(pJsonObject, failedKey, node);
	if (isprimitive("MonthlyCounts")) {
		MonthlyCounts obj = getRejected();
		node = converttoJson(&obj, "MonthlyCounts", "");
	}
	else {
		
		MonthlyCounts obj = static_cast<MonthlyCounts> (getRejected());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *rejectedKey = "rejected";
	json_object_set_member(pJsonObject, rejectedKey, node);
	if (isprimitive("MonthlyCounts")) {
		MonthlyCounts obj = getPending();
		node = converttoJson(&obj, "MonthlyCounts", "");
	}
	else {
		
		MonthlyCounts obj = static_cast<MonthlyCounts> (getPending());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *pendingKey = "pending";
	json_object_set_member(pJsonObject, pendingKey, node);
	if (isprimitive("MonthlyCounts")) {
		MonthlyCounts obj = getLocked();
		node = converttoJson(&obj, "MonthlyCounts", "");
	}
	else {
		
		MonthlyCounts obj = static_cast<MonthlyCounts> (getLocked());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *lockedKey = "locked";
	json_object_set_member(pJsonObject, lockedKey, node);
	if (isprimitive("MonthlyCounts")) {
		MonthlyCounts obj = getPaid();
		node = converttoJson(&obj, "MonthlyCounts", "");
	}
	else {
		
		MonthlyCounts obj = static_cast<MonthlyCounts> (getPaid());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *paidKey = "paid";
	json_object_set_member(pJsonObject, paidKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

MonthlyCounts
StatusMonthlyBreakdown::getRDefault()
{
	return r_default;
}

void
StatusMonthlyBreakdown::setRDefault(MonthlyCounts  r_default)
{
	this->r_default = r_default;
}

MonthlyCounts
StatusMonthlyBreakdown::getFailed()
{
	return failed;
}

void
StatusMonthlyBreakdown::setFailed(MonthlyCounts  failed)
{
	this->failed = failed;
}

MonthlyCounts
StatusMonthlyBreakdown::getRejected()
{
	return rejected;
}

void
StatusMonthlyBreakdown::setRejected(MonthlyCounts  rejected)
{
	this->rejected = rejected;
}

MonthlyCounts
StatusMonthlyBreakdown::getPending()
{
	return pending;
}

void
StatusMonthlyBreakdown::setPending(MonthlyCounts  pending)
{
	this->pending = pending;
}

MonthlyCounts
StatusMonthlyBreakdown::getLocked()
{
	return locked;
}

void
StatusMonthlyBreakdown::setLocked(MonthlyCounts  locked)
{
	this->locked = locked;
}

MonthlyCounts
StatusMonthlyBreakdown::getPaid()
{
	return paid;
}

void
StatusMonthlyBreakdown::setPaid(MonthlyCounts  paid)
{
	this->paid = paid;
}


