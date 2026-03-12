
/*
 * MailDeliverabilityResponse.h
 *
 * Deliverability statistics for a mail service.
 */

#ifndef TINY_CPP_CLIENT_MailDeliverabilityResponse_H_
#define TINY_CPP_CLIENT_MailDeliverabilityResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Object.h"
#include <list>

namespace Tiny {


/*! \brief Deliverability statistics for a mail service.
 *
 *  \ingroup Models
 *
 */

class MailDeliverabilityResponse{
public:

    /*! \brief Constructor.
	 */
    MailDeliverabilityResponse();
    MailDeliverabilityResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailDeliverabilityResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Delivered and bounced counts.
	 */
	Object getStat();

	/*! \brief Set Delivered and bounced counts.
	 */
	void setStat(Object stat);
	/*! \brief Get Bounce percentage.
	 */
	long getPercent();

	/*! \brief Set Bounce percentage.
	 */
	void setPercent(long percent);
	/*! \brief Get Detailed deliverability breakdown by sender or domain.
	 */
	std::list<std::list> getTableData();

	/*! \brief Set Detailed deliverability breakdown by sender or domain.
	 */
	void setTableData(std::list<std::list> table_data);


    private:
    Object stat;
    long percent{};
    std::list<std::list> table_data;
};
}

#endif /* TINY_CPP_CLIENT_MailDeliverabilityResponse_H_ */
