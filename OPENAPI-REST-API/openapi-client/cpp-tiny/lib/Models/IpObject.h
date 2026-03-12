
/*
 * IpObject.h
 *
 * IP Address
 */

#ifndef TINY_CPP_CLIENT_IpObject_H_
#define TINY_CPP_CLIENT_IpObject_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief IP Address
 *
 *  \ingroup Models
 *
 */

class IpObject{
public:

    /*! \brief Constructor.
	 */
    IpObject();
    IpObject(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~IpObject();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get IP Address
	 */
	std::string getIp();

	/*! \brief Set IP Address
	 */
	void setIp(std::string ip);


    private:
    std::string ip{};
};
}

#endif /* TINY_CPP_CLIENT_IpObject_H_ */
