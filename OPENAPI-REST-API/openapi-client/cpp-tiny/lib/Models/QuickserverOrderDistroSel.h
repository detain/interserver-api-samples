
/*
 * QuickserverOrder_distro_sel.h
 *
 * Distribution selection.
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrder_distro_sel_H_
#define TINY_CPP_CLIENT_QuickserverOrder_distro_sel_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "QuickserverOrderDistroSelUbuntu.h"

namespace Tiny {


/*! \brief Distribution selection.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder_distro_sel{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrder_distro_sel();
    QuickserverOrder_distro_sel(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrder_distro_sel();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	QuickserverOrderDistroSelUbuntu getUbuntu();

	/*! \brief Set 
	 */
	void setUbuntu(QuickserverOrderDistroSelUbuntu ubuntu);


    private:
    QuickserverOrderDistroSelUbuntu ubuntu;
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrder_distro_sel_H_ */
