
/*
 * AccountInfoData_email_settings.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AccountInfoData_email_settings_H_
#define TINY_CPP_CLIENT_AccountInfoData_email_settings_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfoData_email_settings{
public:

    /*! \brief Constructor.
	 */
    AccountInfoData_email_settings();
    AccountInfoData_email_settings(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoData_email_settings();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getAdminccBadResponse();

	/*! \brief Set 
	 */
	void setAdminccBadResponse(std::string admincc_bad_response);
	/*! \brief Get 
	 */
	std::string getAdminmassCommunicationstpl();

	/*! \brief Set 
	 */
	void setAdminmassCommunicationstpl(std::string adminmass_communicationstpl);


    private:
    std::string admincc_bad_response{};
    std::string adminmass_communicationstpl{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoData_email_settings_H_ */
