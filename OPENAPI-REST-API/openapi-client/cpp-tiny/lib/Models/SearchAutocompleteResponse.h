
/*
 * SearchAutocompleteResponse.h
 *
 * Autocomplete search results for the authenticated account.
 */

#ifndef TINY_CPP_CLIENT_SearchAutocompleteResponse_H_
#define TINY_CPP_CLIENT_SearchAutocompleteResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Object.h"
#include <map>

namespace Tiny {


/*! \brief Autocomplete search results for the authenticated account.
 *
 *  \ingroup Models
 *
 */

class SearchAutocompleteResponse{
public:

    /*! \brief Constructor.
	 */
    SearchAutocompleteResponse();
    SearchAutocompleteResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~SearchAutocompleteResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_SearchAutocompleteResponse_H_ */
