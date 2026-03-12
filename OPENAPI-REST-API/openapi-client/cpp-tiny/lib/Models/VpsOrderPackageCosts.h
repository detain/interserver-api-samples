
/*
 * VpsOrder_packageCosts.h
 *
 * Package Costs
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_packageCosts_H_
#define TINY_CPP_CLIENT_VpsOrder_packageCosts_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Package Costs
 *
 *  \ingroup Models
 *
 */

class VpsOrder_packageCosts{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_packageCosts();
    VpsOrder_packageCosts(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_packageCosts();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	long get57();

	/*! \brief Set 
	 */
	void set57(long 57);


    private:
    long 57{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_packageCosts_H_ */
