/*
 * AssetServer_CPU_inner.h
 *
 * 
 */

#ifndef _AssetServer_CPU_inner_H_
#define _AssetServer_CPU_inner_H_


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

class AssetServer_CPU_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	AssetServer_CPU_inner();
	AssetServer_CPU_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AssetServer_CPU_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _AssetServer_CPU_inner_H_ */
