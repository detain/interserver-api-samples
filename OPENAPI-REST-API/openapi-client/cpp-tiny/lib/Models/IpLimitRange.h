
/*
 * IpLimitRange.h
 *
 * The lower and upper bounds of an ip range.
 */

#ifndef TINY_CPP_CLIENT_IpLimitRange_H_
#define TINY_CPP_CLIENT_IpLimitRange_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief The lower and upper bounds of an ip range.
 *
 *  \ingroup Models
 *
 */

class IpLimitRange{
public:

    /*! \brief Constructor.
	 */
    IpLimitRange();
    IpLimitRange(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~IpLimitRange();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The begining (or first) IP address in the range.
	 */
	std::string getStart();

	/*! \brief Set The begining (or first) IP address in the range.
	 */
	void setStart(std::string start);
	/*! \brief Get The ending (or last) IP address in the range.
	 */
	std::string getEnd();

	/*! \brief Set The ending (or last) IP address in the range.
	 */
	void setEnd(std::string end);


    private:
    std::string start{};
    std::string end{};
};
}

#endif /* TINY_CPP_CLIENT_IpLimitRange_H_ */
