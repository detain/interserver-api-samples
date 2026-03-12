
/*
 * BackupsOrder.h
 *
 * Available backup storage packages and pricing for ordering a new backup service.
 */

#ifndef TINY_CPP_CLIENT_BackupsOrder_H_
#define TINY_CPP_CLIENT_BackupsOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BackupsOrderPackageCosts.h"
#include "BackupsOrder_serviceTypes.h"

namespace Tiny {


/*! \brief Available backup storage packages and pricing for ordering a new backup service.
 *
 *  \ingroup Models
 *
 */

class BackupsOrder{
public:

    /*! \brief Constructor.
	 */
    BackupsOrder();
    BackupsOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupsOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	BackupsOrderPackageCosts getPackageCosts();

	/*! \brief Set 
	 */
	void setPackageCosts(BackupsOrderPackageCosts packageCosts);
	/*! \brief Get 
	 */
	BackupsOrder_serviceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(BackupsOrder_serviceTypes serviceTypes);


    private:
    BackupsOrderPackageCosts packageCosts;
    BackupsOrder_serviceTypes serviceTypes;
};
}

#endif /* TINY_CPP_CLIENT_BackupsOrder_H_ */
