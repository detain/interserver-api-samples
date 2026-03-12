

#include "VpsServiceExtra.h"

using namespace Tiny;

VpsServiceExtra::VpsServiceExtra()
{
	spice = int(0);
	snapshots = std::list<VpsSnapshot>();
}

VpsServiceExtra::VpsServiceExtra(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsServiceExtra::~VpsServiceExtra()
{

}

void
VpsServiceExtra::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *spiceKey = "spice";

    if(object.has_key(spiceKey))
    {
        bourne::json value = object[spiceKey];



        jsonToValue(&spice, value, "int");


    }

    const char *snapshotsKey = "snapshots";

    if(object.has_key(snapshotsKey))
    {
        bourne::json value = object[snapshotsKey];


        std::list<VpsSnapshot> snapshots_list;
        VpsSnapshot element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            snapshots_list.push_back(element);
        }
        snapshots = snapshots_list;


    }


}

bourne::json
VpsServiceExtra::toJson()
{
    bourne::json object = bourne::json::object();





    object["spice"] = getSpice();





    std::list<VpsSnapshot> snapshots_list = getSnapshots();
    bourne::json snapshots_arr = bourne::json::array();

    for(auto& var : snapshots_list)
    {
        VpsSnapshot obj = var;
        snapshots_arr.append(obj.toJson());
    }
    object["snapshots"] = snapshots_arr;




    return object;

}

int
VpsServiceExtra::getSpice()
{
	return spice;
}

void
VpsServiceExtra::setSpice(int spice)
{
	this->spice = spice;
}

std::list<VpsSnapshot>
VpsServiceExtra::getSnapshots()
{
	return snapshots;
}

void
VpsServiceExtra::setSnapshots(std::list<VpsSnapshot> snapshots)
{
	this->snapshots = snapshots;
}



