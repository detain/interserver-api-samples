/*
 * MailAlertRequest.h
 *
 * Payload for creating a mail alert.
 */

#ifndef _MailAlertRequest_H_
#define _MailAlertRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Payload for creating a mail alert.
 *
 *  \ingroup Models
 *
 */

class MailAlertRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	MailAlertRequest();
	MailAlertRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailAlertRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Alert type identifier.
	 */
	std::string getType();

	/*! \brief Set Alert type identifier.
	 */
	void setType(std::string  type);
	/*! \brief Get Alert value or threshold.
	 */
	std::string getValue();

	/*! \brief Set Alert value or threshold.
	 */
	void setValue(std::string  value);
	/*! \brief Get Email address to notify.
	 */
	std::string getTo();

	/*! \brief Set Email address to notify.
	 */
	void setTo(std::string  to);
	/*! \brief Get Whether the alert is enabled.
	 */
	std::string getEnabled();

	/*! \brief Set Whether the alert is enabled.
	 */
	void setEnabled(std::string  enabled);

private:
	std::string type;
	std::string value;
	std::string to;
	std::string enabled;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailAlertRequest_H_ */
