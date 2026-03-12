'use strict';


/**
 * Cancel Scrub IP Service
 * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
 *
 * id Integer ScrubIp ID number
 * returns inline_response_200_13
 **/
exports.cancelScrubIp = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Scrub Ips is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Create Traffic Filter
 * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
 *
 * body CreateFilter 
 * id Integer ScrubIp ID number
 * returns inline_response_201_1
 **/
exports.createFilter = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "New filter has been created."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Create Geo Firewall Rule
 * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
 *
 * body CreateGeoFirewallRule 
 * id Integer ScrubIp ID number
 * returns inline_response_201
 **/
exports.createGeoRule = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "New firewall Rule has been created."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Create Firewall Rule
 * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
 *
 * body CreateFirewallRule 
 * id Integer ScrubIp ID number
 * returns inline_response_201
 **/
exports.createRule = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "New firewall Rule has been created."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Delete Traffic Filter
 * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
 *
 * body CreateFilter 
 * id Integer ScrubIp ID number
 * returns inline_response_200_17
 **/
exports.deleteFilter = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Filter is deleted."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Disable Scrub Protection
 * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
 *
 * id Integer ScrubIp ID number
 * returns inline_response_200_15
 **/
exports.disableScrub = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Scrub is disabled on your IP."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Enable Scrub Protection
 * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
 *
 * id Integer ScrubIp ID number
 * returns inline_response_200_14
 **/
exports.enableScrub = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Scrub is enabled on your IP."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Scrub IP Ordering Information
 * Returns the available Scrub IP service plans and pricing information needed to build an order form.
 *
 * returns inline_response_200_18
 **/
exports.getOrderDetail = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "packageCosts" : {
    "package_cost" : 5,
    "currencySymbol" : "$",
    "currency" : "USD",
    "package_id" : 11552
  },
  "serviceTypes" : [ {
    "services_id" : 11552,
    "services_field1" : "",
    "services_field2" : "",
    "services_name" : "Current IP + Scrub",
    "services_cost" : 5,
    "services_module" : "scrub_ips"
  }, {
    "services_id" : 11552,
    "services_field1" : "",
    "services_field2" : "",
    "services_name" : "Current IP + Scrub",
    "services_cost" : 5,
    "services_module" : "scrub_ips"
  } ],
  "ips" : [ {
    "service_hostname" : "server.gtest.com",
    "service_id" : 12345,
    "service_module" : "vps"
  }, {
    "service_hostname" : "server.gtest.com",
    "service_id" : 12345,
    "service_module" : "vps"
  } ]
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Scrub IP Details
 * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
 *
 * id Integer ScrubIp ID number
 * returns inline_response_200_12
 **/
