/*
 * QuickserverOrder.h
 *
 * Available QuickServer options and OS templates for ordering a new QuickServer.
 */

#ifndef _QuickserverOrder_H_
#define _QuickserverOrder_H_


#include <string>
#include "QuickserverOrder_distro_sel.h"
#include "QuickserverOrder_server_details.h"
#include "QuickserverOrder_templates.h"
#include "QuickserverOrder_version.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Available QuickServer options and OS templates for ordering a new QuickServer.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrder();
	QuickserverOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Quickserver ID.
	 */
	std::string getQsId();

	/*! \brief Set Quickserver ID.
	 */
	void setQsId(std::string  qs_id);
	/*! \brief Get 
	 */
	QuickserverOrder_server_details getServerDetails();

	/*! \brief Set 
	 */
	void setServerDetails(QuickserverOrder_server_details  server_details);
	/*! \brief Get 
	 */
	QuickserverOrder_templates getTemplates();

	/*! \brief Set 
	 */
	void setTemplates(QuickserverOrder_templates  templates);
	/*! \brief Get 
	 */
	QuickserverOrder_version getVersion();

	/*! \brief Set 
	 */
	void setVersion(QuickserverOrder_version  version);
	/*! \brief Get 
	 */
	QuickserverOrder_distro_sel getDistroSel();

	/*! \brief Set 
	 */
	void setDistroSel(QuickserverOrder_distro_sel  distro_sel);

private:
	std::string qs_id;
	QuickserverOrder_server_details server_details;
	QuickserverOrder_templates templates;
	QuickserverOrder_version version;
	QuickserverOrder_distro_sel distro_sel;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverOrder_H_ */
