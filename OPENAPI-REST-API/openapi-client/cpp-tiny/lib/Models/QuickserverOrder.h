
/*
 * QuickserverOrder.h
 *
 * Available QuickServer options and OS templates for ordering a new QuickServer.
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrder_H_
#define TINY_CPP_CLIENT_QuickserverOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "QuickserverOrder_distro_sel.h"
#include "QuickserverOrder_server_details.h"
#include "QuickserverOrder_templates.h"
#include "QuickserverOrder_version.h"

namespace Tiny {


/*! \brief Available QuickServer options and OS templates for ordering a new QuickServer.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrder();
    QuickserverOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Quickserver ID.
	 */
	std::string getQsId();

	/*! \brief Set Quickserver ID.
	 */
	void setQsId(std::string qs_id);
	/*! \brief Get 
	 */
	QuickserverOrder_server_details getServerDetails();

	/*! \brief Set 
	 */
	void setServerDetails(QuickserverOrder_server_details server_details);
	/*! \brief Get 
	 */
	QuickserverOrder_templates getTemplates();

	/*! \brief Set 
	 */
	void setTemplates(QuickserverOrder_templates templates);
	/*! \brief Get 
	 */
	QuickserverOrder_version getVersion();

	/*! \brief Set 
	 */
	void setVersion(QuickserverOrder_version version);
	/*! \brief Get 
	 */
	QuickserverOrder_distro_sel getDistroSel();

	/*! \brief Set 
	 */
	void setDistroSel(QuickserverOrder_distro_sel distro_sel);


    private:
    std::string qs_id{};
    QuickserverOrder_server_details server_details;
    QuickserverOrder_templates templates;
    QuickserverOrder_version version;
    QuickserverOrder_distro_sel distro_sel;
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrder_H_ */
