/*
 * MailAlertsResponse_inner.h
 *
 * 
 */

#ifndef _MailAlertsResponse_inner_H_
#define _MailAlertsResponse_inner_H_


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

class MailAlertsResponse_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	MailAlertsResponse_inner();
	MailAlertsResponse_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailAlertsResponse_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getAlertId();

	/*! \brief Set 
	 */
	void setAlertId(int  alert_id);
	/*! \brief Get 
	 */
	std::string getAlertType();

	/*! \brief Set 
	 */
	void setAlertType(std::string  alert_type);
	/*! \brief Get 
	 */
	std::string getAlertValue();

	/*! \brief Set 
	 */
	void setAlertValue(std::string  alert_value);
	/*! \brief Get 
	 */
	std::string getAlertTo();

	/*! \brief Set 
	 */
	void setAlertTo(std::string  alert_to);
	/*! \brief Get 
	 */
	std::string getAlertEnabled();

	/*! \brief Set 
	 */
	void setAlertEnabled(std::string  alert_enabled);

private:
	int alert_id;
	std::string alert_type;
	std::string alert_value;
	std::string alert_to;
	std::string alert_enabled;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailAlertsResponse_inner_H_ */
