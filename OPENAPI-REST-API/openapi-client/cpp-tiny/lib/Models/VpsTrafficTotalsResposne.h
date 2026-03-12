
/*
 * VpsTrafficTotalsResposne.h
 *
 * VPS Traffic Totals Section
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficTotalsResposne_H_
#define TINY_CPP_CLIENT_VpsTrafficTotalsResposne_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsTrafficTotalsSectionResponse.h"

namespace Tiny {


/*! \brief VPS Traffic Totals Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficTotalsResposne{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficTotalsResposne();
    VpsTrafficTotalsResposne(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficTotalsResposne();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getDay();

	/*! \brief Set 
	 */
	void setDay(VpsTrafficTotalsSectionResponse day);
	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getMonth();

	/*! \brief Set 
	 */
	void setMonth(VpsTrafficTotalsSectionResponse month);
	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getYear();

	/*! \brief Set 
	 */
	void setYear(VpsTrafficTotalsSectionResponse year);
	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getAll();

	/*! \brief Set 
	 */
	void setAll(VpsTrafficTotalsSectionResponse all);


    private:
    VpsTrafficTotalsSectionResponse day;
    VpsTrafficTotalsSectionResponse month;
    VpsTrafficTotalsSectionResponse year;
    VpsTrafficTotalsSectionResponse all;
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficTotalsResposne_H_ */
