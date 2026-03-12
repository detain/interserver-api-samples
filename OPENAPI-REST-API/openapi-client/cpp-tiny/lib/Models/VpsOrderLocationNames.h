
/*
 * VpsOrder_locationNames.h
 *
 * Location Names
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_locationNames_H_
#define TINY_CPP_CLIENT_VpsOrder_locationNames_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Location Names
 *
 *  \ingroup Models
 *
 */

class VpsOrder_locationNames{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_locationNames();
    VpsOrder_locationNames(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_locationNames();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string get3();

	/*! \brief Set 
	 */
	void set3(std::string 3);


    private:
    std::string 3{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_locationNames_H_ */
