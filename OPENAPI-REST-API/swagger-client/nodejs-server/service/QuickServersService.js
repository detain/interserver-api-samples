'use strict';


/**
 * Place QuickServer Order
 * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
 *
 * returns ServiceOrderPostResponse
 **/
exports.addQs = function() {
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
 * Delete QuickServer Backup
 * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
 *
 * id Integer QuickServer ID number
 * file String The backup filename to delete.
 * all String Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
 * returns SuccessTextResponse
 **/
exports.deleteQsBackup = function(id,file,all) {
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
 * Block QuickServer SMTP
 * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
 *
 * id Integer QuickServer ID number.
 * returns QueueResponse
 **/
exports.doQsBlockSmtp = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Disable CD Drive
 * Disables the virtual CD drive for the QuickServer.
 *
 * id Integer QuickServer ID number.
 * returns QueueResponse
 **/
exports.doQsDisableCd = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Disable Quotas
 * Disables disk quota enforcement for the QuickServer.
 *
 * id Integer QuickServer ID number.
 * returns QueueResponse
 **/
exports.doQsDisableQuota = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Eject CD Drive
 * Ejects the virtual CD from the QuickServer's CD drive.
 *
 * id Integer QuickServer ID number.
 * returns QueueResponse
 **/
exports.doQsEjectCd = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Enable Quotas
 * Enables disk quota enforcement for the QuickServer.
 *
 * id Integer QuickServer ID number.
 * returns QueueResponse
 **/
exports.doQsEnableQuota = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Restart QuickServer
 * Restarts the QuickServer. The server will be shut down and started again.
 *
 * id Integer QuickServer ID number.
 * returns QueueResponse
 **/
exports.doQsRestart = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Start QuickServer
 * Powers on the QuickServer.
 *
 * id Integer QuickServer ID number.
 * returns QueueResponse
 **/
exports.doQsStart = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Stop QuickServer
 * Powers off the QuickServer.
 *
 * id Integer QuickServer ID number.
 * returns QueueResponse
 **/
exports.doQsStop = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Download QuickServer Backup
 * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
 *
 * body Id_backups_body 
 * all String Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
 * id Integer QuickServer ID number
 * returns inline_response_200_11
 **/
exports.downloadQsBackup = function(body,all,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "text",
  "url" : "url"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Download QuickServer Backup
 * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
 *
 * body Id_backups_body 
 * all String Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
 * id Integer QuickServer ID number
 * returns inline_response_200_11
 **/
exports.downloadQsBackup = function(body,all,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "text",
  "url" : "url"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get QuickServer Ordering Information
 * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
 *
 * returns QuickserverOrder
 **/
exports.getNewQs = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "server_details" : {
    "381" : {
      "cores" : 24,
      "cost" : "$140.00",
      "cpu" : "AMD Ryzen 9 5900X 12-Core Processor",
      "hd" : "1760GB",
      "ram" : "119GB"
    }
  },
  "distro_sel" : {
    "Ubuntu" : {
      "Ubuntu" : "Ubuntu"
    }
  },
  "qs_id" : "221",
  "templates" : {
    "Ubuntu" : [ [ "ubuntu24", "ubuntu24" ], [ "ubuntu24", "ubuntu24" ] ]
  },
  "version" : {
    "centosstream-8" : {
      "centosstream-8" : "8 Stream (64 bits)"
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
 * List QuickServer Backups
 * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
 *
 * id Integer QuickServer ID number
 * all String Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
 * returns VpsBackupRows
 **/
exports.getQsBackups = function(id,all) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "type" : "zfs",
  "service" : 2722890,
  "name" : "first",
  "size" : 3229615,
  "date" : 1694082660
}, {
  "type" : "swift",
  "service" : 100,
  "name" : "reset_shot_vps100_20210928.jpg",
  "size" : 40621,
  "date" : 1632842251
}, {
  "type" : "swift",
  "service" : 100,
  "name" : "reset_shot_vps100_20210929.jpg",
  "size" : 36319,
  "date" : 1632968243
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get QuickServer Hostname
 * Retrieves the current hostname and any validation requirements for changing it.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.getQsChangeHostname = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get Change Root Password Info
 * Retrieves instructions or metadata needed to reset the root password.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.getQsChangeRootPassword = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get Timezone Info
 * Returns the list of available timezones that can be set on the QuickServer.
 *
 * id Integer QuickServer ID number
 * returns List
 **/
exports.getQsChangeTimezone = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ "", "" ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Webuzo Change Pass Info
 * Retrieves instructions or metadata for changing the Webuzo control panel password.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.getQsChangeWebuzoPassword = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get QuickServer Order
 * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
 *
 * id Integer QuickServer ID number.
 * returns Quickserver
 **/
exports.getQsInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "package" : "Rapid Deploy Server",
  "memory" : "0GB",
  "client_links" : [ {
    "link" : "invoices",
    "icon" : "fas fa-file-invoice-dollar fa-w-12",
    "other_attr" : "other_attr",
    "label" : "Invoices",
    "icon_text" : "",
    "help_text" : "Invoice History"
  }, {
    "link" : "invoices",
    "icon" : "fas fa-file-invoice-dollar fa-w-12",
    "other_attr" : "other_attr",
    "label" : "Invoices",
    "icon_text" : "",
    "help_text" : "Invoice History"
  } ],
  "billingDetails" : {
    "service_currency" : "USD",
    "service_extra" : {
      "platform" : "kvm"
    },
    "service_payment_status" : "Paid",
    "service_next_invoice_date" : "May 11, 2023",
    "service_frequency" : "Monthly",
    "service_last_invoice_date" : "April 11, 2023",
    "service_currency_symbol" : "$",
    "service_extra_json" : "{\"platform\":\"kvm\"}",
    "service_cost_info" : "49.00",
    "next_date" : "2023-05-11T20:00:06.000Z"
  },
  "serviceMaster" : {
    "qs_bytes_sec_out" : "0",
    "qs_hdsize" : "1760",
    "qs_cores" : "8",
    "qs_name" : "Qs365",
    "qs_available" : "0",
    "qs_bits" : "64",
    "qs_last_update" : "2023-08-17T23:52:02.000Z",
    "qs_ip" : "",
    "qs_cost" : "49",
    "qs_order" : "92263",
    "qs_distro" : "Ubuntu",
    "qs_hdfree" : "1192",
    "qs_packets_sec_out" : "0",
    "qs_ram" : "29550679",
    "qs_iowait" : "6.89",
    "qs_cpu_flags" : "",
    "qs_last_install_time" : "",
    "qs_location" : "1",
    "qs_packets_sec_in" : "0",
    "qs_distro_version" : "22.04",
    "qs_ioping" : "330707348",
    "qs_speed" : "1000",
    "qs_kernel" : "5.15.0-69-generic",
    "qs_cpu_model" : "Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz",
    "qs_load" : "3.45",
    "qs_bytes_sec_in" : "0",
    "qs_raid_building" : "0",
    "qs_partitions" : "",
    "qs_raid_status" : "OK: zfs:all pools are healthy",
    "qs_id" : "365",
    "qs_cpu_mhz" : "2900",
    "qs_type" : "14",
    "qs_drive_type" : "SSD"
  },
  "module" : "quickservers",
  "cpu_graph_data" : "{\"labels\":[],\"value\":[]}",
  "serviceInfo" : {
    "qs_rootpass" : "",
    "qs_extra" : "{\"platform\":\"kvm\"}",
    "qs_hostname" : "qs24355",
    "qs_custid" : "771282",
    "qs_ip" : "",
    "qs_server" : "365",
    "qs_os" : "ubuntu24",
    "qs_vzid" : "qs24355",
    "qs_version" : "Ubuntu",
    "qs_location" : "1",
    "qs_vnc" : "99.88.77.66",
    "qs_comment" : "",
    "qs_invoice" : "20297531",
    "qs_platform" : "",
    "qs_mac" : "",
    "qs_order_date" : "2023-04-11T20:00:06.000Z",
    "qs_ipv6" : "",
    "qs_coupon" : "0",
    "qs_currency" : "USD",
    "qs_slices" : "0",
    "qs_id" : "24355",
    "qs_status" : "canceled",
    "qs_type" : "700",
    "qs_server_status" : "deleted",
    "qs_vnc_port" : ""
  },
  "extraInfoTables" : {
    "addons" : {
      "title" : "Addons",
      "rows" : [ {
        "value" : "",
        "desc" : "Additional IP Address"
      }, {
        "value" : "",
        "desc" : "Additional IP Address"
      } ]
    },
    "ip_info" : {
      "title" : "IP Information",
      "rows" : [ {
        "value" : "",
        "desc" : "Netmask"
      }, {
        "value" : "",
        "desc" : "Netmask"
      } ]
    }
  },
  "disk_percentage" : 32.27,
  "hdd" : "0GB",
  "bandwidth_yaxis" : "[]",
  "token" : "%3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI",
  "os_template" : "Ubuntu 22.04",
  "serviceExtra" : {
    "platform" : "kvm"
  },
  "bandwidth_xaxis" : "[]",
  "service_disk_used" : "0.00 GB",
  "custCurrencySymbol" : "$",
  "service_overview_extra" : [ "service_overview_extra", "service_overview_extra" ],
  "custCurrency" : "USD",
  "service_disk_total" : "0.00 GB"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Insert CD Information
 * Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.getQsInsertCd = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get QuickServer Invoices
 * Returns the billing invoices associated with this QuickServer.
 *
 * id Integer QuickServer ID number
 * returns ChargeInvoiceRows
 **/
exports.getQsInvoices = function(id) {
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
 * List QuickServers
 * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
 *
 * returns List
 **/
exports.getQsList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "qs_id" : "19504",
  "qs_name" : "Quickserver199",
  "cost" : "65.00",
  "qs_hostname" : "qs19504",
  "qs_status" : "canceled",
  "qs_comment" : ""
}, {
  "qs_id" : "19504",
  "qs_name" : "Quickserver199",
  "cost" : "65.00",
  "qs_hostname" : "qs19504",
  "qs_status" : "canceled",
  "qs_comment" : ""
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * QuickServer Reinstall OS Options
 * Returns the list of available operating system templates for reinstalling the QuickServer.
 *
 * id Integer QuickServer ID number
 * returns VpsTemplatesList
 **/
exports.getQsReinstallOs = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "templates" : [ {
    "template_id" : "1906",
    "template_type" : "14",
    "template_os" : "ubuntu",
    "template_version" : "22.04",
    "template_bits" : "64",
    "template_file" : "ubuntu-22.04",
    "template_available" : "1",
    "template_name" : "Ubuntu",
    "template_dir" : ""
  }, {
    "template_id" : "1906",
    "template_type" : "14",
    "template_os" : "ubuntu",
    "template_version" : "22.04",
    "template_bits" : "64",
    "template_file" : "ubuntu-22.04",
    "template_available" : "1",
    "template_name" : "Ubuntu",
    "template_dir" : ""
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
 * Reset QuickServer Password Info
 * Returns information needed before resetting the QuickServer's root password.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.getQsResetPassword = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Reverse DNS Info
 * Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
 *
 * id Integer QuickServer ID number
 * returns ReverseDnsEntries
 **/
exports.getQsReverseDns = function(id) {
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
 * VNC Setup Info
 * Returns the current VNC connection information for the QuickServer.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.getQsSetupVnc = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get Traffic Usage
 * Returns bandwidth traffic usage data for the QuickServer.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.getQsTrafficUsage = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get View Desktop Info
 * Returns remote desktop connection information for the QuickServer.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.getQsViewDesktop = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Resend QuickServer Welcome Email
 * Resends the welcome email containing connection details and credentials for the QuickServer order.
 *
 * id String Quickserver ID
 * returns TextResponse
 **/
exports.getQsWelcomeEmail = function(id) {
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
 * Create QuickServer Backup
 * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
 *
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsBackup = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update QuickServer Hostname
 * Submits a hostname change request for the QuickServer.
 *
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsChangeHostname = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Change Root Password
 * Triggers a root password reset for the QuickServer.
 *
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsChangeRootPassword = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Change QuickServer Timezone
 * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
 *
 * body TimezoneUpdate 
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsChangeTimezone = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Change QuickServer Timezone
 * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
 *
 * body TimezoneUpdate 
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsChangeTimezone = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Change Webuzo Password
 * Resets the Webuzo control panel password for the QuickServer.
 *
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsChangeWebuzoPassword = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Insert CD in QuickServer
 * Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
 *
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsInsertCd = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Reinstall QuickServer OS
 * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
 *
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsReinstallOs = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Reset QuickServer Password
 * Resets the root password on the QuickServer to a new randomly generated password.
 *
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsResetPassword = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Reverse DNS
 * Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
 *
 * body ReverseDnsEntries 
 * id Integer QuickServer ID number
 * returns TextResponse
 **/
exports.postQsReverseDns = function(body,id) {
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
 * Update Reverse DNS
 * Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
 *
 * body ReverseDnsEntries 
 * id Integer QuickServer ID number
 * returns TextResponse
 **/
exports.postQsReverseDns = function(body,id) {
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
 * Setup VNC
 * Sets up or refreshes the VNC console connection for the QuickServer.
 *
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQsSetupVnc = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Search Traffic Usage
 * Searches and filters the QuickServer's bandwidth traffic usage data by date range.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.postQsTrafficUsage = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Update View Desktop
 * Updates or refreshes the remote desktop session for the QuickServer.
 *
 * id Integer QuickServer ID number
 * no response value expected for this operation
 **/
exports.postQsViewDesktop = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Restore QuickServer from Backup
 * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
 *
 * body RestoreRequest QuickServer Restore request
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQuickServerRestore = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Restore QuickServer from Backup
 * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
 *
 * body RestoreRequest QuickServer Restore request
 * id Integer QuickServer ID number
 * returns QueueResponse
 **/
exports.postQuickServerRestore = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
  "queueId" : 14670065
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Validate QuickServer Order
 * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
 *
 * no response value expected for this operation
 **/
exports.putQs = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Cancel QuickServer Order
 * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 *
 * id Integer QuickServer ID number
 * returns inline_response_200_10
 **/
exports.quickserversCancel = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Rapid Deploy Servers is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update QuickServer Order
 * Updates QuickServer metadata or stored settings associated with the order.
 *
 * id String QuickServer ID number.
 * returns SuccessTextResponse
 **/
exports.updateQsInfo = function(id) {
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

