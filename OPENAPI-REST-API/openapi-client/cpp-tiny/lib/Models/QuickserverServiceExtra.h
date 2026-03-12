
/*
 * Quickserver_serviceExtra.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Quickserver_serviceExtra_H_
#define TINY_CPP_CLIENT_Quickserver_serviceExtra_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Quickserver_serviceExtra{
public:

    /*! \brief Constructor.
	 */
    Quickserver_serviceExtra();
    Quickserver_serviceExtra(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Quickserver_serviceExtra();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Platform information
	 */
	std::string getPlatform();

	/*! \brief Set Platform information
	 */
	void setPlatform(std::string platform);


    private:
    std::string platform{};
};
}

#endif /* TINY_CPP_CLIENT_Quickserver_serviceExtra_H_ */
