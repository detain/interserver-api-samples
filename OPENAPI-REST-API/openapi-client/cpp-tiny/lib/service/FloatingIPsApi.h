#ifndef TINY_CPP_CLIENT_FloatingIPsApi_H_
#define TINY_CPP_CLIENT_FloatingIPsApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "ChargeInvoiceRows.h"
#include "Floating_ipsCancel_200_response.h"
#include "GetAccountInfo_401_response.h"
#include "Object.h"
#include "ServiceOrderPostResponse.h"
#include "SuccessTextResponse.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class FloatingIPsApi : public Service {
public:
    FloatingIPsApi() = default;

    virtual ~FloatingIPsApi();

    /**
    * Place Floating IP Order.
    *
    * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
    */
    Response<
                ServiceOrderPostResponse
        >
    addFloatingIp(
    );
    /**
    * Cancel Floating IP.
    *
    * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
    * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
    */
    Response<
                Floating_ipsCancel_200_response
        >
    floatingIpsCancel(
            
            int id
            
    );
    /**
    * View Floating IP.
    *
    * Returns detailed information about a specific Floating IP service including its current target IP assignment.
    * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
    */
    Response<
                Object
        >
    getFloatingIpInfo(
            
            int id
            
    );
    /**
    * Get Floating IP Invoices.
    *
    * Returns the billing invoices associated with this Floating IP service.
    * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getFloatingIpInvoices(
            
            int id
            
    );
    /**
    * List Floating IPs.
    *
    * Returns all Floating IP services on the account with their current status and assignment details.
    */
    Response<
            String
        >
    getFloatingIpsList(
    );
    /**
    * Resend Floating IPs Welcome Email.
    *
    * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
    * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getFloatingIpsWelcomeEmail(
            
            int id
            
    );
    /**
    * Get Floating IP Ordering Information.
    *
    * Retrieves available options and pricing for ordering a new Floating IP.
    */
    Response<
                Object
        >
    getNewFloatingIp(
    );
    /**
    * Change Floating IP Target.
    *
    * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
    * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
    * \param ip IP Address *Required*
    */
    Response<
                SuccessTextResponse
        >
    postFloatingIpsChangeIp(
            
            int id
            , 
            
            std::string ip
            
    );
    /**
    * Validate Floating IP Order.
    *
    * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
    */
    Response<
            String
        >
    putFloatingIps(
    );
    /**
    * Update Floating IP.
    *
    * Updates settings on a Floating IP service, such as its label or configuration metadata.
    * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateFloatingIpInfo(
            
            std::string id
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_FloatingIPsApi_H_ */