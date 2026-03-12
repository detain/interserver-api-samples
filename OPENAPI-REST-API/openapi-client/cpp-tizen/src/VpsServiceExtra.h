/*
 * VpsServiceExtra.h
 *
 * 
 */

#ifndef _VpsServiceExtra_H_
#define _VpsServiceExtra_H_


#include <string>
#include "VpsSnapshot.h"
#include <list>
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

class VpsServiceExtra : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsServiceExtra();
	VpsServiceExtra(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsServiceExtra();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Spice
	 */
	int getSpice();

	/*! \brief Set Spice
	 */
	void setSpice(int  spice);
	/*! \brief Get 
	 */
	std::list<VpsSnapshot> getSnapshots();

	/*! \brief Set 
	 */
	void setSnapshots(std::list <VpsSnapshot> snapshots);

private:
	int spice;
	std::list <VpsSnapshot>snapshots;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsServiceExtra_H_ */
