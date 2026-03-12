
/*
 * TimezoneUpdate.h
 *
 * The request to update the time zone of a vps.
 */

#ifndef TINY_CPP_CLIENT_TimezoneUpdate_H_
#define TINY_CPP_CLIENT_TimezoneUpdate_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief The request to update the time zone of a vps.
 *
 *  \ingroup Models
 *
 */

class TimezoneUpdate{
public:

    /*! \brief Constructor.
	 */
    TimezoneUpdate();
    TimezoneUpdate(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TimezoneUpdate();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The time zone
	 */
	std::string getTimezone();

	/*! \brief Set The time zone
	 */
	void setTimezone(std::string timezone);


    private:
    std::string timezone{};
};
}

#endif /* TINY_CPP_CLIENT_TimezoneUpdate_H_ */