exports.getScrubIpDetails = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "serviceInfo" : {
    "scrub_ip_id" : "123",
    "scrub_ip_type" : "11552",
    "scrub_ip_custid" : "456",
    "scrub_ip_order_date" : "2025-12-26 08:24:02",
    "scrub_ip_ip" : "11.24.11.23",
    "scrub_ip_service_id" : "11111",
    "scrub_ip_service_module" : "servers",
    "scrub_ip_status" : "active",
    "scrub_ip_invoice" : "654321",
    "scrub_ip_currency" : "USD",
    "scrub_ip_coupon" : "0",
    "scrub_ip_comment" : ""
  },
  "client_links" : [ {
    "label" : "Invoices",
    "link" : "invoices",
    "icon" : "fas fa-file-invoice-dollar fa-w-12",
    "icon_text" : "",
    "help_text" : "Invoice History"
  }, {
    "label" : "Cancel Scrub IPs",
    "link" : "cancel",
    "icon" : "fas fa-times",
    "icon_text" : "",
    "help_text" : "Cancel Scrub IPs"
  }, {
    "label" : "Disable Scrub",
    "link" : "scrub_action",
    "icon" : "fa fa-shield text-lg",
    "icon_text" : "",
    "help_text" : "Enable/Disable Scrub",
    "other_attr" : ""
  }, {
    "label" : "Scrub Documentation",
    "link" : "https://www.interserver.net/tips/kb/scrub/",
    "icon" : "fa fa-file text-lg",
    "icon_text" : "",
    "help_text" : "Scrub Documentation",
    "other_attr" : "target= \"_blank\""
  } ],
  "billingDetails" : {
    "service_last_invoice_date" : "December 26, 2025",
    "service_payment_status" : "Paid",
    "service_frequency" : "Monthly",
    "next_date" : "2026-01-26 08:24:02",
    "service_next_invoice_date" : "January 26, 2026",
    "service_currency" : "USD",
    "service_currency_symbol" : "$",
    "service_cost_info" : "5.00"
  },
  "custCurrency" : "USD",
  "custCurrencySymbol" : "$",
  "package" : "Current IP + Scrub",
  "extraInfoTables" : {
    "scrub_ips" : {
      "title" : "Connection Information",
      "rows" : [ {
        "desc" : "IP",
        "value" : "11.12.12.12"
      }, {
        "desc" : "Scrub",
        "value" : "Enabled"
      } ]
    }
  },
  "filter_firewall" : {
    "rules" : [ ],
    "filters" : [ {
      "daddr" : "2331742347",
      "dest" : "80",
      "filter_name" : "dns",
      "destination_ip" : "11.12.12.12",
      "filter" : "Dns"
    }, {
      "daddr" : "2331742347",
      "dest" : "443",
      "filter_name" : "dns",
      "destination_ip" : "11.12.12.12",
      "filter" : "Dns"
    } ],
    "scrub_enabled" : 21104
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
 * List Scrub Filter Types
 * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
 *
 * returns ScrubIpFilterTypes
 **/
exports.getScrubIpFilterTypes = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "filters" : {
    "key" : {
      "name" : "name",
      "desc" : "desc"
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
 * Get ScrubIp Invoices
 * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
 *
 * id Integer ScrubIp ID number
 * returns ChargeInvoiceRows
 **/
exports.getScrubIpInvoices = function(id) {
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
 * Get Scrub IP Logs
 * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
 *
 * id String Scrub Order ID
 * returns List
 **/
exports.getScrubIpLogs = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "date" : "date",
  "filter" : "filter",
  "target_port" : 0.8008281904610115,
  "protocol" : "protocol",
  "blocked_ip" : "blocked_ip",
  "target_ip" : "target_ip",
  "xdp_action" : "xdp_action",
  "byte_count" : 6.027456183070403
}, {
  "date" : "date",
  "filter" : "filter",
  "target_port" : 0.8008281904610115,
  "protocol" : "protocol",
  "blocked_ip" : "blocked_ip",
  "target_ip" : "target_ip",
  "xdp_action" : "xdp_action",
  "byte_count" : 6.027456183070403
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Scrub IP Services
 * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
 *
 * returns List
 **/
exports.getScrubIpsList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "scrub_ip_id" : 0,
  "repeat_invoices_cost" : 6.027456183070403,
  "scrub_ip_status" : "scrub_ip_status",
  "services_name" : "services_name",
  "scrub_ip_ip" : "scrub_ip_ip"
}, {
  "scrub_ip_id" : 0,
  "repeat_invoices_cost" : 6.027456183070403,
  "scrub_ip_status" : "scrub_ip_status",
  "services_name" : "services_name",
  "scrub_ip_ip" : "scrub_ip_ip"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Place Scrub IP Order
 * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
 *
 * body ScrubIpPlaceOrder 
 * returns inline_response_201_2
 **/
exports.placeScrubOrder = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "ScrubIp order is placed.",
  "order_details" : {
    "cj_params" : {
      "CURRENCY" : "USD",
      "ITEM1" : "scrub_ips904",
      "AMT1" : 5,
      "containerTagId" : 1684,
      "OID" : "scrub_ips12424",
      "TYPE" : 2242343242,
      "QTY1" : 1,
      "CID" : 2314
    },
    "total_cost" : 5,
    "service_id" : 12346,
    "invoice_id" : 2746273,
    "invoice_description" : "Scrub + Current Ip"
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
 * Delete Geo Firewall Rule
 * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
 *
 * body Delete Geo Firewall Rule 
 * id Integer ScrubIp ID number
 * returns inline_response_200_16
 **/
exports.scrubIpsDeleteGeoRule = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Firewall Rule has been deleted."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Delete Firewall Rule
 * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
 *
 * body Delete Firewall Rule 
 * id Integer ScrubIp ID number
 * returns inline_response_200_16
 **/
exports.scrubIpsDeleteRule = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Firewall Rule has been deleted."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}

