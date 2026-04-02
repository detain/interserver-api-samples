'use strict';


/**
 * Place VPS Order
 * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
 *
 * body VpsOrderPostRequest  (optional)
 * returns ServiceOrderPostResponse
 **/
exports.addVps = function(body) {
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
 * Place VPS Order
 * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
 *
 * body VpsOrderPostRequest  (optional)
 * returns ServiceOrderPostResponse
 **/
exports.addVps = function(body) {
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
 * Delete VPS Backup
 * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
 *
 * id Integer VPS ID number
 * file String The backup filename to delete.
 * all String Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
 * returns SuccessTextResponse
 **/
exports.deleteVpsBackup = function(id,file,all) {
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
 * Blocks SMTP
 * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
 *
 * id Integer VPS ID number.
 * returns QueueResponse
 **/
exports.doVpsBlockSmtp = function(id) {
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
 * Disables the virtual CD drive on the VPS.
 *
 * id Integer VPS ID number.
 * returns QueueResponse
 **/
exports.doVpsDisableCd = function(id) {
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
 * Disables disk quota enforcement on the VPS.
 *
 * id Integer VPS ID number.
 * returns QueueResponse
 **/
exports.doVpsDisableQuota = function(id) {
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
 * Ejects the virtual CD from the VPS CD drive.
 *
 * id Integer VPS ID number.
 * returns QueueResponse
 **/
exports.doVpsEjectCd = function(id) {
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
 * Enables disk quota enforcement on the VPS.
 *
 * id Integer VPS ID number.
 * returns QueueResponse
 **/
exports.doVpsEnableQuota = function(id) {
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
 * Restart VPS
 * Restarts the VPS.
 *
 * id Integer VPS ID number.
 * returns QueueResponse
 **/
exports.doVpsRestart = function(id) {
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
 * Start VPS
 * Powers on the VPS.
 *
 * id Integer VPS ID number.
 * returns QueueResponse
 **/
exports.doVpsStart = function(id) {
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
 * Stop VPS
 * Powers off the VPS.
 *
 * id Integer VPS ID number.
 * returns QueueResponse
 **/
exports.doVpsStop = function(id) {
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
 * Download VPS Backup
 * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
 *
 * body Id_backups_body_2 
 * all String Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
 * id Integer VPS ID number
 * returns inline_response_200_11
 **/
exports.downloadVpsBackup = function(body,all,id) {
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
 * Download VPS Backup
 * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
 *
 * body Id_backups_body_2 
 * all String Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
 * id Integer VPS ID number
 * returns inline_response_200_11
 **/
exports.downloadVpsBackup = function(body,all,id) {
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
 * VPS Ordering Information
 * Retrieves available VPS configurations, OS templates, and pricing for ordering.
 *
 * returns VpsOrder
 **/
exports.getNewVps = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "vpsSliceOvzCost" : 6,
  "bwType" : "2",
  "vpsSliceXenCost" : 6,
  "maxSlices" : "16",
  "vpsSliceHypervCost" : 10,
  "hdSlice" : "30",
  "bwSlice" : "2000",
  "platformNames" : {
    "kvm" : "KVM",
    "kvmstorage" : "KVM Storage",
    "hyperv" : "HyperV"
  },
  "vpsSliceSsdOvzCost" : 9,
  "osNames" : {
    "ubuntu" : "Ubuntu",
    "opensuse" : "OpenSUSE"
  },
  "vpsNyCost" : 3,
  "vpsSliceLxcCost" : 6,
  "ramSlice" : "2048",
  "hdStorageSlice" : "1000",
  "serviceTypes" : {
    "32" : {
      "services_id" : "32",
      "services_category" : "2",
      "services_field1" : "slice",
      "services_field2" : "",
      "services_name" : "KVM Windows VPS Slice",
      "services_type" : "1",
      "services_buyable" : "1",
      "services_cost" : "10.00",
      "services_module" : "vps"
    }
  },
  "currency" : "USD",
  "vpsSliceKvmStorageCost" : 6,
  "vpsSliceVirtuozzoCost" : 6,
  "locationStock" : {
    "1" : {
      "kvm" : true,
      "kvmstorage" : true,
      "hyperv" : true
    }
  },
  "locationNames" : {
    "3" : "Equinix NY4"
  },
  "vpsSliceKvmWCost" : 10,
  "templates" : {
    "hyperv" : {
      "windows" : {
        "Windows2022" : "2022",
        "Windows2019Standard" : "2019 Standard"
      }
    }
  },
  "bwTotal" : 2,
  "currencySymbol" : "$",
  "cpanelCost" : 22,
  "platformPackages" : {
    "kvm" : 32,
    "kvmstorage" : 57,
    "hyperv" : 54
  },
  "daCost" : 8,
  "packageCosts" : {
    "57" : 6
  },
  "vpsSliceKvmLCost" : 6,
  "vpsSliceSsdVirtuozzoCost" : 9,
  "vpsSliceVmwareCost" : 10
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get VPS Backups List
 * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
 *
 * id Integer VPS ID number
 * all String Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
 * returns VpsBackupRows
 **/
exports.getVpsBackups = function(id,all) {
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
 * HD Space Addon Info
 * Returns available hard drive space addon options and pricing for the VPS.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.getVpsBuyHdSpace = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Additional IP Addon Info
 * Returns available additional IP address options and pricing for the VPS.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.getVpsBuyIp = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get Timezone Info
 * Returns the list of available timezones that can be set on the VPS.
 *
 * id Integer VPS ID number
 * returns List
 **/
exports.getVpsChangeTimezone = function(id) {
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
 * Get VPS Order
 * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
 *
 * id Integer VPS ID number
 * returns Vps
 **/
exports.getVpsInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "package" : "package",
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
    "service_currency" : "USD",
    "service_extra" : {
      "snapshots" : [ {
        "date" : 6,
        "name" : "name",
        "used" : 0
      }, {
        "date" : 6,
        "name" : "name",
        "used" : 0
      } ],
      "spice" : 5903
    },
    "service_payment_status" : "Paid",
    "service_next_invoice_date" : "August 26, 2023",
    "service_frequency" : "Monthly",
    "service_coupon" : "TheCouponIUsed",
    "service_last_invoice_date" : "July 26, 2023",
    "service_currency_symbol" : "$",
    "service_extra_json" : "{\"spice\":5903,\"snapshots\":[{\"name\":\"third\",\"used\":36490445,\"date\":1692095220},{\"name\":\"second\",\"used\":40894464,\"date\":1692181620},{\"name\":\"first\",\"used\":54735668,\"date\":1692268020}]}",
    "service_cost_info" : "0.00",
    "next_date" : "2023-08-26T09:41:12.000Z"
  },
  "serviceMaster" : {
    "vps_name" : "Mystaging",
    "vps_order" : "36978",
    "vps_raid_building" : "0",
    "vps_raid_status" : "OK: zfs:all pools are healthy",
    "vps_load" : "0.17",
    "vps_iowait" : "0.09",
    "vps_hdfree" : "1559",
    "vps_bits" : "64",
    "vps_ram" : "263998228",
    "vps_server_max" : "50",
    "vps_cores" : "48",
    "vps_server_max_slices" : "80",
    "vps_cpu_model" : "Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz",
    "vps_type" : "14",
    "vps_hdsize" : "1856",
    "vps_last_update" : "2023-08-17T22:19:04.000Z",
    "vps_mounts" : "udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages",
    "vps_ip" : "10.11.12.13",
    "vps_location" : "1",
    "vps_id" : "2439",
    "vps_cpu_mhz" : "1198.86",
    "vps_drive_type" : "SSD",
    "vps_kernel" : "5.4.0-121-generic",
    "vps_available" : "0"
  },
  "module" : "module",
  "cpu_graph_data" : "",
  "serviceInfo" : {
    "vps_order_date" : "2022-12-26T20:14:59.000Z",
    "vps_ipv6" : "",
    "vps_currency" : "USD",
    "vps_invoice" : "20130799",
    "vps_coupon" : "3646",
    "vps_server_status" : "running",
    "vps_custid" : "223513",
    "vps_hostname" : "vps85872",
    "vps_vzid" : "vps85872",
    "vps_os" : "ubuntu24",
    "vps_extra" : "{\"spice\":5903,\"snapshots\":[{\"name\":\"third\",\"used\":36490445,\"date\":1692095220},{\"name\":\"second\",\"used\":40894464,\"date\":1692181620},{\"name\":\"first\",\"used\":54735668,\"date\":1692268020}]}",
    "vps_ip" : "1.2.3.4",
    "vps_status" : "active",
    "vps_rootpass" : "mypassword",
    "vps_location" : "1",
    "vps_id" : "85872",
    "vps_vnc" : "8.7.6.5",
    "vps_version" : "ubuntu",
    "vps_diskmax" : "0",
    "vps_slices" : "16",
    "vps_comment" : "my-web-2",
    "vps_platform" : "kvm",
    "vps_server" : "2439",
    "vps_diskused" : "0",
    "vps_vnc_port" : "5902",
    "vps_type" : "33",
    "vps_mac" : "00:16:3e:27:59:b2"
  },
  "extraInfoTables" : {
    "ip_info" : {
      "title" : "IP Information",
      "rows" : [ {
        "value" : "value",
        "desc" : "desc"
      }, {
        "value" : "value",
        "desc" : "desc"
      } ]
    }
  },
  "cp_data" : {
    "cost" : 5,
    "name" : "name"
  },
  "token" : "token",
  "plesk12_data" : {
    "admin" : {
      "sub_name" : "sub_name",
      "cost" : 9,
      "name" : "name",
      "id" : 7
    }
  },
  "os_template" : "os_template",
  "da_data" : {
    "free" : {
      "sub_name" : "sub_name",
      "cost" : 2,
      "name" : "name",
      "img_active" : "img_active",
      "img_disabled" : "img_disabled"
    }
  },
  "serviceAddons" : {
    "has_softaculous" : true,
    "unpaid_ips" : [ "unpaid_ips", "unpaid_ips" ],
    "cost" : 2,
    "has_cpanel" : true,
    "rdata" : [ "rdata", "rdata" ],
    "ips" : [ "ips", "ips" ],
    "cpanel_id" : 3,
    "dedicated_ip" : true,
    "extra_ips" : [ "extra_ips", "extra_ips" ],
    "extra_ips6" : [ "extra_ips6", "extra_ips6" ],
    "has_fantastico" : true,
    "ids" : [ "ids", "ids" ],
    "has_directadmin" : true,
    "has_hdspace" : true,
    "ips6" : [ "ips6", "ips6" ]
  },
  "sr_link" : 5,
  "custCurrencySymbol" : "custCurrencySymbol",
  "custCurrency" : "custCurrency",
  "da_link" : 1
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get VPS Invoices
 * Returns the billing invoices associated with this VPS.
 *
 * id Integer VPS ID number
 * returns ChargeInvoiceRows
 **/
exports.getVpsInvoices = function(id) {
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
 * List VPS Orders
 * Returns all VPS services on the account with their current status and configuration.
 *
 * returns List
 **/
exports.getVpsList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "vps_id" : "100",
  "vps_name" : "Builder",
  "repeat_invoices_cost" : "10.00",
  "vps_hostname" : "vps100",
  "vps_ip" : "64.20.46.220",
  "vps_status" : "active",
  "services_name" : "KVM Windows VPS Slice",
  "vps_comment" : ""
}, {
  "vps_id" : "100",
  "vps_name" : "Builder",
  "repeat_invoices_cost" : "10.00",
  "vps_hostname" : "vps100",
  "vps_ip" : "64.20.46.220",
  "vps_status" : "active",
  "services_name" : "KVM Windows VPS Slice",
  "vps_comment" : ""
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * VPS Reinstall OS Options
 * Returns the list of available OS templates for reinstalling the VPS.
 *
 * id Integer VPS ID number
 * returns VpsTemplatesList
 **/
exports.getVpsReinstallOs = function(id) {
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
 * Reverse DNS Info
 * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
 *
 * id Integer VPS ID number
 * returns ReverseDnsEntries
 **/
exports.getVpsReverseDns = function(id) {
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
 * Returns the current VNC connection information for the VPS.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.getVpsSetupVnc = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Slice Upgrade Info
 * Returns available slice upgrade options and pricing for the VPS.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.getVpsSlices = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get Traffic Usage
 * Returns bandwidth traffic usage data for the VPS.
 *
 * id Integer VPS ID number
 * returns VpsTrafficResponse
 **/
exports.getVpsTrafficUsage = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "name" : "vps2725349",
  "target" : "2725349",
  "interval" : 30,
  "history" : {
    "hour" : {
      "data" : [ [ "2023-09-11T12:00:00Z", 834424 ], [ "2023-09-11T23:00:00Z", 8247944 ], [ "2023-09-14T05:00:00Z", 19763064 ], [ "2023-09-14T06:00:00Z", 18892320 ], [ "2023-09-17T07:00:00Z", 16546448 ] ],
      "times" : [ "2023-09-12T02:00:00Z", "2023-09-17T05:00:00Z", "2023-09-17T06:00:00Z", "2023-09-17T07:00:00Z" ]
    },
    "day" : {
      "data" : [ [ "2023-09-12T00:00:00Z", 1455497448 ], [ "2023-09-13T00:00:00Z", 182943992 ], [ "2023-09-14T00:00:00Z", 290416056 ], [ "2023-09-15T00:00:00Z", 440595840 ], [ "2023-09-16T00:00:00Z", 411255120 ], [ "2023-09-17T00:00:00Z", 346449520 ] ],
      "times" : [ "2023-09-12T00:00:00Z", "2023-09-13T00:00:00Z", "2023-09-14T00:00:00Z", "2023-09-15T00:00:00Z", "2023-09-16T00:00:00Z", "2023-09-17T00:00:00Z" ]
    }
  },
  "last" : "2023-09-17T07:50:12Z",
  "times" : [ "2023-09-17T03:30:30Z", "2023-09-17T03:31:30Z", "2023-09-17T03:32:31Z", "2023-09-17T03:33:31Z", "2023-09-17T04:12:30Z", "2023-09-17T04:13:31Z", "2023-09-17T04:14:30Z", "2023-09-17T04:15:30Z", "2023-09-17T04:16:31Z", "2023-09-17T04:17:30Z", "2023-09-17T04:18:31Z", "2023-09-17T04:19:30Z", "2023-09-17T04:20:30Z", "2023-09-17T04:21:30Z", "2023-09-17T04:22:31Z", "2023-09-17T07:50:12Z" ],
  "totals" : {
    "day" : {
      "in" : 49719744,
      "out" : 11316104
    },
    "month" : {
      "in" : 2880512936,
      "out" : 380333384
    },
    "year" : {
      "in" : 2880512936,
      "out" : 380333384
    },
    "all" : {
      "in" : 2880512936,
      "out" : 380333384
    }
  },
  "usage" : {
    "current" : {
      "in" : 5504,
      "out" : 1248
    },
    "peak" : {
      "in" : 9176,
      "out" : 3600
    },
    "average" : {
      "in" : {
        "total" : 949688,
        "count" : 261,
        "value" : 3639
      },
      "out" : {
        "total" : 200752,
        "count" : 261,
        "value" : 770
      }
    }
  },
  "data" : [ {
    "name" : "74.50.91.46 In",
    "data" : [ [ "2023-09-17T03:30:30Z", 3968 ], [ "2023-09-17T03:31:30Z", 840 ], [ "2023-09-17T03:32:31Z", 632 ], [ "2023-09-17T03:33:31Z", 1232 ], [ "2023-09-17T03:34:31Z", 2960 ], [ "2023-09-17T07:50:12Z", 5504 ] ]
  }, {
    "name" : "74.50.91.46 Out",
    "data" : [ [ "2023-09-17T03:30:30Z", 456 ], [ "2023-09-17T03:31:30Z", 472 ], [ "2023-09-17T03:48:30Z", 592 ] ]
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
 * Get View Desktop Info
 * Returns remote desktop connection information for the VPS.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.getVpsViewDesktop = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Resend VPS Welcome Email
 * Resends the welcome email containing connection details and credentials for the VPS order.
 *
 * id String VPS ID
 * returns SuccessTextResponse
 **/
exports.getVpsWelcomeEmail = function(id) {
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
 * Start a VPS Backup
 * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
 *
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsBackup = function(id) {
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
 * Purchase HD Space Addon
 * Purchases additional hard drive space for the VPS.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.postVpsBuyHdSpace = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Purchase Additional IP
 * Purchases an additional IP address for the VPS.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.postVpsBuyIp = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Update VPS Hostname
 * Changes the hostname of the VPS. This queues a background task to update the server.
 *
 * body HostnameObject 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsChangeHostname = function(body,id) {
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
 * Update VPS Hostname
 * Changes the hostname of the VPS. This queues a background task to update the server.
 *
 * body HostnameObject 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsChangeHostname = function(body,id) {
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
 * Change VPS Root Password
 * Changes the root password of the VPS.
 *
 * body PasswordRequest 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsChangeRootPassword = function(body,id) {
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
 * Change VPS Root Password
 * Changes the root password of the VPS.
 *
 * body PasswordRequest 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsChangeRootPassword = function(body,id) {
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
 * Change VPS Timezone
 * Changes the system timezone on the VPS.
 *
 * body TimezoneUpdate 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsChangeTimezone = function(body,id) {
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
 * Change VPS Timezone
 * Changes the system timezone on the VPS.
 *
 * body TimezoneUpdate 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsChangeTimezone = function(body,id) {
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
 * Changes the Webuzo control panel password on the VPS.
 *
 * body PasswordRequest 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsChangeWebuzoPassword = function(body,id) {
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
 * Changes the Webuzo control panel password on the VPS.
 *
 * body PasswordRequest 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsChangeWebuzoPassword = function(body,id) {
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
 * Insert CD in VPS
 * Mounts an ISO image in the VPS virtual CD drive from the given URL.
 *
 * body UrlRequest 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsInsertCd = function(body,id) {
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
 * Insert CD in VPS
 * Mounts an ISO image in the VPS virtual CD drive from the given URL.
 *
 * body UrlRequest 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsInsertCd = function(body,id) {
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
 * Reinstall VPS OS
 * Reinstalls the operating system on the VPS. Warning - all data will be erased.
 *
 * body TemplateRequest 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsReinstallOs = function(body,id) {
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
 * Reinstall VPS OS
 * Reinstalls the operating system on the VPS. Warning - all data will be erased.
 *
 * body TemplateRequest 
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsReinstallOs = function(body,id) {
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
 * Reset VPS Password
 * Resets the root password on the VPS to a new randomly generated password.
 *
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsResetPassword = function(id) {
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
 * Restore VPS from Backup
 * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
 *
 * body RestoreRequest VPS Restore request
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsRestore = function(body,id) {
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
 * Restore VPS from Backup
 * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
 *
 * body RestoreRequest VPS Restore request
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsRestore = function(body,id) {
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
 * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
 *
 * body ReverseDnsEntries 
 * id Integer VPS ID number
 * returns TextResponse
 **/
exports.postVpsReverseDns = function(body,id) {
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
 * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
 *
 * body ReverseDnsEntries 
 * id Integer VPS ID number
 * returns TextResponse
 **/
exports.postVpsReverseDns = function(body,id) {
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
 * Sets up or refreshes the VNC console connection for the VPS.
 *
 * id Integer VPS ID number
 * returns QueueResponse
 **/
exports.postVpsSetupVnc = function(id) {
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
 * Purchase Slice Upgrade
 * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.postVpsSlices = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Update View Desktop
 * Updates or refreshes the remote desktop session for the VPS.
 *
 * id Integer VPS ID number
 * no response value expected for this operation
 **/
exports.postVpsViewDesktop = function(id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Validate VPS Order
 * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
 *
 * body VpsOrderPutRequest  (optional)
 * returns VpsOrderPutResponse
 **/
exports.putVps = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "continue" : true,
  "errors" : [ ],
  "coupon_code" : 0,
  "service_cost" : 3,
  "slice_cost" : 3,
  "service_type" : 33,
  "repeat_slice_cost" : 3,
  "original_slice_cost" : 3,
  "original_cost" : 3,
  "repeat_service_cost" : 3,
  "monthly_service_cost" : 3,
  "custid" : "123456",
  "os" : "ubuntu",
  "slices" : "1",
  "platform" : "kvm",
  "controlpanel" : "none",
  "period" : 1,
  "location" : 1,
  "version" : "24.04",
  "hostname" : "server.blank.com",
  "coupon" : "",
  "rootpass" : "string"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Validate VPS Order
 * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
 *
 * body VpsOrderPutRequest  (optional)
 * returns VpsOrderPutResponse
 **/
exports.putVps = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "continue" : true,
  "errors" : [ ],
  "coupon_code" : 0,
  "service_cost" : 3,
  "slice_cost" : 3,
  "service_type" : 33,
  "repeat_slice_cost" : 3,
  "original_slice_cost" : 3,
  "original_cost" : 3,
  "repeat_service_cost" : 3,
  "monthly_service_cost" : 3,
  "custid" : "123456",
  "os" : "ubuntu",
  "slices" : "1",
  "platform" : "kvm",
  "controlpanel" : "none",
  "period" : 1,
  "location" : 1,
  "version" : "24.04",
  "hostname" : "server.blank.com",
  "coupon" : "",
  "rootpass" : "string"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update VPS Order
 * Updates settings on a VPS order.
 *
 * id String VPS ID number.
 * returns SuccessTextResponse
 **/
exports.updateVpsInfo = function(id) {
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
 * Cancel VPS Service
 * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 *
 * id Integer VPS ID number
 * returns inline_response_200_22
 **/
exports.vPSCancel = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "VPS is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}

