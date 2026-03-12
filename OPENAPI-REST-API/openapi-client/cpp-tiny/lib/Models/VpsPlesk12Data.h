
/*
 * VpsPlesk12Data.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VpsPlesk12Data_H_
#define TINY_CPP_CLIENT_VpsPlesk12Data_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsPleskLicense.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsPlesk12Data{
public:

    /*! \brief Constructor.
	 */
    VpsPlesk12Data();
    VpsPlesk12Data(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsPlesk12Data();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsPleskLicense getAdmin();

	/*! \brief Set 
	 */
	void setAdmin(VpsPleskLicense admin);
	/*! \brief Get 
	 */
	VpsPleskLicense getPro();

	/*! \brief Set 
	 */
	void setPro(VpsPleskLicense pro);
	/*! \brief Get 
	 */
	VpsPleskLicense getHost();

	/*! \brief Set 
	 */
	void setHost(VpsPleskLicense host);


    private:
    VpsPleskLicense admin;
    VpsPleskLicense pro;
    VpsPleskLicense host;
};
}

#endif /* TINY_CPP_CLIENT_VpsPlesk12Data_H_ */
