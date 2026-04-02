'use strict';


/**
 * Place Website Order
 * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
 *
 * returns ServiceOrderPostResponse
 **/
exports.addWebsite = function() {
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
 * Website Ordering Information
 * Retrieves available webhosting plans and pricing for ordering.
 *
 * returns WebsitesOrder
 **/
exports.getNewWebsite = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "enableDomainRegistering" : false,
  "website" : "",
  "period" : 1,
  "jsonServiceOffers" : {
    "1026" : [ {
      "renewal_frequency" : "12",
      "updated_at" : "updated_at",
      "renewal_cost" : 96,
      "service_offer_id" : "136",
      "service_id" : "1026",
      "service_module" : "webhosting",
      "intro_cost" : 96,
      "created_at" : "2023-01-25T14:50:55.000Z",
      "currencySymbol" : "$",
      "intro_frequency" : "12",
      "allow_coupon" : "1",
      "deleted_at" : "deleted_at"
    }, {
      "renewal_frequency" : "12",
      "updated_at" : "updated_at",
      "renewal_cost" : 96,
      "service_offer_id" : "136",
      "service_id" : "1026",
      "service_module" : "webhosting",
      "intro_cost" : 96,
      "created_at" : "2023-01-25T14:50:55.000Z",
      "currencySymbol" : "$",
      "intro_frequency" : "12",
      "allow_coupon" : "1",
      "deleted_at" : "deleted_at"
    } ]
  },
  "serviceOffers" : {
    "1026" : [ {
      "renewal_frequency" : "12",
      "updated_at" : "updated_at",
      "renewal_cost" : "96.00",
      "service_offer_id" : "136",
      "service_id" : "1026",
      "service_module" : "webhosting",
      "intro_cost" : "96.00",
      "created_at" : "2023-01-25T14:50:55.000Z",
      "intro_frequency" : "12",
      "allow_coupon" : "1",
      "deleted_at" : "deleted_at"
    }, {
      "renewal_frequency" : "12",
      "updated_at" : "updated_at",
      "renewal_cost" : "96.00",
      "service_offer_id" : "136",
      "service_id" : "1026",
      "service_module" : "webhosting",
      "intro_cost" : "96.00",
      "created_at" : "2023-01-25T14:50:55.000Z",
      "intro_frequency" : "12",
      "allow_coupon" : "1",
      "deleted_at" : "deleted_at"
    } ]
  },
  "serviceTypes" : {
    "11447" : {
      "services_description" : "",
      "services_id" : "11447",
      "services_moreinfo_url" : "",
      "services_category" : "204",
      "services_field1" : "",
      "services_html" : "",
      "services_field2" : "Standard",
      "services_name" : "Web Hosting Direct Admin (PriceLock)",
      "services_buyable" : "1",
      "services_cost" : "5.00",
      "services_hidden" : "1",
      "services_module" : "webhosting",
      "services_type" : "206"
    }
  },
  "packges" : {
    "11440" : {
      "services_description" : "Direct Admin Web hosting package with 10x more resources over our standard web hosting package.",
      "services_id" : "11440",
      "services_moreinfo_url" : "",
      "services_category" : "204",
      "services_field1" : "",
      "services_html" : "",
      "services_field2" : "BoostX",
      "services_name" : "DA BOOST X",
      "services_buyable" : "1",
      "services_cost" : "69.95",
      "services_hidden" : "0",
      "services_module" : "webhosting",
      "services_type" : "206"
    }
  },
  "step" : "order_form",
  "packages" : {
    "11447" : "Web Hosting Direct Admin (PriceLock)"
  },
  "serviceOfferId" : 0,
  "jsonServices" : {
    "11447" : "5.00"
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
 * Get Website IP Information
 * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
 *
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns inline_response_200_24
 **/
exports.getWebsiteBuyIp = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "ips" : {
    "key" : "ips"
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
 * Get Website Order
 * Returns detailed information about a specific webhosting order including its domain, plan, and status.
 *
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns Website
 **/
exports.getWebsiteInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "serviceExtra" : [ null, null ],
  "package" : "Web Hosting Direct Admin",
  "client_links" : [ {
    "link" : "link",
    "icon" : "icon",
    "other_attr" : "other_attr",
    "label" : "label",
    "icon_text" : "icon_text",
    "help_text" : "help_text"
  }, {
    "link" : "link",
    "icon" : "icon",
    "other_attr" : "other_attr",
    "label" : "label",
    "icon_text" : "icon_text",
    "help_text" : "help_text"
  } ],
  "billingDetails" : {
    "service_currency" : "USD",
    "service_extra" : { },
    "service_payment_status" : "service_payment_status",
    "service_next_invoice_date" : "service_next_invoice_date",
    "service_frequency" : "service_frequency",
    "service_coupon" : "service_coupon",
    "service_last_invoice_date" : "service_last_invoice_date",
    "service_currency_symbol" : "$",
    "service_extra_json" : "service_extra_json",
    "service_cost_info" : "service_cost_info",
    "next_date" : "next_date"
  },
  "serviceMaster" : {
    "website_ip" : "74.50.80.15",
    "website_order" : "58984",
    "website_name" : "vda4200.is.cc",
    "website_max_sites" : "300",
    "website_load" : "6.55",
    "website_hdfree" : "196",
    "website_dns2" : "vda4200b.trouble-free.net",
    "website_dns1" : "vda4200a.trouble-free.net",
    "website_available" : "0",
    "website_type" : "206",
    "website_id" : "543",
    "website_partitions" : "website_partitions",
    "website_hdsize" : "2062",
    "website_last_update" : "2023-08-17T23:01:02.000Z"
  },
  "serviceInfo" : {
    "website_comment" : "website_comment",
    "website_invoice" : "20261994",
    "website_status" : "active",
    "website_ip" : "74.50.80.15",
    "website_server_status" : "website_server_status",
    "website_username" : "vintagev",
    "website_custid" : "85872",
    "website_server" : "543",
    "website_order_date" : "2023-03-16T22:51:54.000Z",
    "website_extra" : "[]",
    "website_hostname" : "vintagevultures.com",
    "website_coupon" : "1690",
    "website_type" : "11363",
    "website_id" : "1196829",
    "website_currency" : "USD"
  },
  "extraInfoTables" : {
    "links" : {
      "title" : "title",
      "rows" : [ {
        "value" : "value",
        "desc" : "desc"
      }, {
        "value" : "value",
        "desc" : "desc"
      } ]
    }
  },
  "custCurrencySymbol" : "$",
  "custCurrency" : "USD"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Website Invoices
 * Returns the billing invoices associated with this webhosting service.
 *
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns ChargeInvoiceRows
 **/
exports.getWebsiteInvoices = function(id) {
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
 * Get Website Listing
 * Gets a listing of your webhosting orders and service details.
 *
 * returns List
 **/
exports.getWebsiteList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "website_id" : "376359",
  "website_hostname" : "hussfamily.com",
  "repeat_invoices_cost" : "5.99",
  "website_status" : "active",
  "services_name" : "Standard Web Hosting",
  "website_comment" : ""
}, {
  "website_id" : "376359",
  "website_hostname" : "hussfamily.com",
  "repeat_invoices_cost" : "5.99",
  "website_status" : "active",
  "services_name" : "Standard Web Hosting",
  "website_comment" : ""
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Website Backups
 * Gets a list of the backups that exist for a website and their sizes.
 *
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns WebsiteBackups
 **/
exports.getWebsitesBackups = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "size" : 0,
  "name" : "name"
}, {
  "size" : 0,
  "name" : "name"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Hosting Panel Auto Login
 * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
 *
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns WebsiteLoginResponse
 **/
exports.getWebsitesLogin = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "type" : "location",
  "location" : "https://www.site.com/"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Resend Website Welcome Email
 * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
 *
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns SuccessTextResponse
 **/
exports.getWebsitesWelcomeEmail = function(id) {
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
 * Get Website Reverse DNS
 * Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
 *
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns ReverseDnsEntries
 **/
exports.gettWebsiteReverseDns = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "ips" : {
    "1.2.3.4" : "yourhost.com",
    "1.2.3.5" : "anotherhost.com"
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
 * Update Website IP DNS
 * Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
 *
 * body Id_buy_ip_body 
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns inline_response_200_25
 **/
exports.postWebsiteBuyIp = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "message" : "message"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Website IP DNS
 * Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
 *
 * body Id_buy_ip_body 
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns inline_response_200_25
 **/
exports.postWebsiteBuyIp = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "message" : "message"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Request Website Migration
 * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
 *
 * body Id_migration_body 
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns inline_response_200_26
 **/
exports.postWebsiteMigration = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "ticket" : 0,
  "text" : "text"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Request Website Migration
 * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
 *
 * body Id_migration_body 
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns inline_response_200_26
 **/
exports.postWebsiteMigration = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "ticket" : 0,
  "text" : "text"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Website Reverse DNS
 * Updates the reverse DNS entries for each of the IP addresses for the website.
 *
 * body ReverseDnsEntries 
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns TextResponse
 **/
exports.postWebsitesReverseDns = function(body,id) {
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
 * Update Website Reverse DNS
 * Updates the reverse DNS entries for each of the IP addresses for the website.
 *
 * body ReverseDnsEntries 
 * id Integer The website service ID. Use `website_id` from `GET /websites`.
 * returns TextResponse
 **/
exports.postWebsitesReverseDns = function(body,id) {
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
 * Validate Webhosting Order
 * Validates a webhosting order before placing it.
 *
 * no response value expected for this operation
 **/
exports.putWebsites = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Update Website Order
 * Updates settings on a webhosting order.
 *
 * id String The website service ID. Use `website_id` from `GET /websites`.
 * returns SuccessTextResponse
 **/
exports.updateWebsiteInfo = function(id) {
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
 * Cancel Website
 * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
 *
 * id String The website service ID. Use `website_id` from `GET /websites`.
 * returns inline_response_200_23
 **/
exports.webhostingCancel = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Website is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}

