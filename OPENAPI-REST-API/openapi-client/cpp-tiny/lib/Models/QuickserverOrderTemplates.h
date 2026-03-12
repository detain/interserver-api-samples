
/*
 * QuickserverOrder_templates.h
 *
 * Templates details.
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrder_templates_H_
#define TINY_CPP_CLIENT_QuickserverOrder_templates_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "QuickserverOrderTemplatesUbuntu64.h"

namespace Tiny {


/*! \brief Templates details.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder_templates{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrder_templates();
    QuickserverOrder_templates(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrder_templates();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	QuickserverOrderTemplatesUbuntu64 getUbuntu();

	/*! \brief Set 
	 */
	void setUbuntu(QuickserverOrderTemplatesUbuntu64 ubuntu);


    private:
    QuickserverOrderTemplatesUbuntu64 ubuntu;
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrder_templates_H_ */
