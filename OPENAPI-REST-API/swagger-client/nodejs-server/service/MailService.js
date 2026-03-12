'use strict';


/**
 * Place Mail Order
 * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
 *
 * no response value expected for this operation
 **/
exports.addMail = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Create Deny Rule
 * Adds a new deny rule to automatically block emails that match the specified criteria.
 *
 * body DenyRuleNew These are the fields needed to create a new email deny rule.
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns GenericResponse
 **/
exports.addRule = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Create Deny Rule
 * Adds a new deny rule to automatically block emails that match the specified criteria.
 *
 * body DenyRuleNew These are the fields needed to create a new email deny rule.
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns GenericResponse
 **/
exports.addRule = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Create Mail Alert
 * Creates a new alert for the mail service, such as delivery or quota notifications.
 *
 * body MailAlertRequest 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns SuccessTextResponse
 **/
exports.createMailAlert = function(body,id) {
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
 * Create Mail Alert
 * Creates a new alert for the mail service, such as delivery or quota notifications.
 *
 * body MailAlertRequest 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns SuccessTextResponse
 **/
exports.createMailAlert = function(body,id) {
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
 * Delete Mail Alert
 * Deletes an existing alert definition for the mail service.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * alert_id Integer Alert ID to delete.
 * returns SuccessTextResponse
 **/
exports.deleteMailAlert = function(id,alert_id) {
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
 * Delete Deny Rule
 * Removes a deny rule from the mail service.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * rule String The ID of the Rules entry.
 * returns GenericResponse
 **/
exports.deleteRule = function(id,rule) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Remove Email Address from Block List
 * Removes an email address from the mail service's block lists.
 *
 * body EmailAddress 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns GenericResponse
 **/
exports.delistBlock = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Remove Email Address from Block List
 * Removes an email address from the mail service's block lists.
 *
 * body EmailAddress 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns GenericResponse
 **/
exports.delistBlock = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Mail Alerts
 * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns MailAlertsResponse
 **/
exports.getMailAlerts = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "alert_id" : 0,
  "alert_to" : "alert_to",
  "alert_enabled" : "alert_enabled",
  "alert_value" : "alert_value",
  "alert_type" : "alert_type"
}, {
  "alert_id" : 0,
  "alert_to" : "alert_to",
  "alert_enabled" : "alert_enabled",
  "alert_value" : "alert_value",
  "alert_type" : "alert_type"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Blocked Email Addresses
 * Displays a listing of the blocked email addresses
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns MailBlocks
 **/
exports.getMailBlocks = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "local" : [ {
    "date" : "2023-08-07",
    "from" : "user@domain.com",
    "messageId" : "pFaRqFUEWkucjhTuIzYuoAgWU@domain.com",
    "subject" : "Test Email",
    "to" : "['client@site.com']"
  } ],
  "mbtrap" : [ {
    "date" : "2023-08-07",
    "from" : "user@domain.com",
    "messageId" : "pFaRqFUEWkucjhTuIzYuoAgWU@domain.com",
    "subject" : "Test Email",
    "to" : "['client@site.com']"
  } ],
  "subject" : [ {
    "from" : "user@domain.com",
    "subject" : "Test Email"
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
 * Get Delist Status
 * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns MailDelistResponse
 **/
exports.getMailDelist = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "subject" : [ { }, { } ],
  "mbtrap" : [ { }, { } ],
  "id" : 0,
  "manual" : [ { }, { } ],
  "local" : [ { }, { } ]
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Deliverability Metrics
 * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns MailDeliverabilityResponse
 **/
exports.getMailDeliverability = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "stat" : { },
  "table_data" : [ [ "table_data", "table_data" ], [ "table_data", "table_data" ] ],
  "percent" : 0.8008281904610115
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Mail Order
 * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns MailSchema
 **/
exports.getMailInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "serviceType" : {
    "services_id" : "10880",
    "services_category" : "800",
    "services_field1" : "",
    "services_field2" : "",
    "services_name" : "MailBaby Mail",
    "services_type" : "800",
    "services_buyable" : "1",
    "services_cost" : "1.00",
    "services_module" : "mail"
  },
  "serviceExtra" : [ ],
  "usage_count" : "0",
  "package" : "MailBaby Mail",
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
    "service_extra" : [ ],
    "service_payment_status" : "Unpaid",
    "service_next_invoice_date" : "August 16, 2023",
    "service_frequency" : "Monthly",
    "service_last_invoice_date" : "July 16, 2023",
    "service_currency_symbol" : "$",
    "service_extra_json" : "[]",
    "service_cost_info" : "1.00",
    "next_date" : "2023-08-16T00:55:05.000Z"
  },
  "serviceInfo" : {
    "mail_type" : "10880",
    "mail_id" : "43171",
    "mail_ip" : "",
    "mail_comment" : "",
    "mail_currency" : "USD",
    "mail_invoice" : "20410322",
    "mail_quota" : "0",
    "mail_username" : "",
    "mail_server_status" : "",
    "mail_order_date" : "2023-07-16T00:55:05.000Z",
    "mail_status" : "expired",
    "mail_coupon" : "0",
    "mail_extra" : "[]",
    "mail_custid" : "771282"
  },
  "extraInfoTables" : {
    "mail" : {
      "title" : "Connection Information",
      "rows" : [ {
        "value" : "relay.mailbaby.net",
        "desc" : "SMTP Server"
      }, {
        "value" : "relay.mailbaby.net",
        "desc" : "SMTP Server"
      } ]
    },
    "tutorials" : {
      "title" : "Tutorials",
      "rows" : [ {
        "value" : "<a class=\"link\" href=\"https://mail.baby/cpanel/\" target=\"_blank\">Click Here</a>",
        "desc" : "cPanel Tutorial"
      }, {
        "value" : "<a class=\"link\" href=\"https://mail.baby/cpanel/\" target=\"_blank\">Click Here</a>",
        "desc" : "cPanel Tutorial"
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
 * Get Mail Invoices
 * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns ChargeInvoiceRows
 **/
exports.getMailInvoices = function(id) {
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
 * List Mail Orders
 * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
 *
 * returns List
 **/
exports.getMailList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "mail_id" : "5652",
  "repeat_invoices_cost" : "5.99",
  "mail_username" : "mb5652",
  "mail_status" : "expired",
  "services_name" : "MailBaby Mail"
}, {
  "mail_id" : "5652",
  "repeat_invoices_cost" : "5.99",
  "mail_username" : "mb5652",
  "mail_status" : "expired",
  "services_name" : "MailBaby Mail"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Resend Mail Welcome Email
 * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns SuccessTextResponse
 **/
exports.getMailWelcomeEmail = function(id) {
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
 * Get Mail Ordering Information
 * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
 *
 * returns MailOrder
 **/
exports.getNewMail = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "id" : 21472,
  "status" : "active",
  "username" : "mb21472"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Deny Rules
 * Returns a listing of all the deny block rules configured for this mail service.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns List
 **/
exports.getRules = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "id" : 14,
  "user" : "mb20682",
  "type" : "email",
  "data" : "domeinwo@server.guesshost.net",
  "created" : "2022-03-22 19:16:35"
}, {
  "id" : 14,
  "user" : "mb20682",
  "type" : "email",
  "data" : "domeinwo@server.guesshost.net",
  "created" : "2022-03-22 19:16:35"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Mail Usage Statistics
 * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * time String The timeframe for the statistics. (optional)
 * returns MailStatsType
 **/
exports.getStats = function(id,time) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "time" : "all",
  "usage" : 55,
  "currency" : "USD",
  "currencySymbol" : "$",
  "cost" : 1.02,
  "received" : 508,
  "sent" : 495,
  "volume" : {
    "to" : {
      "client@domain.com" : 395,
      "user@site.net" : 57,
      "sales@company.com" : 47,
      "client@anothersite.com" : 9
    },
    "from" : {
      "billing@somedomain.com" : 369,
      "sales@somedomain.com" : 139
    },
    "ip" : {
      "1.1.1.1" : 142,
      "2.2.2.2" : 132,
      "3.3.3.3" : 129,
      "4.4.4.4" : 105
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
 * Cancel Mail
 * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns inline_response_200_8
 **/
exports.mailCancel = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Mail is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Delist a Blocked Sender
 * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
 *
 * body MailDelistRequest 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns SuccessTextResponse
 **/
exports.postMailDelist = function(body,id) {
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
 * Delist a Blocked Sender
 * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
 *
 * body MailDelistRequest 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns SuccessTextResponse
 **/
exports.postMailDelist = function(body,id) {
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
 * Validate Mail Order
 * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
 *
 * no response value expected for this operation
 **/
exports.putMail = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Reset Mail Password
 * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns SuccessTextResponse
 **/
exports.resetMailPassword = function(id) {
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
 * Send Email with Advanced Options
 * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
 *
 * body SendMailAdv 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns GenericResponse
 **/
exports.sendAdvMail = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Send Email with Advanced Options
 * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
 *
 * body SendMailAdv 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns GenericResponse
 **/
exports.sendAdvMail = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Send Email
 * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
 *
 * body SendMail 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns GenericResponse
 **/
exports.sendMail = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Send Email
 * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
 *
 * body SendMail 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns GenericResponse
 **/
exports.sendMail = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "status" : "ok",
  "text" : "The command completed successfully."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Mail Alert
 * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
 *
 * body MailAlertUpdateRequest 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns SuccessTextResponse
 **/
exports.updateMailAlert = function(body,id) {
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
 * Update Mail Alert
 * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
 *
 * body MailAlertUpdateRequest 
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * returns SuccessTextResponse
 **/
exports.updateMailAlert = function(body,id) {
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
 * Update Mail Order
 * Updates mail service metadata for the order, such as stored settings or account details.
 *
 * id String The mail service ID. Use `mail_id` from `GET /mail`.
 * no response value expected for this operation
 **/
exports.updateMailInfo = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * View Mail Log
 * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
 *
 * id Integer The mail service ID. Use `mail_id` from `GET /mail`.
 * id Long The ID of your mail order this will be sent through. (optional)
 * origin String originating ip address sending mail (optional)
 * mx String mx record mail was sent to (optional)
 * from String from email address (optional)
 * to String to/destination email address (optional)
 * subject String subject containing this string (optional)
 * mailid String mail id (optional)
 * skip Integer number of records to skip for pagination (optional)
 * limit Integer maximum number of records to return (optional)
 * startDate Long earliest date to get emails in unix timestamp format (optional)
 * endDate Long Latest date to get emails in unix timestamp format. (optional)
 * delivered String Filter emails by whether or not they were delivered. (optional)
 * returns MailLog
 **/
exports.viewMailLog = function(id,id,origin,mx,from,to,subject,mailid,skip,limit,startDate,endDate,delivered) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "total" : 1,
  "skip" : 0,
  "limit" : 100,
  "emails" : [ {
    "_id" : 103172,
    "id" : "17c7eda538e0005d03",
    "from" : "person@mysite.com",
    "to" : "client@isp.com",
    "subject" : "sell 0.005 shares",
    "messageId" : "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>",
    "created" : "2021-10-14T08:50:10.000Z",
    "time" : 1634215809,
    "user" : "mb5658",
    "transtype" : "ESMTPSA",
    "origin" : "199.231.189.154",
    "interface" : "feeder",
    "sendingZone" : "interserver",
    "bodySize" : 63,
    "seq" : 1,
    "recipient" : "client@isp.com",
    "domain" : "interserver.net",
    "locked" : 1,
    "lockTime" : 1634215818533,
    "assigned" : "relay1",
    "queued" : "2021-10-14T12:50:15.487Z",
    "mxHostname" : "mx.j.is.cc",
    "response" : "250 2.0.0 Ok queued as C91D83E128C"
  } ]
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}

