'use strict';


/**
 * Place Floating IP Order
 * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
 *
 * returns ServiceOrderPostResponse
 **/
exports.addFloatingIp = function() {
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
 * Cancel Floating IP
 * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
 *
 * id Integer The Floating IP service ID. Use the ID from `GET /floating_ips`.
 * returns inline_response_200_3
 **/
exports.floating_ipsCancel = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Floating IPs is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * View Floating IP
 * Returns detailed information about a specific Floating IP service including its current target IP assignment.
 *
 * id Integer The Floating IP service ID. Use the ID from `GET /floating_ips`.
 * returns Object
 **/
exports.getFloatingIpInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = { };
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Floating IP Invoices
 * Returns the billing invoices associated with this Floating IP service.
 *
 * id Integer The Floating IP service ID. Use the ID from `GET /floating_ips`.
 * returns ChargeInvoiceRows
 **/
exports.getFloatingIpInvoices = function(id) {
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
 * List Floating IPs
 * Returns all Floating IP services on the account with their current status and assignment details.
 *
 * no response value expected for this operation
 **/
exports.getFloatingIpsList = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Resend Floating IPs Welcome Email
 * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
 *
 * id Integer The Floating IP service ID. Use the ID from `GET /floating_ips`.
 * returns SuccessTextResponse
 **/
exports.getFloatingIpsWelcomeEmail = function(id) {
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
 * Get Floating IP Ordering Information
 * Retrieves available options and pricing for ordering a new Floating IP.
 *
 * returns Object
 **/
exports.getNewFloatingIp = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = { };
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Change Floating IP Target
 * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
 *
 * body IpObject 
 * id Integer The Floating IP service ID. Use the ID from `GET /floating_ips`.
 * returns SuccessTextResponse
 **/
exports.postFloatingIpsChangeIp = function(body,id) {
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
 * Change Floating IP Target
 * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
 *
 * body IpObject 
 * id Integer The Floating IP service ID. Use the ID from `GET /floating_ips`.
 * returns SuccessTextResponse
 **/
exports.postFloatingIpsChangeIp = function(body,id) {
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
 * Validate Floating IP Order
 * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
 *
 * no response value expected for this operation
 **/
exports.putFloating_ips = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Update Floating IP
 * Updates settings on a Floating IP service, such as its label or configuration metadata.
 *
 * id String The Floating IP service ID. Use the ID from `GET /floating_ips`.
 * returns SuccessTextResponse
 **/
exports.updateFloatingIpInfo = function(id) {
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

