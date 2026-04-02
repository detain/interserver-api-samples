'use strict';


/**
 * Add Credit Card to Account
 * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
 *
 * body BillingAddCcRequest 
 * returns SuccessTextResponse
 **/
exports.addAccountCreditCard = function(body) {
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
 * Add Credit Card to Account
 * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
 *
 * body BillingAddCcRequest 
 * returns SuccessTextResponse
 **/
exports.addAccountCreditCard = function(body) {
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
 * Add Credit Card for Billing
 * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
 *
 * body BillingAddCcRequest 
 * returns SuccessTextResponse
 **/
exports.addBillingCreditCard = function(body) {
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
 * Add Credit Card for Billing
 * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
 *
 * body BillingAddCcRequest 
 * returns SuccessTextResponse
 **/
exports.addBillingCreditCard = function(body) {
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
 * Create Prepay Deposit
 * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
 *
 * body BillingPrepayRequest 
 * returns SuccessTextResponse
 **/
exports.addBillingPrepay = function(body) {
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
 * Create Prepay Deposit
 * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
 *
 * body BillingPrepayRequest 
 * returns SuccessTextResponse
 **/
exports.addBillingPrepay = function(body) {
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
 * Remove Credit Card
 * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
 *
 * id String The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
 * returns String
 **/
exports.deleteAccountCreditCard = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = "";
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Delete Credit Card
 * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
 *
 * id Integer The credit card ID to remove. Use IDs from `GET /billing/creditcards`.
 * returns SuccessTextResponse
 **/
exports.deleteBillingCreditCard = function(id) {
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
 * Delete Invoice
 * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
 *
 * id Integer The invoice ID to delete. Only unpaid invoices can be deleted.
 * returns SuccessTextResponse
 **/
exports.deleteBillingInvoice = function(id) {
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
 * Delete Prepay Balance
 * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
 *
 * id Integer The prepay balance ID to delete.
 * returns SuccessTextResponse
 **/
exports.deleteBillingPrepay = function(id) {
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
 * List Affiliate Banner Assets
 * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
 *
 * returns List
 **/
exports.getAffiliateBanners = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "image" : "12946798.gif",
  "width" : "125",
  "height" : "125"
}, {
  "image" : "12946798.gif",
  "width" : "125",
  "height" : "125"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Affiliate Performance Report
 * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
 *
 * returns TextResponse
 **/
exports.getAffiliateRichReport = function() {
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
 * Get Affiliate Sales Graph Data
 * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
 *
 * days Integer Number of days of sales history to include in the graph data. Determines the time window for the returned data points. (optional)
 * returns StatusMonthlyBreakdown
 **/
exports.getAffiliateSalesGraph = function(days) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "default" : {
    "key" : 0
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
 * Get Affiliate Sales Report
 * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
 *
 * returns TextResponse
 **/
exports.getAffiliateSalesReport = function() {
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
 * Get Affiliate Traffic Graph Data
 * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
 *
 * days Integer Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. (optional)
 * returns MonthlyCounts
 **/
exports.getAffiliateTrafficGraph = function(days) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "key" : 0
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Affiliate Web Traffic Entries
 * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
 *
 * returns List
 **/
exports.getAffiliateWebTraffic = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "traffic_id" : "91839913",
  "traffic_ip" : "2a06:98c0:3600::",
  "traffic_url" : "https://www.interserver.net/webhosting/?id=8",
  "traffic_affiliate" : "8",
  "traffic_referrer" : "",
  "traffic_timestamp" : "2023-09-30 06:30:27"
}, {
  "traffic_id" : "91839913",
  "traffic_ip" : "2a06:98c0:3600::",
  "traffic_url" : "https://www.interserver.net/webhosting/?id=8",
  "traffic_affiliate" : "8",
  "traffic_referrer" : "",
  "traffic_timestamp" : "2023-09-30 06:30:27"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Shopping Cart Contents
 * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
 *
 * returns Object
 **/
exports.getBillingCart = function() {
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
 * Get Credit Card Verification Requirements
 * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
 *
 * id Integer The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
 * returns SuccessTextResponse
 **/
exports.getBillingCreditCardVerify = function(id) {
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
 * Get Invoice Details
 * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
 *
 * id Integer The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.
 * returns BillingInvoiceDetail
 **/
exports.getBillingInvoice = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "key" : ""
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Account Invoices
 * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
 *
 * returns BillingInvoiceList
 **/
exports.getBillingInvoices = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "summary" : { },
  "rows" : [ { }, { } ]
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List Prepay Balances
 * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
 *
 * returns Object
 **/
exports.getBillingPrePays = function() {
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
 * Get Invoices
 * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
 *
 * searchString String pass an optional search string for looking up inventory (optional)
 * skip Integer number of records to skip for pagination (optional)
 * limit Integer maximum number of records to return (optional)
 * returns List
 **/
exports.getInvoices = function(searchString,skip,limit) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "id" : 0
}, {
  "id" : 0
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Initiate Payment
 * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
 *
 * method String The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
 * invoices String A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.
 * returns inline_response_200_9
 **/
exports.initiatePayment = function(method,invoices) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "redirect" : "redirect",
  "method" : "method",
  "action" : "action",
  "text" : "text",
  "type" : "redirect",
  "items" : { }
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Submit Credit Card Verification
 * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
 *
 * body BillingVerifyCcRequest 
 * id Integer The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
 * returns SuccessTextResponse
 **/
exports.postBillingCreditCardVerify = function(body,id) {
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
 * Submit Credit Card Verification
 * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
 *
 * body BillingVerifyCcRequest 
 * id Integer The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
 * returns SuccessTextResponse
 **/
exports.postBillingCreditCardVerify = function(body,id) {
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
 * Update Credit Card
 * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
 *
 * id Integer The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
 * returns String
 **/
exports.updateAccountCreditCard = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = "";
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Configure Affiliate Dock Settings
 * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
 *
 * body AffiliateDockSetup 
 * returns TextResponse
 **/
exports.updateAffiliateDockSetup = function(body) {
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
 * Configure Affiliate Dock Settings
 * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
 *
 * body AffiliateDockSetup 
 * returns TextResponse
 **/
exports.updateAffiliateDockSetup = function(body) {
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
 * Configure Affiliate Landing Page
 * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
 *
 * body AffiliateDockSetup 
 * returns TextResponse
 **/
exports.updateAffiliateLandingPage = function(body) {
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
 * Configure Affiliate Landing Page
 * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
 *
 * body AffiliateDockSetup 
 * returns TextResponse
 **/
exports.updateAffiliateLandingPage = function(body) {
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
 * Configure Affiliate Payout Preferences
 * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
 *
 * body AffiliatePaymentSetup 
 * returns TextResponse
 **/
exports.updateAffiliatePaymentSetup = function(body) {
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
 * Configure Affiliate Payout Preferences
 * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
 *
 * body AffiliatePaymentSetup 
 * returns TextResponse
 **/
exports.updateAffiliatePaymentSetup = function(body) {
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
 * Update Credit Card Details
 * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
 *
 * id Integer The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.
 * returns SuccessTextResponse
 **/
exports.updateBillingCreditCard = function(id) {
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
 * Update Default Payment Method
 * Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
 *
 * body BillingPaymentMethodRequest 
 * returns SuccessTextResponse
 **/
exports.updateBillingPaymentMethod = function(body) {
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
 * Update Default Payment Method
 * Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
 *
 * body BillingPaymentMethodRequest 
 * returns SuccessTextResponse
 **/
exports.updateBillingPaymentMethod = function(body) {
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

