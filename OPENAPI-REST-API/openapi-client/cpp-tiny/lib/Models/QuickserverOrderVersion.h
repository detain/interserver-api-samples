
/*
 * QuickserverOrder_version.h
 *
 * Version details.
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrder_version_H_
#define TINY_CPP_CLIENT_QuickserverOrder_version_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "QuickserverOrderVersionCentosstream8.h"

namespace Tiny {


/*! \brief Version details.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder_version{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrder_version();
    QuickserverOrder_version(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrder_version();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	QuickserverOrderVersionCentosstream8 getCentosstream8();

	/*! \brief Set 
	 */
	void setCentosstream8(QuickserverOrderVersionCentosstream8 centosstream8);


    private:
    QuickserverOrderVersionCentosstream8 centosstream8;
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrder_version_H_ */
