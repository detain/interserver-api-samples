
/*
 * VpsTemplatesList.h
 *
 * A listing of the OS Templates available for use.
 */

#ifndef TINY_CPP_CLIENT_VpsTemplatesList_H_
#define TINY_CPP_CLIENT_VpsTemplatesList_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsTemplateRow.h"
#include <list>

namespace Tiny {


/*! \brief A listing of the OS Templates available for use.
 *
 *  \ingroup Models
 *
 */

class VpsTemplatesList{
public:

    /*! \brief Constructor.
	 */
    VpsTemplatesList();
    VpsTemplatesList(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTemplatesList();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A listing of the templates.
	 */
	std::list<VpsTemplateRow> getTemplates();

	/*! \brief Set A listing of the templates.
	 */
	void setTemplates(std::list<VpsTemplateRow> templates);


    private:
    std::list<VpsTemplateRow> templates;
};
}

#endif /* TINY_CPP_CLIENT_VpsTemplatesList_H_ */
