/*
 * AccountInfoData_email_settings.h
 *
 * 
 */

#ifndef _AccountInfoData_email_settings_H_
#define _AccountInfoData_email_settings_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfoData_email_settings : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoData_email_settings();
	AccountInfoData_email_settings(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoData_email_settings();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAdminccBadResponse();

	/*! \brief Set 
	 */
	void setAdminccBadResponse(std::string  admincc_bad_response);
	/*! \brief Get 
	 */
	std::string getAdminmassCommunicationstpl();

	/*! \brief Set 
	 */
	void setAdminmassCommunicationstpl(std::string  adminmass_communicationstpl);

private:
	std::string admincc_bad_response;
	std::string adminmass_communicationstpl;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoData_email_settings_H_ */
