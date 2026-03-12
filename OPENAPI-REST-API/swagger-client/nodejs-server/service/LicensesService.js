'use strict';


/**
 * Place License Order
 * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
 *
 * no response value expected for this operation
 **/
exports.addLicense = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get License
 * Returns detailed information about a specific license including its type, IP assignment, and status.
 *
 * id Integer The license service ID. Use `license_id` from `GET /licenses`.
 * returns License
 **/
exports.getLicenseInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "serviceType" : {
    "services_id" : "5034",
    "services_category" : "508",
    "services_field1" : "16",
    "services_field2" : "",
    "services_name" : "KernelCare License",
    "services_type" : "508",
    "services_buyable" : "1",
    "services_cost" : "2.95",
    "services_module" : "licenses"
  },
  "serviceExtra" : [ "serviceExtra", "serviceExtra" ],
  "package" : "KernelCare License",
  "client_links" : [ {
    "link" : "invoices",
    "icon" : "fas fa-file-invoice-dollar fa-w-12",
    "other_attr" : "",
    "label" : "Invoices",
    "icon_text" : "",
    "help_text" : "Invoice History"
  }, {
    "link" : "invoices",
    "icon" : "fas fa-file-invoice-dollar fa-w-12",
    "other_attr" : "",
    "label" : "Invoices",
    "icon_text" : "",
    "help_text" : "Invoice History"
  } ],
  "billingDetails" : {
    "service_currency" : "USD",
    "service_extra" : [ "service_extra", "service_extra" ],
    "service_payment_status" : "Paid",
    "service_next_invoice_date" : "September 14, 2023",
    "service_frequency" : "Monthly",
    "service_coupon" : "ACOUPONFORLICENSES",
    "service_last_invoice_date" : "August 14, 2023",
    "service_currency_symbol" : "$",
    "service_extra_json" : "[\"\"]",
    "service_cost_info" : "0.00",
    "next_date" : "2023-09-14T09:39:46Z"
  },
  "serviceInfo" : {
    "license_order_date" : "2020-01-14T10:48:14Z",
    "license_hostname" : "",
    "license_extra" : "",
    "license_currency" : "USD",
    "license_id" : "386522",
    "license_type" : "5034",
    "license_coupon" : "1836",
    "license_custid" : "771282",
    "license_ip" : "1.2.3.4",
    "license_status" : "active",
    "license_invoice" : "18704419",
    "license_key" : ""
  },
  "extraInfoTables" : {
    "ip_info" : {
      "title" : "IP Information",
      "rows" : [ {
        "value" : "255.255.255.248",
        "desc" : "Netmask"
      }, {
        "value" : "255.255.255.248",
        "desc" : "Netmask"
      } ]
    }
  },
  "custCurrencySymbol" : "$",
  "service_overview_extra" : "service_overview_extra",
  "custCurrency" : "USD",
  "license_key" : ""
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get License Invoices
 * Returns the billing invoices associated with this license service.
 *
 * id Integer The license service ID. Use `license_id` from `GET /licenses`.
 * returns ChargeInvoiceRows
 **/
exports.getLicenseInvoices = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "invoices" : {
    "1234565" : {
      "invoices_id" : 1234565,
      "invoices_description" : "Current IP + Scrub",
      "invoices_amount" : 5,
      "invoices_date" : "2025-12-05T19:38:24.000Z",
      "invoices_paid" : 1,
      "invoices_due_date" : "2025-12-19T19:38:24.000Z",
      "invoices_currency" : "USD",
      "currency_symbol" : "$",
      "invoices_date_formatted" : "5th Dec 2025",
      "paid_invoices" : {
        "654321" : {
          "invoices_id" : "654321,",
          "invoices_description" : "Credit Card Payment 2189347824",
          "invoices_amount" : 5,
          "invoices_date" : "2025-12-05T19:38:38.000Z",
          "invoices_currency" : "USD",
          "currency_symbol" : "$",
          "invoices_date_formatted" : "5th Dec 2025",
          "payment_type" : "Credit Card Payment",
          "refund_invoices" : {
            "98765" : {
              "invoices_id" : 98765,
              "invoices_description" : "REFUND: Credit Card Payment 2189347824",
              "invoices_amount" : 5,
              "invoices_date" : "2025-12-16T13:32:22.000Z",
              "invoices_currency" : "USD",
              "currency_symbol" : "$",
              "invoices_date_formatted" : "16th Dec 2025"
            }
          }
        }
      }
    }
  }
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Licenses
 * Returns all software license services on the account with their current status and IP assignments.
 *
 * returns List
 **/
