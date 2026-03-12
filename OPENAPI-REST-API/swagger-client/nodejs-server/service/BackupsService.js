'use strict';


/**
 * Place Backup Order
 * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
 *
 * body BackupOrderPutRequest 
 * returns BackupOrderPostResponse
 **/
exports.addBackup = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "continue" : true,
  "errors" : [ ],
  "total_cost" : "3.00",
  "iid" : "25296597",
  "iids" : [ "SERVICEbackups40464" ],
  "real_iids" : [ "25296597" ],
  "serviceId" : 40464,
  "invoice_description" : "Storage ST 100",
  "cj_params" : {
    "containerTagId" : "1684",
    "CID" : "1525038",
    "OID" : "backups40464",
    "TYPE" : "355669",
    "ITEM1" : "backups10831",
    "AMT1" : "3.00",
    "QTY1" : 1,
    "CURRENCY" : "USD"
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
 * Place Backup Order
 * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
 *
 * body BackupOrderPutRequest 
 * returns BackupOrderPostResponse
 **/
exports.addBackup = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "continue" : true,
  "errors" : [ ],
  "total_cost" : "3.00",
  "iid" : "25296597",
  "iids" : [ "SERVICEbackups40464" ],
  "real_iids" : [ "25296597" ],
  "serviceId" : 40464,
  "invoice_description" : "Storage ST 100",
  "cj_params" : {
    "containerTagId" : "1684",
    "CID" : "1525038",
    "OID" : "backups40464",
    "TYPE" : "355669",
    "ITEM1" : "backups10831",
    "AMT1" : "3.00",
    "QTY1" : 1,
    "CURRENCY" : "USD"
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
 * Cancel Backup Service
 * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
 *
 * id Integer The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
 * returns inline_response_200_1
 **/
exports.cancelBackup = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Backups is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Backup Service Details
 * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
 *
 * id Integer The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
 * returns Backup
 **/
exports.getBackupInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "serviceExtra" : "serviceExtra",
  "package" : "package",
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
    "service_extra" : "[]",
    "service_payment_status" : "Paid",
    "service_next_invoice_date" : "January 29, 2022",
    "service_frequency" : "Monthly",
    "service_last_invoice_date" : "December 29, 2021",
    "service_currency_symbol" : "$",
    "service_extra_json" : "[]",
    "service_cost_info" : "3",
    "next_date" : "2022-01-29T14:09:57.000Z"
  },
  "serviceMaster" : {
    "backup_last_update" : "2023-08-17T23:20:02.000Z",
    "backup_id" : 38,
    "backup_name" : "storage1400.is.cc",
    "backup_available" : 0,
    "backup_type" : 703,
    "backup_hdfree" : 61374,
    "backup_order" : 21359,
    "backup_ip" : "44.22.11.88",
    "backup_hdsize" : 156448,
    "backup_iowait" : 0
  },
  "serviceInfo" : {
    "backup_currency" : "USD",
    "backup_quota" : "0",
    "backup_extra" : "[]",
    "backup_custid" : "2773",
    "backup_type" : "10831",
    "backup_status" : "canceled",
    "backup_ip" : "64.20.55.234",
    "backup_invoice" : "19591007",
    "backup_comment" : "backup_comment",
    "backup_id" : "21163",
    "backup_server" : "38",
    "backup_username" : "st21163",
    "backup_server_status" : "deleted",
    "backup_coupon" : "0",
    "backup_order_date" : "2021-12-29T14:09:57.000Z"
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
 * Get Backup Order Invoices
 * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
 *
 * id Integer The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
 * returns ChargeInvoiceRows
 **/
exports.getBackupInvoices = function(id) {
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
 * Get Backup Storage Panel Login
 * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
 *
 * id Integer The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
 * returns BackupLoginResponse
 **/
exports.getBackupLogin = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
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
 * List Backup Services
 * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
 *
 * returns List
 **/
exports.getBackupsList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "backup_id" : "2414",
  "backup_name" : "storage-nj.interserver.net",
  "backup_cost" : "5.99",
  "backup_username" : "detainin2414",
  "backup_status" : "pending-setup",
  "services_name" : "Swift Storage"
}, {
  "backup_id" : "2414",
  "backup_name" : "storage-nj.interserver.net",
  "backup_cost" : "5.99",
  "backup_username" : "detainin2414",
  "backup_status" : "pending-setup",
  "services_name" : "Swift Storage"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Resend Backup Welcome Email
 * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
 *
 * id Integer The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
 * returns SuccessTextResponse
 **/
exports.getBackupsWelcomeEmail = function(id) {
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
 * Get Backup Order Form Data
 * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
 *
 * returns BackupsOrder
 **/
exports.getNewBackup = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "packageCosts" : {
    "11006" : 84
  },
  "serviceTypes" : {
    "11006" : {
      "services_id" : "11006",
      "services_category" : "702",
      "services_field1" : "",
      "services_field2" : "bandwidth=40000000,quota=40000000,inode=100,uinode=ON,vdomains=2,nsubdomains=5,nemails=0,nemailf=0,nemailml=0,nemailr=0,mysql=5,domainptr=5,ftp=100,aftp=OFF,cgi=ON,php=ON,spam=OFF,cron=OFF,catchall=OFF,ssl=ON,ssh=ON,sysinfo=ON,login_keys=ON,dnscontrol=OFF,suspend_at_limit=ON",
      "services_name" : "Storage ST 700",
      "services_type" : "703",
      "services_buyable" : "1",
      "services_cost" : "84.00",
      "services_module" : "backups"
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
 * Update Backup Information
 * Updates backup storage service metadata, such as stored credentials or settings for the order.
 *
 * id Integer The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
 * no response value expected for this operation
 **/
exports.updateBackupInfo = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Validate Backup Order
 * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
 *
 * body BackupOrderPutRequest 
 * returns BackupOrderPutResponse
 **/
exports.validateBackupOrder = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "continue" : true,
  "errors" : [ ],
  "serviceType" : 10831,
  "serviceCost" : "3.00",
  "originalCost" : "3.00",
  "repeatServiceCost" : "3.00",
  "hostname" : "",
  "password" : "m13dxi6K",
  "coupon" : "",
  "couponCode" : 0
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Validate Backup Order
 * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
 *
 * body BackupOrderPutRequest 
 * returns BackupOrderPutResponse
 **/
exports.validateBackupOrder = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "continue" : true,
  "errors" : [ ],
  "serviceType" : 10831,
  "serviceCost" : "3.00",
  "originalCost" : "3.00",
  "repeatServiceCost" : "3.00",
  "hostname" : "",
  "password" : "m13dxi6K",
  "coupon" : "",
  "couponCode" : 0
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}

