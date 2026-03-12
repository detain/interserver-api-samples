
/*
 * VpsOrder_templates_hyperv_windows.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_templates_hyperv_windows_H_
#define TINY_CPP_CLIENT_VpsOrder_templates_hyperv_windows_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsOrder_templates_hyperv_windows{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_templates_hyperv_windows();
    VpsOrder_templates_hyperv_windows(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_templates_hyperv_windows();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getWindows2019Standard();

	/*! \brief Set 
	 */
	void setWindows2019Standard(std::string windows2019Standard);
	/*! \brief Get 
	 */
	std::string getWindows2022();

	/*! \brief Set 
	 */
	void setWindows2022(std::string windows2022);


    private:
    std::string windows2019Standard{};
    std::string windows2022{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_templates_hyperv_windows_H_ */
