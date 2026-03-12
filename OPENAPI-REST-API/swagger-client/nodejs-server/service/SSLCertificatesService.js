'use strict';


/**
 * Place SSL Cert Order
 * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
 *
 * no response value expected for this operation
 **/
exports.addSsl = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * SSL Cert Ordering Information
 * Retrieves available SSL certificate types and pricing for ordering.
 *
 * no response value expected for this operation
 **/
exports.getNewSsl = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get SSL Cert Info
 * Returns detailed information about a specific SSL certificate including its domain and expiration.
 *
 * id Integer SSL certificate ID number.
 * no response value expected for this operation
 **/
exports.getSslInfo = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get SSL Cert Invoices
 * Returns the billing invoices associated with this SSL certificate.
 *
 * id Integer SSL Cert ID number
 * returns ChargeInvoiceRows
 **/
exports.getSslInvoices = function(id) {
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
 * List SSL Certs
 * Returns all SSL certificate services on the account with their current status.
 *
 * no response value expected for this operation
 **/
exports.getSslList = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Resend SSL Welcome Email
 * Resends the welcome email for the order.
 *
 * id Integer SSL Cert ID number
 * returns SuccessTextResponse
 **/
exports.getSslWelcomeEmail = function(id) {
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
 * Validate SSL Cert Order
 * Validates an SSL certificate order before placing it.
 *
 * no response value expected for this operation
 **/
exports.putSsl = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Cancel SSL Certificate Service
 * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
 *
 * id Integer SSL Cert ID number
 * returns inline_response_200_20
 **/
exports.sslCancel = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "SSL is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update SSL Cert Order
 * Updates settings on an SSL certificate order.
 *
 * id String SSL certificate ID number.
 * no response value expected for this operation
 **/
exports.updateSslInfo = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}

