/*
 * AccountFeatures.h
 *
 * Account Features data.
 */

#ifndef _AccountFeatures_H_
#define _AccountFeatures_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Account Features data.
 *
 *  \ingroup Models
 *
 */

class AccountFeatures : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountFeatures();
	AccountFeatures(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountFeatures();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getDisableReset();

	/*! \brief Set 
	 */
	void setDisableReset(int  disable_reset);
	/*! \brief Get 
	 */
	int getDisableReinstall();

	/*! \brief Set 
	 */
	void setDisableReinstall(int  disable_reinstall);

private:
	int disable_reset;
	int disable_reinstall;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountFeatures_H_ */
