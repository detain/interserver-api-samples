
/*
 * MonthlyCounts.h
 *
 * A map of month labels (e.g., \&quot;2024-01\&quot;) to counts for a specific mail status.
 */

#ifndef TINY_CPP_CLIENT_MonthlyCounts_H_
#define TINY_CPP_CLIENT_MonthlyCounts_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <map>

namespace Tiny {


/*! \brief A map of month labels (e.g., \"2024-01\") to counts for a specific mail status.
 *
 *  \ingroup Models
 *
 */

class MonthlyCounts{
public:

    /*! \brief Constructor.
	 */
    MonthlyCounts();
    MonthlyCounts(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MonthlyCounts();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_MonthlyCounts_H_ */
