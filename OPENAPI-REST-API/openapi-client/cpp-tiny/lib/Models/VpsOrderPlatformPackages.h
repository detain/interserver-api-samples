
/*
 * VpsOrder_platformPackages.h
 *
 * Platform Packages
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_platformPackages_H_
#define TINY_CPP_CLIENT_VpsOrder_platformPackages_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Platform Packages
 *
 *  \ingroup Models
 *
 */

class VpsOrder_platformPackages{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_platformPackages();
    VpsOrder_platformPackages(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_platformPackages();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	long getKvm();

	/*! \brief Set 
	 */
	void setKvm(long kvm);
	/*! \brief Get 
	 */
	long getKvmstorage();

	/*! \brief Set 
	 */
	void setKvmstorage(long kvmstorage);
	/*! \brief Get 
	 */
	long getHyperv();

	/*! \brief Set 
	 */
	void setHyperv(long hyperv);


    private:
    long kvm{};
    long kvmstorage{};
    long hyperv{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_platformPackages_H_ */
