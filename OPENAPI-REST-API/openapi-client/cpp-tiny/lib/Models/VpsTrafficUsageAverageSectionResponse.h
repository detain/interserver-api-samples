
/*
 * VpsTrafficUsageAverageSectionResponse.h
 *
 * VPS Traffic Usage Average Section Response
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficUsageAverageSectionResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficUsageAverageSectionResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief VPS Traffic Usage Average Section Response
 *
 *  \ingroup Models
 *
 */

class VpsTrafficUsageAverageSectionResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficUsageAverageSectionResponse();
    VpsTrafficUsageAverageSectionResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficUsageAverageSectionResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getTotal();

	/*! \brief Set 
	 */
	void setTotal(int total);
	/*! \brief Get 
	 */
	int getCount();

	/*! \brief Set 
	 */
	void setCount(int count);
	/*! \brief Get 
	 */
	int getValue();

	/*! \brief Set 
	 */
	void setValue(int value);


    private:
    int total{};
    int count{};
    int value{};
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficUsageAverageSectionResponse_H_ */
