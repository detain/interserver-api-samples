
/*
 * BackupOrderPutRequest.h
 *
 * Parameters to submit to validate your backup order
 */

#ifndef TINY_CPP_CLIENT_BackupOrderPutRequest_H_
#define TINY_CPP_CLIENT_BackupOrderPutRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Parameters to submit to validate your backup order
 *
 *  \ingroup Models
 *
 */

class BackupOrderPutRequest{
public:

    /*! \brief Constructor.
	 */
    BackupOrderPutRequest();
    BackupOrderPutRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupOrderPutRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isValidateOnly();

	/*! \brief Set 
	 */
	void setValidateOnly(bool validateOnly);
	/*! \brief Get 
	 */
	int getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(int serviceType);
	/*! \brief Get 
	 */
	std::string getCoupon();

	/*! \brief Set 
	 */
	void setCoupon(std::string coupon);


    private:
    bool validateOnly{};
    int serviceType{};
    std::string coupon{};
};
}

#endif /* TINY_CPP_CLIENT_BackupOrderPutRequest_H_ */
