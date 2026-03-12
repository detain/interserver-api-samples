
/*
 * VpsOrder_templates_hyperv.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_templates_hyperv_H_
#define TINY_CPP_CLIENT_VpsOrder_templates_hyperv_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsOrder_templates_hyperv_windows.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsOrder_templates_hyperv{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_templates_hyperv();
    VpsOrder_templates_hyperv(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_templates_hyperv();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsOrder_templates_hyperv_windows getWindows();

	/*! \brief Set 
	 */
	void setWindows(VpsOrder_templates_hyperv_windows windows);


    private:
    VpsOrder_templates_hyperv_windows windows;
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_templates_hyperv_H_ */
