/*
 * SearchAutocompleteResponse.h
 *
 * Autocomplete search results for the authenticated account.
 */

#ifndef _SearchAutocompleteResponse_H_
#define _SearchAutocompleteResponse_H_


#include <string>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Autocomplete search results for the authenticated account.
 *
 *  \ingroup Models
 *
 */

class SearchAutocompleteResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	SearchAutocompleteResponse();
	SearchAutocompleteResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SearchAutocompleteResponse();

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

#endif /* _SearchAutocompleteResponse_H_ */
