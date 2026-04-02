'use strict';


/**
 * Place Domain Order
 * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
 *
 * returns ServiceOrderPostResponse
 **/
exports.addDomain = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "continue" : true,
  "errors" : [ ],
  "total_cost" : "5.00",
  "iid" : "25296600",
  "iids" : [ "SERVICE12345" ],
  "real_iids" : [ "25296600" ],
  "serviceId" : 12345,
  "invoice_description" : "New Service Order"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Add Domain DNSSEC Records
 * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
 *
 * body DomainDnssecRequest 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.addDomainDnssec = function(body,id) {
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
 * Add Domain DNSSEC Records
 * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
 *
 * body DomainDnssecRequest 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.addDomainDnssec = function(body,id) {
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
 * Add Registered Nameserver
 * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
 *
 * body DomainNameserverPostRequest 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns TextResponse
 **/
exports.addDomainNameserver = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "You were successfull."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Add Registered Nameserver
 * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
 *
 * body DomainNameserverPostRequest 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns TextResponse
 **/
exports.addDomainNameserver = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "You were successfull."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Cancel Domain Order
 * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns inline_response_200_2
 **/
exports.cancelDomain = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Domains is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Remove Domain DNSSEC Records
 * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * action String Set to `delete` to remove all DNSSEC records.
 * returns SuccessTextResponse
 **/
exports.deleteDomainDnssec = function(id,action) {
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
 * Delete Registered Nameserver
 * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * index Integer The index of the registered nameserver from the registered nameservers list to delete.  
 * returns TextResponse
 **/
exports.deleteDomainNameserver = function(id,index) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "You were successfull."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Domain Contact Details
 * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns DomainContactDetails
 **/
exports.getDomainContact = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "country" : "country",
  "address3" : "address3",
  "address2" : "address2",
  "city" : "city",
  "address1" : "address1",
  "last_name" : "last_name",
  "phone" : "phone",
  "state" : "state",
  "org_name" : "org_name",
  "postal_code" : "postal_code",
  "fax" : "fax",
  "first_name" : "first_name",
  "email" : "email",
  "status" : "status"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Domain DNSSEC Records
 * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns DomainDnssecRecords
 **/
exports.getDomainDnssec = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "key_tag" : "key_tag",
  "digest_type" : "digest_type",
  "digest" : "digest",
  "algorithm" : "algorithm"
}, {
  "key_tag" : "key_tag",
  "digest_type" : "digest_type",
  "digest" : "digest",
  "algorithm" : "algorithm"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Domain Order
 * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns Domain
 **/
exports.getDomainInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "client_links" : [ {
    "link" : "link",
    "icon" : "icon",
    "label" : "label",
    "icon_text" : "icon_text",
    "help_text" : "help_text"
  }, {
    "link" : "link",
    "icon" : "icon",
    "label" : "label",
    "icon_text" : "icon_text",
    "help_text" : "help_text"
  } ],
  "billingDetails" : {
    "service_currency" : "service_currency",
    "service_extra" : {
      "zip" : "zip",
      "country" : "country",
      "firstname" : "firstname",
      "address" : "address",
      "address3" : "address3",
      "address2" : "address2",
      "city" : "city",
      "lastname" : "lastname",
      "domain_id" : "domain_id",
      "provProcessPending" : {
        "protocol" : "protocol",
        "response_code" : "response_code",
        "action" : "action",
        "response_text" : "response_text",
        "attributes" : {
          "registration expiration date" : "registration expiration date",
          "f_auto_renew" : "f_auto_renew",
          "id" : "id",
          "order_id" : "order_id"
        },
        "_OPS_version" : "_OPS_version",
        "is_success" : "is_success",
        "object" : "object"
      },
      "phone" : "phone",
      "company" : "company",
      "state" : "state",
      "fax" : "fax",
      "order_id" : "order_id",
      "email" : "email",
      "order" : {
        "protocol" : "protocol",
        "response_code" : "response_code",
        "action" : "action",
        "attributes" : {
          "id" : "id",
          "admin_email" : "admin_email"
        },
        "response_text" : "response_text",
        "_OPS_version" : "_OPS_version",
        "is_success" : "is_success",
        "object" : "object"
      }
    },
    "service_payment_status" : "service_payment_status",
    "service_next_invoice_date" : "service_next_invoice_date",
    "service_frequency" : "service_frequency",
    "service_last_invoice_date" : "service_last_invoice_date",
    "service_currency_symbol" : "service_currency_symbol",
    "service_extra_json" : "service_extra_json",
    "service_cost_info" : "service_cost_info",
    "next_date" : "next_date"
  },
  "pwarning" : "pwarning",
  "whoisPrivacy" : "whoisPrivacy",
  "serviceInfo" : {
    "domain_id" : "domain_id",
    "domain_password" : "domain_password",
    "domain_type" : "domain_type",
    "domain_expire_date" : "domain_expire_date",
    "domain_status" : "domain_status",
    "domain_hostname" : "domain_hostname",
    "domain_username" : "domain_username",
    "domain_order_date" : "domain_order_date",
    "domain_invoice" : "domain_invoice",
    "domain_currency" : "domain_currency",
    "domain_custid" : "domain_custid",
    "domain_coupon" : "domain_coupon"
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
  "contact_details" : {
    "country" : "country",
    "address3" : "address3",
    "address2" : "address2",
    "city" : "city",
    "address1" : "address1",
    "last_name" : "last_name",
    "phone" : "phone",
    "state" : "state",
    "org_name" : "org_name",
    "postal_code" : "postal_code",
    "fax" : "fax",
    "first_name" : "first_name",
    "email" : "email",
    "status" : "status"
  },
  "registrarStatus" : "registrarStatus",
  "transfer_info" : "transfer_info",
  "allInfo" : {
    "protocol" : "protocol",
    "response_code" : "response_code",
    "action" : "action",
    "attributes" : {
      "registry_createdate" : "registry_createdate",
      "registry_expiredate" : "registry_expiredate",
      "sponsoring_rsp" : "sponsoring_rsp",
      "auto_renew" : "auto_renew",
      "registry_updatedate" : "registry_updatedate",
      "affiliate_id" : "affiliate_id",
      "contact_set" : {
        "owner" : {
          "country" : "country",
          "address3" : "address3",
          "address2" : "address2",
          "city" : "city",
          "address1" : "address1",
          "last_name" : "last_name",
          "phone" : "phone",
          "state" : "state",
          "postal_code" : "postal_code",
          "org_name" : "org_name",
          "fax" : "fax",
          "first_name" : "first_name",
          "email" : "email",
          "status" : "status"
        },
        "tech" : {
          "country" : "country",
          "address3" : "address3",
          "address2" : "address2",
          "city" : "city",
          "address1" : "address1",
          "last_name" : "last_name",
          "phone" : "phone",
          "state" : "state",
          "org_name" : "org_name",
          "postal_code" : "postal_code",
          "fax" : "fax",
          "first_name" : "first_name",
          "email" : "email",
          "status" : "status"
        },
        "admin" : {
          "country" : "country",
          "address3" : "address3",
          "address2" : "address2",
          "city" : "city",
          "address1" : "address1",
          "last_name" : "last_name",
          "phone" : "phone",
          "state" : "state",
          "org_name" : "org_name",
          "postal_code" : "postal_code",
          "fax" : "fax",
          "first_name" : "first_name",
          "email" : "email",
          "status" : "status"
        }
      },
      "nameserver_list" : [ {
        "ipaddress" : "ipaddress",
        "name" : "name",
        "sortorder" : "sortorder"
      }, {
        "ipaddress" : "ipaddress",
        "name" : "name",
        "sortorder" : "sortorder"
      } ],
      "tld_data" : "tld_data",
      "expiredate" : "expiredate",
      "gdpr_consent_status" : "gdpr_consent_status",
      "let_expire" : "let_expire"
    },
    "response_text" : "response_text",
    "_OPS_version" : "_OPS_version",
    "is_success" : "is_success",
    "object" : "object"
  },
  "serviceTypes" : {
    "key" : {
      "services_id" : "services_id",
      "services_category" : "services_category",
      "services_field1" : "services_field1",
      "services_field2" : "services_field2",
      "services_name" : "services_name",
      "services_type" : "services_type",
      "services_buyable" : "services_buyable",
      "services_cost" : "services_cost",
      "services_module" : "services_module"
    }
  },
  "autoRenew" : "autoRenew",
  "custCurrencySymbol" : "custCurrencySymbol",
  "custCurrency" : "custCurrency",
  "locked" : "locked",
  "errors" : true,
  "domain_logs" : [ "domain_logs", "domain_logs" ]
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Domain Invoices
 * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns ChargeInvoiceRows
 **/
exports.getDomainInvoices = function(id) {
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
 * Lookup Domain Availability and Pricing
 * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
 *
 * name String The full domain name to look up (for example `example.com`).
 * returns DomainLookupResponse
 **/
exports.getDomainLookup = function(name) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "new" : "new",
  "website" : true,
  "domain_service" : true,
  "premium" : true,
  "transfer" : "transfer",
  "renewal" : "renewal",
  "service" : { },
  "available" : true,
  "whois_privacy" : true,
  "fields" : { },
  "currencies" : { }
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Registered Nameservers
 * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns DomainNameserverGetResponse
 **/
exports.getDomainNameservers = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "ipaddress" : "1.2.3.4",
  "can_delete" : "1",
  "name" : "ns1.domain.com"
}, {
  "ipaddress" : "1.2.3.4",
  "can_delete" : "1",
  "name" : "ns1.domain.com"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Domain Order Fields
 * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
 *
 * domain String The fully qualified domain name (e.g. `example.com`).
 * regType String The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.
 * no response value expected for this operation
 **/
exports.getDomainOrderFields = function(domain,regType) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get Domain Order Search Results
 * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
 *
 * domain String The fully qualified domain name to look up (e.g. `example.com`).
 * no response value expected for this operation
 **/
exports.getDomainOrderSearchResults = function(domain) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Start Domain Renewal Flow
 * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.getDomainRenewal = function(id) {
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
 * Search Domain Suggestions
 * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
 *
 * name String The base domain name to search (for example `example` or `example.com`).
 * returns DomainSearchResponse
 **/
exports.getDomainSearch = function(name) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "lookup" : [ { }, { } ],
  "tlds" : [ "tlds", "tlds" ],
  "success" : true,
  "response_text" : "response_text",
  "response_time" : "response_time",
  "suggest" : [ { }, { } ]
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Start Domain Transfer Flow
 * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.getDomainTransfer = function(id) {
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
 * Get Whois Privacy Status
 * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.getDomainWhoisPrivacy = function(id) {
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
 * List Domain Orders
 * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
 *
 * returns List
 **/
exports.getDomainsList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "domain_id" : "592337",
  "domain_hostname" : "mydomain.com",
  "domain_expire_date" : "2023-08-14T00:59:38.000Z",
  "cost" : "18.00",
  "domain_status" : "active"
}, {
  "domain_id" : "592337",
  "domain_hostname" : "mydomain.com",
  "domain_expire_date" : "2023-08-14T00:59:38.000Z",
  "cost" : "18.00",
  "domain_status" : "active"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Resend Domain Welcome Email
 * Resends the welcome email for the domain service. The email contains registration details and management instructions.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.getDomainsWelcomeEmail = function(id) {
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
 * Get Domain Ordering Information
 * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
 *
 * returns DomainOrder
 **/
exports.getNewDomain = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "whoisPrivacyCost" : "5",
  "services" : {
    "DomainOrderServices10001" : {
      "services_id" : "10001",
      "services_category" : "100",
      "services_field1" : ".asia",
      "services_field2" : "",
      "services_name" : ".asia Domain Name Registration",
      "services_type" : "100",
      "services_currency" : "USD",
      "services_buyable" : "1",
      "services_cost" : "19.00",
      "services_hidden" : "0",
      "services_module" : "domains"
    }
  },
  "tldServices" : { }
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Validate Domain Order
 * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
 *
 * no response value expected for this operation
 **/
exports.patchDomains = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Request Domain Renewal
 * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.postDomainRenewal = function(id) {
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
 * Request Domain Transfer
 * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
 *
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.postDomainTransfer = function(id) {
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
 * Domain Order Search
 * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
 *
 * no response value expected for this operation
 **/
exports.putDomains = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Update Domain Contact Details
 * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
 *
 * body DomainContactDetails 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.updateDomainContact = function(body,id) {
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
 * Update Domain Contact Details
 * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
 *
 * body DomainContactDetails 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.updateDomainContact = function(body,id) {
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
 * Update Domain Order
 * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
 *
 * id String The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.updateDomainInfo = function(id) {
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
 * Replace Nameserver Set
 * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
 *
 * body DomainNameserverPutRequest 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns TextResponse
 **/
exports.updateDomainNameservers = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "You were successfull."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Replace Nameserver Set
 * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
 *
 * body DomainNameserverPutRequest 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns TextResponse
 **/
exports.updateDomainNameservers = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "You were successfull."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Whois Privacy
 * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
 *
 * body DomainWhoisPrivacyRequest 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.updateDomainWhoisPrivacy = function(body,id) {
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
 * Update Whois Privacy
 * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
 *
 * body DomainWhoisPrivacyRequest 
 * id Integer The domain service ID. Use `domain_id` from `GET /domains`.
 * returns SuccessTextResponse
 **/
exports.updateDomainWhoisPrivacy = function(body,id) {
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

