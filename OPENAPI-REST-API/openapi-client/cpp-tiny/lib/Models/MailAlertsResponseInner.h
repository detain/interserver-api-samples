
/*
 * MailAlertsResponse_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_MailAlertsResponse_inner_H_
#define TINY_CPP_CLIENT_MailAlertsResponse_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MailAlertsResponse_inner{
public:

    /*! \brief Constructor.
	 */
    MailAlertsResponse_inner();
    MailAlertsResponse_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailAlertsResponse_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getAlertId();

	/*! \brief Set 
	 */
	void setAlertId(int alert_id);
	/*! \brief Get 
	 */
	std::string getAlertType();

	/*! \brief Set 
	 */
	void setAlertType(std::string alert_type);
	/*! \brief Get 
	 */
	std::string getAlertValue();

	/*! \brief Set 
	 */
	void setAlertValue(std::string alert_value);
	/*! \brief Get 
	 */
	std::string getAlertTo();

	/*! \brief Set 
	 */
	void setAlertTo(std::string alert_to);
	/*! \brief Get 
	 */
	std::string getAlertEnabled();

	/*! \brief Set 
	 */
	void setAlertEnabled(std::string alert_enabled);


    private:
    int alert_id{};
    std::string alert_type{};
    std::string alert_value{};
    std::string alert_to{};
    std::string alert_enabled{};
};
}

#endif /* TINY_CPP_CLIENT_MailAlertsResponse_inner_H_ */
