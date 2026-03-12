
/*
 * BuyItNowList.h
 *
 * Marketplace buy it now servers list
 */

#ifndef TINY_CPP_CLIENT_BuyItNowList_H_
#define TINY_CPP_CLIENT_BuyItNowList_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BuyItNowRow.h"
#include <list>

namespace Tiny {


/*! \brief Marketplace buy it now servers list
 *
 *  \ingroup Models
 *
 */

class BuyItNowList{
public:

    /*! \brief Constructor.
	 */
    BuyItNowList();
    BuyItNowList(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BuyItNowList();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_BuyItNowList_H_ */
