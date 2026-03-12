
/*
 * ScrubIpFilterTypes_filters_value.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ScrubIpFilterTypes_filters_value_H_
#define TINY_CPP_CLIENT_ScrubIpFilterTypes_filters_value_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ScrubIpFilterTypes_filters_value{
public:

    /*! \brief Constructor.
	 */
    ScrubIpFilterTypes_filters_value();
    ScrubIpFilterTypes_filters_value(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ScrubIpFilterTypes_filters_value();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	std::string getDesc();

	/*! \brief Set 
	 */
	void setDesc(std::string desc);


    private:
    std::string name{};
    std::string desc{};
};
}

#endif /* TINY_CPP_CLIENT_ScrubIpFilterTypes_filters_value_H_ */
