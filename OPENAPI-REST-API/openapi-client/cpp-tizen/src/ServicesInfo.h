/*
 * ServicesInfo.h
 *
 * Contains the complete catalog of available modules, services, service types, and service categories.
 */

#ifndef _ServicesInfo_H_
#define _ServicesInfo_H_


#include <string>
#include "Modules.h"
#include "ServiceCategories.h"
#include "ServiceTypes.h"
#include "Services.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Contains the complete catalog of available modules, services, service types, and service categories.
 *
 *  \ingroup Models
 *
 */

class ServicesInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	ServicesInfo();
	ServicesInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServicesInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	Modules getModules();

	/*! \brief Set 
	 */
	void setModules(Modules  modules);
	/*! \brief Get 
	 */
	Services getServices();

	/*! \brief Set 
	 */
	void setServices(Services  services);
	/*! \brief Get 
	 */
	ServiceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(ServiceTypes  serviceTypes);
	/*! \brief Get 
	 */
	ServiceCategories getServiceCategories();

	/*! \brief Set 
	 */
	void setServiceCategories(ServiceCategories  serviceCategories);

private:
	Modules modules;
	Services services;
	ServiceTypes serviceTypes;
	ServiceCategories serviceCategories;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServicesInfo_H_ */
