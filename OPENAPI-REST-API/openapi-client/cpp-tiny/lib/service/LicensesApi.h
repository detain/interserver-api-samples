#ifndef TINY_CPP_CLIENT_LicensesApi_H_
#define TINY_CPP_CLIENT_LicensesApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "ChargeInvoiceRows.h"
#include "GetAccountInfo_401_response.h"
#include "IpObject.h"
#include "License.h"
#include "LicenseRow.h"
#include "LicensesCancel_200_response.h"
#include "LicensesOrder.h"
#include "SuccessTextResponse.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class LicensesApi : public Service {
public:
    LicensesApi() = default;

    virtual ~LicensesApi();

    /**
    * Place License Order.
    *
    * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
    */
    Response<
            String
        >
    addLicense(
    );
    /**
    * Get License.
    *
    * Returns detailed information about a specific license including its type, IP assignment, and status.
    * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
    */
    Response<
                License
        >
    getLicenseInfo(
            
            int id
            
    );
    /**
    * Get License Invoices.
    *
    * Returns the billing invoices associated with this license service.
    * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getLicenseInvoices(
            
            int id
            
    );
    /**
    * List Licenses.
    *
    * Returns all software license services on the account with their current status and IP assignments.
    */
    Response<
                    std::list<LicenseRow>
        >
    getLicenseList(
    );
    /**
    * Get License Order Information for Category.
    *
    * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
    * \param catTag The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response. *Required*
    */
    Response<
            String
        >
    getLicenseOrderCatTagInfo(
            
            std::string catTag
            
    );
    /**
    * Resend License Welcome Email.
    *
    * Resends the welcome email for the license service. The email contains the license key and activation instructions.
    * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getLicensesWelcomeEmail(
            
            int id
            
    );
    /**
    * Get License Order Information.
    *
    * Retrieves available license types, categories, and pricing for ordering a new license.
    */
    Response<
                LicensesOrder
        >
    getNewLicense(
    );
    /**
    * Cancel License.
    *
    * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
    * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
    */
    Response<
                LicensesCancel_200_response
        >
    licensesCancel(
            
            int id
            
    );
    /**
    * Change License IP.
    *
    * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
    * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
    * \param ipObject  *Required*
    */
    Response<
                SuccessTextResponse
        >
    postLicenseChangeIp(
            
            int id
            , 
            
            IpObject ipObject
            
    );
    /**
    * Validate License Order.
    *
    * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
    */
    Response<
            String
        >
    putLicenses(
    );
    /**
    * Update License.
    *
    * Updates settings on a license service such as its assigned IP.
    * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
    */
    Response<
            String
        >
    updateLicenseInfo(
            
            std::string id
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_LicensesApi_H_ */