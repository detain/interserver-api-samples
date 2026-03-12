/*
 * BackupsOrder.h
 *
 * Available backup storage packages and pricing for ordering a new backup service.
 */

#ifndef _BackupsOrder_H_
#define _BackupsOrder_H_


#include <string>
#include "BackupsOrderPackageCosts.h"
#include "BackupsOrder_serviceTypes.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Available backup storage packages and pricing for ordering a new backup service.
 *
 *  \ingroup Models
 *
 */

class BackupsOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupsOrder();
	BackupsOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupsOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	BackupsOrderPackageCosts getPackageCosts();

	/*! \brief Set 
	 */
	void setPackageCosts(BackupsOrderPackageCosts  packageCosts);
	/*! \brief Get 
	 */
	BackupsOrder_serviceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(BackupsOrder_serviceTypes  serviceTypes);

private:
	BackupsOrderPackageCosts packageCosts;
	BackupsOrder_serviceTypes serviceTypes;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupsOrder_H_ */
