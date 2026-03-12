
/*
 * QuickserverOrderVersionCentosstream8.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrderVersionCentosstream8_H_
#define TINY_CPP_CLIENT_QuickserverOrderVersionCentosstream8_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class QuickserverOrderVersionCentosstream8{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrderVersionCentosstream8();
    QuickserverOrderVersionCentosstream8(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrderVersionCentosstream8();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Version details of CentOS Stream 8.
	 */
	std::string getCentosstream8();

	/*! \brief Set Version details of CentOS Stream 8.
	 */
	void setCentosstream8(std::string centosstream8);


    private:
    std::string centosstream8{};
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrderVersionCentosstream8_H_ */
