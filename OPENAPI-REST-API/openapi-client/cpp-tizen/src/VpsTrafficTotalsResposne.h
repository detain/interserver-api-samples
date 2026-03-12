/*
 * VpsTrafficTotalsResposne.h
 *
 * VPS Traffic Totals Section
 */

#ifndef _VpsTrafficTotalsResposne_H_
#define _VpsTrafficTotalsResposne_H_


#include <string>
#include "VpsTrafficTotalsSectionResponse.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Totals Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficTotalsResposne : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficTotalsResposne();
	VpsTrafficTotalsResposne(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficTotalsResposne();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getDay();

	/*! \brief Set 
	 */
	void setDay(VpsTrafficTotalsSectionResponse  day);
	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getMonth();

	/*! \brief Set 
	 */
	void setMonth(VpsTrafficTotalsSectionResponse  month);
	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getYear();

	/*! \brief Set 
	 */
	void setYear(VpsTrafficTotalsSectionResponse  year);
	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getAll();

	/*! \brief Set 
	 */
	void setAll(VpsTrafficTotalsSectionResponse  all);

private:
	VpsTrafficTotalsSectionResponse day;
	VpsTrafficTotalsSectionResponse month;
	VpsTrafficTotalsSectionResponse year;
	VpsTrafficTotalsSectionResponse all;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTrafficTotalsResposne_H_ */
