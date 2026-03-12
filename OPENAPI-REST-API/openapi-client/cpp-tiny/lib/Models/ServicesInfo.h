
/*
 * ServicesInfo.h
 *
 * Contains the complete catalog of available modules, services, service types, and service categories.
 */

#ifndef TINY_CPP_CLIENT_ServicesInfo_H_
#define TINY_CPP_CLIENT_ServicesInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Modules.h"
#include "ServiceCategories.h"
#include "ServiceTypes.h"
#include "Services.h"

namespace Tiny {


/*! \brief Contains the complete catalog of available modules, services, service types, and service categories.
 *
 *  \ingroup Models
 *
 */

class ServicesInfo{
public:

    /*! \brief Constructor.
	 */
    ServicesInfo();
    ServicesInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServicesInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	Modules&lt;std::string, ModuleSettings&gt; getModules();

	/*! \brief Set 
	 */
	void setModules(Modules&lt;std::string, ModuleSettings&gt; modules);
	/*! \brief Get 
	 */
	Services&lt;std::string, Service&gt; getServices();

	/*! \brief Set 
	 */
	void setServices(Services&lt;std::string, Service&gt; services);
	/*! \brief Get 
	 */
	ServiceTypes&lt;std::string, ServiceType&gt; getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(ServiceTypes&lt;std::string, ServiceType&gt; serviceTypes);
	/*! \brief Get 
	 */
	ServiceCategories&lt;std::string, ServiceCategory&gt; getServiceCategories();

	/*! \brief Set 
	 */
	void setServiceCategories(ServiceCategories&lt;std::string, ServiceCategory&gt; serviceCategories);


    private:
    Modules&lt;std::string, ModuleSettings&gt; modules;
    Services&lt;std::string, Service&gt; services;
    ServiceTypes&lt;std::string, ServiceType&gt; serviceTypes;
    ServiceCategories&lt;std::string, ServiceCategory&gt; serviceCategories;
};
}

#endif /* TINY_CPP_CLIENT_ServicesInfo_H_ */
