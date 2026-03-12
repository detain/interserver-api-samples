
/*
 * VpsTrafficHistoryResponse.h
 *
 * VPS Traffic Data History Section
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficHistoryResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficHistoryResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsTrafficHistorySectionResponse.h"

namespace Tiny {


/*! \brief VPS Traffic Data History Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficHistoryResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficHistoryResponse();
    VpsTrafficHistoryResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficHistoryResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsTrafficHistorySectionResponse getHour();

	/*! \brief Set 
	 */
	void setHour(VpsTrafficHistorySectionResponse hour);
	/*! \brief Get 
	 */
	VpsTrafficHistorySectionResponse getDay();

	/*! \brief Set 
	 */
	void setDay(VpsTrafficHistorySectionResponse day);


    private:
    VpsTrafficHistorySectionResponse hour;
    VpsTrafficHistorySectionResponse day;
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficHistoryResponse_H_ */