exports.getLicenseList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "license_id" : "386111",
  "license_hostname" : "",
  "license_ip" : "66.45.228.100",
  "services_name" : "Imunify360 up to 30 users",
  "cost" : "25.00",
  "license_status" : "canceled",
  "invoices_paid" : "1",
  "invoices_date" : "2019-08-28T14:27:22.000Z"
}, {
  "license_id" : "386111",
  "license_hostname" : "",
  "license_ip" : "66.45.228.100",
  "services_name" : "Imunify360 up to 30 users",
  "cost" : "25.00",
  "license_status" : "canceled",
  "invoices_paid" : "1",
  "invoices_date" : "2019-08-28T14:27:22.000Z"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get License Order Information for Category
 * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
 *
 * catTag String The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.
 * no response value expected for this operation
 **/
exports.getLicenseOrderCatTagInfo = function(catTag) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Resend License Welcome Email
 * Resends the welcome email for the license service. The email contains the license key and activation instructions.
 *
 * id Integer The license service ID. Use `license_id` from `GET /licenses`.
 * returns SuccessTextResponse
 **/
exports.getLicensesWelcomeEmail = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Ok"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get License Order Information
 * Retrieves available license types, categories, and pricing for ordering a new license.
 *
 * returns LicensesOrder
 **/
exports.getNewLicense = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "packageCosts" : {
    "LicensesOrderPackageCosts11468" : 3.75
  },
  "serviceTypes" : {
    "LicensesOrderServiceTypes11482" : {
      "services_id" : "11482",
      "services_category" : "506",
      "services_field1" : "2704,Standard",
      "services_field2" : "Unlimited Accounts & Domains<br><br>The DirectAdmin standard license is best for medium to large shared-hosting and/or reseller-hosting companies. No limit on accounts or domains.",
      "services_name" : "DirectAdmin Standard",
      "services_type" : "506",
      "services_buyable" : "1",
      "services_cost" : "21.75",
      "services_module" : "licenses"
    }
  },
  "serviceCategories" : {
    "LicensesOrderServiceCategories509" : {
      "category_name" : "Webuzo",
      "category_id" : "509",
      "category_tag" : "webuzo",
      "category_module" : "licenses"
    }
  }
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Cancel License
 * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
 *
 * id Integer The license service ID. Use `license_id` from `GET /licenses`.
 * returns inline_response_200_4
 **/
exports.licensesCancel = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "License is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Change License IP
 * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
 *
 * body IpObject 
 * id Integer The license service ID. Use `license_id` from `GET /licenses`.
 * returns SuccessTextResponse
 **/
exports.postLicenseChangeIp = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Ok"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Change License IP
 * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
 *
 * body IpObject 
 * id Integer The license service ID. Use `license_id` from `GET /licenses`.
 * returns SuccessTextResponse
 **/
exports.postLicenseChangeIp = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Ok"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Validate License Order
 * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
 *
 * no response value expected for this operation
 **/
exports.putLicenses = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Update License
 * Updates settings on a license service such as its assigned IP.
 *
 * id String The license service ID. Use `license_id` from `GET /licenses`.
 * no response value expected for this operation
 **/
exports.updateLicenseInfo = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}

