/*
 * BackupsOrderPackageCosts.h
 *
 * 
 */

#ifndef _BackupsOrderPackageCosts_H_
#define _BackupsOrderPackageCosts_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BackupsOrderPackageCosts : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupsOrderPackageCosts();
	BackupsOrderPackageCosts(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupsOrderPackageCosts();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The cost associated with package 11006.
	 */
	int get11006();

	/*! \brief Set The cost associated with package 11006.
	 */
	void set11006(int  11006);

private:
	int 11006;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupsOrderPackageCosts_H_ */
