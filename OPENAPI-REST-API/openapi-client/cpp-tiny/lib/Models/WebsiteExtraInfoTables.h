
/*
 * WebsiteExtraInfoTables.h
 *
 * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 */

#ifndef TINY_CPP_CLIENT_WebsiteExtraInfoTables_H_
#define TINY_CPP_CLIENT_WebsiteExtraInfoTables_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "WebsiteTable.h"

namespace Tiny {


/*! \brief Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 *
 *  \ingroup Models
 *
 */

class WebsiteExtraInfoTables{
public:

    /*! \brief Constructor.
	 */
    WebsiteExtraInfoTables();
    WebsiteExtraInfoTables(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsiteExtraInfoTables();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	WebsiteTable getLinks();

	/*! \brief Set 
	 */
	void setLinks(WebsiteTable links);
	/*! \brief Get 
	 */
	WebsiteTable getPreview();

	/*! \brief Set 
	 */
	void setPreview(WebsiteTable preview);
	/*! \brief Get 
	 */
	WebsiteTable getDns();

	/*! \brief Set 
	 */
	void setDns(WebsiteTable dns);


    private:
    WebsiteTable links;
    WebsiteTable preview;
    WebsiteTable dns;
};
}

#endif /* TINY_CPP_CLIENT_WebsiteExtraInfoTables_H_ */
