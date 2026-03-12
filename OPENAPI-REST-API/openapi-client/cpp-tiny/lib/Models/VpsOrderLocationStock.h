
/*
 * VpsOrder_locationStock.h
 *
 * Location Stock
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_locationStock_H_
#define TINY_CPP_CLIENT_VpsOrder_locationStock_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsOrder_locationStock_1.h"

namespace Tiny {


/*! \brief Location Stock
 *
 *  \ingroup Models
 *
 */

class VpsOrder_locationStock{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_locationStock();
    VpsOrder_locationStock(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_locationStock();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsOrder_locationStock_1 get1();

	/*! \brief Set 
	 */
	void set1(VpsOrder_locationStock_1 1);


    private:
    VpsOrder_locationStock_1 1;
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_locationStock_H_ */
