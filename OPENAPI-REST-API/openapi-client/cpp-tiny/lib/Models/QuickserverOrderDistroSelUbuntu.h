
/*
 * QuickserverOrderDistroSelUbuntu.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrderDistroSelUbuntu_H_
#define TINY_CPP_CLIENT_QuickserverOrderDistroSelUbuntu_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class QuickserverOrderDistroSelUbuntu{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrderDistroSelUbuntu();
    QuickserverOrderDistroSelUbuntu(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrderDistroSelUbuntu();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Selected distribution for Ubuntu.
	 */
	std::string getUbuntu();

	/*! \brief Set Selected distribution for Ubuntu.
	 */
	void setUbuntu(std::string ubuntu);


    private:
    std::string ubuntu{};
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrderDistroSelUbuntu_H_ */
