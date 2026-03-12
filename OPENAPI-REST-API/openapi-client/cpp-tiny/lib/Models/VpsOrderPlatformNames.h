
/*
 * VpsOrder_platformNames.h
 *
 * Platform Names
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_platformNames_H_
#define TINY_CPP_CLIENT_VpsOrder_platformNames_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Platform Names
 *
 *  \ingroup Models
 *
 */

class VpsOrder_platformNames{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_platformNames();
    VpsOrder_platformNames(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_platformNames();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getKvm();

	/*! \brief Set 
	 */
	void setKvm(std::string kvm);
	/*! \brief Get 
	 */
	std::string getKvmstorage();

	/*! \brief Set 
	 */
	void setKvmstorage(std::string kvmstorage);
	/*! \brief Get 
	 */
	std::string getHyperv();

	/*! \brief Set 
	 */
	void setHyperv(std::string hyperv);


    private:
    std::string kvm{};
    std::string kvmstorage{};
    std::string hyperv{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_platformNames_H_ */
