

#include "StatusMonthlyBreakdown.h"

using namespace Tiny;

StatusMonthlyBreakdown::StatusMonthlyBreakdown()
{
	r_default = MonthlyCounts();
	failed = MonthlyCounts();
	rejected = MonthlyCounts();
	pending = MonthlyCounts();
	locked = MonthlyCounts();
	paid = MonthlyCounts();
}

StatusMonthlyBreakdown::StatusMonthlyBreakdown(std::string jsonString)
{
	this->fromJson(jsonString);
}

StatusMonthlyBreakdown::~StatusMonthlyBreakdown()
{

}

void
StatusMonthlyBreakdown::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *r_defaultKey = "default";

    if(object.has_key(r_defaultKey))
    {
        bourne::json value = object[r_defaultKey];




        MonthlyCounts* obj = &r_default;
		obj->fromJson(value.dump());

    }

    const char *failedKey = "failed";

    if(object.has_key(failedKey))
    {
        bourne::json value = object[failedKey];




        MonthlyCounts* obj = &failed;
		obj->fromJson(value.dump());

    }

    const char *rejectedKey = "rejected";

    if(object.has_key(rejectedKey))
    {
        bourne::json value = object[rejectedKey];




        MonthlyCounts* obj = &rejected;
		obj->fromJson(value.dump());

    }

    const char *pendingKey = "pending";

    if(object.has_key(pendingKey))
    {
        bourne::json value = object[pendingKey];




        MonthlyCounts* obj = &pending;
		obj->fromJson(value.dump());

    }

    const char *lockedKey = "locked";

    if(object.has_key(lockedKey))
    {
        bourne::json value = object[lockedKey];




        MonthlyCounts* obj = &locked;
		obj->fromJson(value.dump());

    }

    const char *paidKey = "paid";

    if(object.has_key(paidKey))
    {
        bourne::json value = object[paidKey];




        MonthlyCounts* obj = &paid;
		obj->fromJson(value.dump());

    }


}

bourne::json
StatusMonthlyBreakdown::toJson()
{
    bourne::json object = bourne::json::object();






	object["r_default"] = getRDefault().toJson();






	object["failed"] = getFailed().toJson();






	object["rejected"] = getRejected().toJson();






	object["pending"] = getPending().toJson();






	object["locked"] = getLocked().toJson();






	object["paid"] = getPaid().toJson();


    return object;

}

MonthlyCounts&lt;std::string, int&gt;
StatusMonthlyBreakdown::getRDefault()
{
	return r_default;
}

void
StatusMonthlyBreakdown::setRDefault(MonthlyCounts&lt;std::string, int&gt; r_default)
{
	this->r_default = r_default;
}

MonthlyCounts&lt;std::string, int&gt;
StatusMonthlyBreakdown::getFailed()
{
	return failed;
}

void
StatusMonthlyBreakdown::setFailed(MonthlyCounts&lt;std::string, int&gt; failed)
{
	this->failed = failed;
}

MonthlyCounts&lt;std::string, int&gt;
StatusMonthlyBreakdown::getRejected()
{
	return rejected;
}

void
StatusMonthlyBreakdown::setRejected(MonthlyCounts&lt;std::string, int&gt; rejected)
{
	this->rejected = rejected;
}

MonthlyCounts&lt;std::string, int&gt;
StatusMonthlyBreakdown::getPending()
{
	return pending;
}

void
StatusMonthlyBreakdown::setPending(MonthlyCounts&lt;std::string, int&gt; pending)
{
	this->pending = pending;
}

MonthlyCounts&lt;std::string, int&gt;
StatusMonthlyBreakdown::getLocked()
{
	return locked;
}

void
StatusMonthlyBreakdown::setLocked(MonthlyCounts&lt;std::string, int&gt; locked)
{
	this->locked = locked;
}

MonthlyCounts&lt;std::string, int&gt;
StatusMonthlyBreakdown::getPaid()
{
	return paid;
}

void
StatusMonthlyBreakdown::setPaid(MonthlyCounts&lt;std::string, int&gt; paid)
{
	this->paid = paid;
}



