
/*
 * VpsOrder_locationStock_1.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_locationStock_1_H_
#define TINY_CPP_CLIENT_VpsOrder_locationStock_1_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsOrder_locationStock_1{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_locationStock_1();
    VpsOrder_locationStock_1(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_locationStock_1();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isKvm();

	/*! \brief Set 
	 */
	void setKvm(bool kvm);
	/*! \brief Get 
	 */
	bool isKvmstorage();

	/*! \brief Set 
	 */
	void setKvmstorage(bool kvmstorage);
	/*! \brief Get 
	 */
	bool isHyperv();

	/*! \brief Set 
	 */
	void setHyperv(bool hyperv);


    private:
    bool kvm{};
    bool kvmstorage{};
    bool hyperv{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_locationStock_1_H_ */
