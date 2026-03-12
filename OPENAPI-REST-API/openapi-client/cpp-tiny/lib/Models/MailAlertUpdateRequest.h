
/*
 * MailAlertUpdateRequest.h
 *
 * Payload for updating an existing mail alert.
 */

#ifndef TINY_CPP_CLIENT_MailAlertUpdateRequest_H_
#define TINY_CPP_CLIENT_MailAlertUpdateRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Payload for updating an existing mail alert.
 *
 *  \ingroup Models
 *
 */

class MailAlertUpdateRequest{
public:

    /*! \brief Constructor.
	 */
    MailAlertUpdateRequest();
    MailAlertUpdateRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailAlertUpdateRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Alert ID to update.
	 */
	int getAlertId();

	/*! \brief Set Alert ID to update.
	 */
	void setAlertId(int alert_id);
	/*! \brief Get Alert type identifier.
	 */
	std::string getType();

	/*! \brief Set Alert type identifier.
	 */
	void setType(std::string type);
	/*! \brief Get Alert value or threshold.
	 */
	std::string getValue();

	/*! \brief Set Alert value or threshold.
	 */
	void setValue(std::string value);
	/*! \brief Get Email address to notify.
	 */
	std::string getTo();

	/*! \brief Set Email address to notify.
	 */
	void setTo(std::string to);
	/*! \brief Get Whether the alert is enabled.
	 */
	std::string getEnabled();

	/*! \brief Set Whether the alert is enabled.
	 */
	void setEnabled(std::string enabled);


    private:
    int alert_id{};
    std::string type{};
    std::string value{};
    std::string to{};
    std::string enabled{};
};
}

#endif /* TINY_CPP_CLIENT_MailAlertUpdateRequest_H_ */
