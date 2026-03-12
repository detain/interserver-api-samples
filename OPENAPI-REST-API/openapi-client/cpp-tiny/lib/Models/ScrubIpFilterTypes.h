
/*
 * ScrubIpFilterTypes.h
 *
 * Available scrub filter types for building firewall rules.
 */

#ifndef TINY_CPP_CLIENT_ScrubIpFilterTypes_H_
#define TINY_CPP_CLIENT_ScrubIpFilterTypes_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ScrubIpFilterTypes_filters_value.h"
#include <map>

namespace Tiny {


/*! \brief Available scrub filter types for building firewall rules.
 *
 *  \ingroup Models
 *
 */

class ScrubIpFilterTypes{
public:

    /*! \brief Constructor.
	 */
    ScrubIpFilterTypes();
    ScrubIpFilterTypes(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ScrubIpFilterTypes();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool success);
	/*! \brief Get 
	 */
	std::map<std::string, ScrubIpFilterTypes_filters_value> getFilters();

	/*! \brief Set 
	 */
	void setFilters(std::map<std::string, ScrubIpFilterTypes_filters_value> filters);


    private:
    bool success{};
    std::map<std::string, ScrubIpFilterTypes_filters_value> filters;
};
}

#endif /* TINY_CPP_CLIENT_ScrubIpFilterTypes_H_ */
