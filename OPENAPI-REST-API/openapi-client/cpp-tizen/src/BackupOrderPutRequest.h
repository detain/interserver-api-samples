/*
 * BackupOrderPutRequest.h
 *
 * Parameters to submit to validate your backup order
 */

#ifndef _BackupOrderPutRequest_H_
#define _BackupOrderPutRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Parameters to submit to validate your backup order
 *
 *  \ingroup Models
 *
 */

class BackupOrderPutRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupOrderPutRequest();
	BackupOrderPutRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupOrderPutRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getValidateOnly();

	/*! \brief Set 
	 */
	void setValidateOnly(bool  validateOnly);
	/*! \brief Get 
	 */
	int getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(int  serviceType);
	/*! \brief Get 
	 */
	std::string getCoupon();

	/*! \brief Set 
	 */
	void setCoupon(std::string  coupon);

private:
	bool validateOnly;
	int serviceType;
	std::string coupon;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupOrderPutRequest_H_ */
