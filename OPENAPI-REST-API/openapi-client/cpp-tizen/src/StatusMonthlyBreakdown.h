/*
 * StatusMonthlyBreakdown.h
 *
 * Monthly mail delivery status breakdown, showing counts per status category.
 */

#ifndef _StatusMonthlyBreakdown_H_
#define _StatusMonthlyBreakdown_H_


#include <string>
#include "MonthlyCounts.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Monthly mail delivery status breakdown, showing counts per status category.
 *
 *  \ingroup Models
 *
 */

class StatusMonthlyBreakdown : public Object {
public:
	/*! \brief Constructor.
	 */
	StatusMonthlyBreakdown();
	StatusMonthlyBreakdown(char* str);

	/*! \brief Destructor.
	 */
	virtual ~StatusMonthlyBreakdown();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	MonthlyCounts getRDefault();

	/*! \brief Set 
	 */
	void setRDefault(MonthlyCounts  r_default);
	/*! \brief Get 
	 */
	MonthlyCounts getFailed();

	/*! \brief Set 
	 */
	void setFailed(MonthlyCounts  failed);
	/*! \brief Get 
	 */
	MonthlyCounts getRejected();

	/*! \brief Set 
	 */
	void setRejected(MonthlyCounts  rejected);
	/*! \brief Get 
	 */
	MonthlyCounts getPending();

	/*! \brief Set 
	 */
	void setPending(MonthlyCounts  pending);
	/*! \brief Get 
	 */
	MonthlyCounts getLocked();

	/*! \brief Set 
	 */
	void setLocked(MonthlyCounts  locked);
	/*! \brief Get 
	 */
	MonthlyCounts getPaid();

	/*! \brief Set 
	 */
	void setPaid(MonthlyCounts  paid);

private:
	MonthlyCounts r_default;
	MonthlyCounts failed;
	MonthlyCounts rejected;
	MonthlyCounts pending;
	MonthlyCounts locked;
	MonthlyCounts paid;
	void __init();
	void __cleanup();

};
}
}

#endif /* _StatusMonthlyBreakdown_H_ */
