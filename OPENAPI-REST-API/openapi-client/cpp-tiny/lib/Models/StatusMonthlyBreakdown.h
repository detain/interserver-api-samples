
/*
 * StatusMonthlyBreakdown.h
 *
 * Monthly mail delivery status breakdown, showing counts per status category.
 */

#ifndef TINY_CPP_CLIENT_StatusMonthlyBreakdown_H_
#define TINY_CPP_CLIENT_StatusMonthlyBreakdown_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MonthlyCounts.h"

namespace Tiny {


/*! \brief Monthly mail delivery status breakdown, showing counts per status category.
 *
 *  \ingroup Models
 *
 */

class StatusMonthlyBreakdown{
public:

    /*! \brief Constructor.
	 */
    StatusMonthlyBreakdown();
    StatusMonthlyBreakdown(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~StatusMonthlyBreakdown();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	MonthlyCounts&lt;std::string, int&gt; getRDefault();

	/*! \brief Set 
	 */
	void setRDefault(MonthlyCounts&lt;std::string, int&gt; r_default);
	/*! \brief Get 
	 */
	MonthlyCounts&lt;std::string, int&gt; getFailed();

	/*! \brief Set 
	 */
	void setFailed(MonthlyCounts&lt;std::string, int&gt; failed);
	/*! \brief Get 
	 */
	MonthlyCounts&lt;std::string, int&gt; getRejected();

	/*! \brief Set 
	 */
	void setRejected(MonthlyCounts&lt;std::string, int&gt; rejected);
	/*! \brief Get 
	 */
	MonthlyCounts&lt;std::string, int&gt; getPending();

	/*! \brief Set 
	 */
	void setPending(MonthlyCounts&lt;std::string, int&gt; pending);
	/*! \brief Get 
	 */
	MonthlyCounts&lt;std::string, int&gt; getLocked();

	/*! \brief Set 
	 */
	void setLocked(MonthlyCounts&lt;std::string, int&gt; locked);
	/*! \brief Get 
	 */
	MonthlyCounts&lt;std::string, int&gt; getPaid();

	/*! \brief Set 
	 */
	void setPaid(MonthlyCounts&lt;std::string, int&gt; paid);


    private:
    MonthlyCounts&lt;std::string, int&gt; r_default;
    MonthlyCounts&lt;std::string, int&gt; failed;
    MonthlyCounts&lt;std::string, int&gt; rejected;
    MonthlyCounts&lt;std::string, int&gt; pending;
    MonthlyCounts&lt;std::string, int&gt; locked;
    MonthlyCounts&lt;std::string, int&gt; paid;
};
}

#endif /* TINY_CPP_CLIENT_StatusMonthlyBreakdown_H_ */
