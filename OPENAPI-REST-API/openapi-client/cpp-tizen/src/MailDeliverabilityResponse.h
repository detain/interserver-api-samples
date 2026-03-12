/*
 * MailDeliverabilityResponse.h
 *
 * Deliverability statistics for a mail service.
 */

#ifndef _MailDeliverabilityResponse_H_
#define _MailDeliverabilityResponse_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Deliverability statistics for a mail service.
 *
 *  \ingroup Models
 *
 */

class MailDeliverabilityResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	MailDeliverabilityResponse();
	MailDeliverabilityResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailDeliverabilityResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Delivered and bounced counts.
	 */
	std::string getStat();

	/*! \brief Set Delivered and bounced counts.
	 */
	void setStat(std::string  stat);
	/*! \brief Get Bounce percentage.
	 */
	long long getPercent();

	/*! \brief Set Bounce percentage.
	 */
	void setPercent(long long  percent);
	/*! \brief Get Detailed deliverability breakdown by sender or domain.
	 */
	std::list<std::list> getTableData();

	/*! \brief Set Detailed deliverability breakdown by sender or domain.
	 */
	void setTableData(std::list <std::list> table_data);

private:
	std::string stat;
	long long percent;
	std::list <std::list>table_data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailDeliverabilityResponse_H_ */
