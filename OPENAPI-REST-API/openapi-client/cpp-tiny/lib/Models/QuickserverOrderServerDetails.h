
/*
 * QuickserverOrder_server_details.h
 *
 * Server details.
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrder_server_details_H_
#define TINY_CPP_CLIENT_QuickserverOrder_server_details_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "QuickserverOrderServerDetails381.h"

namespace Tiny {


/*! \brief Server details.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder_server_details{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrder_server_details();
    QuickserverOrder_server_details(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrder_server_details();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	QuickserverOrderServerDetails381 get381();

	/*! \brief Set 
	 */
	void set381(QuickserverOrderServerDetails381 381);


    private:
    QuickserverOrderServerDetails381 381;
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrder_server_details_H_ */
