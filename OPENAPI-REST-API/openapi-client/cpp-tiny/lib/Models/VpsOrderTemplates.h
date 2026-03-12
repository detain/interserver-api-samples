
/*
 * VpsOrder_templates.h
 *
 * Templates
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_templates_H_
#define TINY_CPP_CLIENT_VpsOrder_templates_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsOrder_templates_hyperv.h"

namespace Tiny {


/*! \brief Templates
 *
 *  \ingroup Models
 *
 */

class VpsOrder_templates{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_templates();
    VpsOrder_templates(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_templates();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsOrder_templates_hyperv getHyperv();

	/*! \brief Set 
	 */
	void setHyperv(VpsOrder_templates_hyperv hyperv);


    private:
    VpsOrder_templates_hyperv hyperv;
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_templates_H_ */
