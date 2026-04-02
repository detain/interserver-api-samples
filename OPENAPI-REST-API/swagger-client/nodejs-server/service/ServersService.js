'use strict';


/**
 * Place Server Order
 * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
 *
 * returns inline_response_200_19
 **/
exports.addServer = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Order Completed",
  "invoice" : 0,
  "order" : 6
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Buy Now Server Options
 * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
 *
 * returns inline_response_200_27
 **/
exports.buyItNowServerOrder = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "os" : [ {
    "monthly_price" : "0",
    "id" : "5",
    "short_desc" : "FreeBSD",
    "long_desc" : "Latest FreeBSD 6.x OS<br><pre>CP(s): cPanel/DirectAdmin</pre>"
  }, {
    "monthly_price" : "0",
    "id" : "5",
    "short_desc" : "FreeBSD",
    "long_desc" : "Latest FreeBSD 6.x OS<br><pre>CP(s): cPanel/DirectAdmin</pre>"
  } ],
  "bandwidth" : [ {
    "monthly_price" : "0",
    "id" : "10",
    "short_desc" : "1GBPS Unmetered",
    "long_desc" : ""
  }, {
    "monthly_price" : "0",
    "id" : "10",
    "short_desc" : "1GBPS Unmetered",
    "long_desc" : ""
  } ],
  "ips" : [ {
    "monthly_price" : "0",
    "id" : "9",
    "short_desc" : "1 Vlan Ip (/30)",
    "long_desc" : "1 IP In personal Vlan"
  }, {
    "monthly_price" : "0",
    "id" : "9",
    "short_desc" : "1 Vlan Ip (/30)",
    "long_desc" : "1 IP In personal Vlan"
  } ],
  "cp" : [ {
    "monthly_price" : "0",
    "os_type" : "",
    "id" : "1",
    "short_desc" : "None",
    "long_desc" : ""
  }, {
    "monthly_price" : "0",
    "os_type" : "",
    "id" : "1",
    "short_desc" : "None",
    "long_desc" : ""
  } ],
  "raid" : [ {
    "monthly_price" : "0",
    "id" : "0",
    "short_desc" : "No Raid",
    "long_desc" : "No Raid"
  }, {
    "monthly_price" : "0",
    "id" : "0",
    "short_desc" : "No Raid",
    "long_desc" : "No Raid"
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
 * List Marketplace Servers
 * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
 *
 * returns BuyItNowList
 **/
exports.getMPServers = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "disk" : {
    "key" : "disk"
  },
  "memory" : "64GB",
  "bandwidth" : "1Gbps Unmetered",
  "price" : 64,
  "cpu" : [ "", "" ],
  "location" : "NYC Region",
  "server_id" : "11432",
  "ips" : "1 Vlan Ip (/30)"
}, {
  "disk" : {
    "key" : "disk"
  },
  "memory" : "64GB",
  "bandwidth" : "1Gbps Unmetered",
  "price" : 64,
  "cpu" : [ "", "" ],
  "location" : "NYC Region",
  "server_id" : "11432",
  "ips" : "1 Vlan Ip (/30)"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Server Ordering Information
 * Retrieves available server configurations and pricing for ordering a new dedicated server.
 *
 * returns ServerOrder
 **/
exports.getNewServer = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "memory_li" : {
    "254" : {
      "65" : {
        "drive_type" : "lff",
        "monthly_price" : 50,
        "img" : "hd.jpg",
        "size" : "3000",
        "hidden" : "0",
        "price" : "0",
        "manu" : "manu",
        "monthly_price_display" : "$50.00",
        "id" : "65",
        "short_desc" : "20TB SATA",
        "type" : "type",
        "long_desc" : "long_desc"
      }
    }
  },
  "raid_li" : [ {
    "monthly_price" : 50,
    "img" : "raid.png",
    "price" : 50,
    "monthly_price_display" : "$50.00",
    "active" : "1",
    "id" : "7",
    "short_desc" : "Hardware Raid 5",
    "price_display" : "$50.00",
    "long_desc" : "Hardware Raid 5"
  }, {
    "monthly_price" : 50,
    "img" : "raid.png",
    "price" : 50,
    "monthly_price_display" : "$50.00",
    "active" : "1",
    "id" : "7",
    "short_desc" : "Hardware Raid 5",
    "price_display" : "$50.00",
    "long_desc" : "Hardware Raid 5"
  } ],
  "cpu_li" : {
    "254" : {
      "num_cpus" : "1",
      "img" : "ryzen.png",
      "max_lff" : "4",
      "type" : "AMD",
      "max_sff" : "4",
      "speed" : "4.7",
      "hd_ids" : "hd_ids",
      "price" : 0,
      "max_ram" : "128",
      "max_nve" : "2",
      "monthly_price_display" : "$75.00",
      "id" : "254",
      "price_display" : "$0.00",
      "min_ram" : "128",
      "monthly_price" : 75,
      "cache" : "cache",
      "visible" : "yes",
      "num_cores" : "12",
      "manu" : "manu",
      "active" : "1",
      "benchmark" : "121148",
      "long_desc" : "High core and thread count...",
      "fsb" : "fsb",
      "location" : "New York",
      "short_desc" : "AMD RYZEN 7900X"
    }
  },
  "field_label" : {
    "memory" : "",
    "os" : "",
    "bandwidth" : "",
    "hd" : "",
    "ips" : "",
    "cp" : "",
    "raid" : ""
  },
  "cp_li" : {
    "9" : {
      "monthly_price" : 0,
      "img" : "cpanel.gif",
      "types" : [ "1", "2", "4", "5", "8", "17", "23", "30", "51" ],
      "price" : 80,
      "os_type" : "os_type",
      "monthly_price_display" : "$0.00",
      "id" : "9",
      "short_desc" : "cPanel ($45+)",
      "price_display" : "$80.00",
      "long_desc" : "long_desc"
    }
  },
  "cpu" : 184,
  "os_li" : {
    "51" : {
      "monthly_price" : 0,
      "img" : "img",
      "price" : 0,
      "monthly_price_display" : "$0.00",
      "active" : "1",
      "id" : "51",
      "short_desc" : "AlmaLinux",
      "price_display" : "$0.00",
      "long_desc" : "long_desc"
    }
  },
  "form_values" : {
    "memory" : 22,
    "os" : "5",
    "bandwidth" : "3",
    "hd" : "16",
    "ips" : "9",
    "cp" : 5,
    "raid" : "0"
  },
  "ips_li" : {
    "9" : {
      "monthly_price" : 0,
      "img" : "ips.jpg",
      "price" : 0,
      "qty" : "1",
      "monthly_price_display" : "$0.00",
      "id" : "9",
      "short_desc" : "1 Vlan Ip (/30)",
      "price_display" : "$0.00",
      "long_desc" : "1 IP In personal Vlan"
    }
  },
  "bandwidth_li" : {
    "15" : {
      "monthly_price" : 15,
      "img" : "bandwidth.jpg",
      "price" : 0,
      "qty" : "4000",
      "monthly_price_display" : "$15.00",
      "active" : "1",
      "id" : "15",
      "short_desc" : "150TB (10Gb Port)",
      "price_display" : "$0.00",
      "type" : "Standard",
      "long_desc" : " - 2000GB Bandwidth..."
    }
  },
  "config_ids" : {
    "memory" : 22,
    "os" : "5",
    "bandwidth" : "3",
    "hd" : "16",
    "ips" : "9",
    "cp" : 5,
    "raid" : "0"
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
 * Get Server Order
 * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
 *
 * id Integer Server ID number.
 * returns Server
 **/
exports.getServerInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "serviceExtra" : [ "serviceExtra", "serviceExtra" ],
  "package" : "package",
  "networkInfo" : {
    "vlans" : [ ],
    "assets" : {
      "3497" : {
        "col" : "06",
        "vlans" : [ ],
        "ipmi_client_password" : "ipmi_client_password",
        "switchports" : [ 10414 ],
        "description" : "",
        "external_id" : "",
        "asset_id" : "1",
        "ipmi_admin_username" : "ipmi_admin_username",
        "ipmi_working" : "0",
        "mac" : "mac",
        "hostname" : "myserver.host.com",
        "primary_ipv4" : "1.2.3.250",
        "overdue" : "0",
        "create_timestamp" : "create_timestamp",
        "update_timestamp" : "update_timestamp",
        "asset_name" : "server",
        "primary_ipv6" : "",
        "unit_sub" : "0",
        "ipmi_mac" : "0c:c4:7a:af:35:00",
        "billing_status" : "active",
        "company" : "int",
        "model" : "SYS-6018R-TDW",
        "id" : 3497,
        "row" : "017",
        "rack_y" : "5",
        "ipmi_ip" : "10.8.69.7",
        "make" : "Supermicro",
        "rack_location" : "2",
        "rack_x" : "25",
        "asset_tag" : "",
        "rack" : "68",
        "comments" : "",
        "type_id" : "1",
        "ipmi_updated" : "ipmi_updated",
        "ipmi_admin_password" : "ipmi_admin_password",
        "datacenter" : "2",
        "unit_start" : "37",
        "rack_name" : "112.16",
        "rack_id" : "68",
        "rack_size" : "44",
        "unit_end" : "37",
        "comment" : "comment",
        "lease" : {
          "authenticated" : false,
          "mac" : "0c:c4:7a:af:35:00",
          "group" : "1"
        },
        "customer_id" : "int5377",
        "order_id" : "16058",
        "vlans6" : [ ],
        "ipmi_client_username" : "ipmi_client_username",
        "status" : "active"
      }
    },
    "switchports" : {
      "10414" : {
        "vlans" : [ ],
        "switchport_id" : 10414,
        "port" : "Ethernet1/33",
        "justport" : "33",
        "switch_id" : "118",
        "asset_id" : 3497,
        "graph_id" : "12622",
        "vlans6" : [ ],
        "switch" : "edge1",
        "blade" : "Ethernet1"
      }
    },
    "vlans6" : [ ]
  },
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
    "service_extra" : [ "service_extra", "service_extra" ],
    "service_payment_status" : "service_payment_status",
    "service_next_invoice_date" : "service_next_invoice_date",
    "service_frequency" : "service_frequency",
    "service_last_invoice_date" : "service_last_invoice_date",
    "service_currency_symbol" : "service_currency_symbol",
    "service_extra_json" : "service_extra_json",
    "service_cost_info" : "service_cost_info",
    "next_date" : "next_date"
  },
  "ipmiAuth" : true,
  "extraInfoTables" : {
    "assets" : {
      "title" : "Assets",
      "size" : 2,
      "type" : "table",
      "header" : [ "Id", "Hostname", "Description", "Location Name", "Rack Name", "Status", "Primary Ipv4", "Comments" ],
      "rows" : [ [ "3497", "myserver.host.com", "CPU:..............2x Intel Xeon E5-2620v4 @2.10GHz\r\nMemory:...........128GB DDR3 1600MHz\r\nHard Drive 1:.....Crucial 500 GB SSD\r\nHard Drive 2:.....Crucial 500 GB SSD\r\nRAID:.............none\r\nOS:...............Ubuntu 20\r\nControl Panel:....none\r\nNetwork...........10G Card\r\nIP(s):............Vlan 3497\r\nBandwidth:........10Tb @ 10gb port", "TEB2", "112.16", "active", "1.2.3.250", "" ] ]
    }
  },
  "serviceInfo" : {
    "server_total_cost" : "230",
    "server_location" : "server_location",
    "server_invoice" : "18738142",
    "server_setup" : "0",
    "server_dedicated_cpu" : "38",
    "server_status" : "active",
    "server_rep" : "0",
    "server_hardware_ordered" : "0",
    "server_dedicated_tag" : "0",
    "server_discount" : "server_discount",
    "server_root" : "",
    "server_custid" : "771282",
    "server_welcome_email" : "1",
    "server_extra" : "[]",
    "server_ips" : "0",
    "server_dedicated_bandwidth" : "3",
    "server_currency" : "USD",
    "server_comment" : "",
    "server_initial_bill" : "0",
    "server_dedicated_memory" : "22",
    "server_date" : "1588972956",
    "server_id" : "16058",
    "server_billed" : "0",
    "server_hostname" : "myserver.host.com",
    "server_dedicated_hd2" : "server_dedicated_hd2",
    "server_dedicated_hd1" : "20",
    "server_dedicated_cp" : "server_dedicated_cp",
    "server_dedicated_raid" : "0",
    "server_dedicated_ips" : "5",
    "server_hardware" : "0",
    "server_monthly_bill" : "0",
    "server_custom_tag" : "",
    "server_order_date" : "2020-05-08T17:22:36.000Z",
    "server_coupon" : "0",
    "server_type" : "600",
    "server_dedicated_os" : "30"
  },
  "custCurrencySymbol" : "custCurrencySymbol",
  "locations" : {
    "1" : {
      "location_long" : "location_long",
      "location_name" : "location_name",
      "location_ipmi_group" : 6,
      "location_description" : "location_description",
      "location_id" : 0,
      "location_lat" : "location_lat"
    }
  },
  "custCurrency" : "custCurrency"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Server Invoices
 * Returns the billing invoices associated with this dedicated server.
 *
 * id Integer Server ID number
 * returns ChargeInvoiceRows
 **/
exports.getServerInvoices = function(id) {
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
 * List Servers
 * Returns all dedicated server services on the account with their current status and configuration.
 *
 * returns List
 **/
exports.getServerList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "server_id" : "8404",
  "account_lid" : "detain@interserver.net",
  "server_hostname" : "testsignup.is.net",
  "server_status" : "deleted"
}, {
  "server_id" : "8404",
  "account_lid" : "detain@interserver.net",
  "server_hostname" : "testsignup.is.net",
  "server_status" : "deleted"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Reverse DNS Info
 * Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
 *
 * id Integer Server ID number
 * returns ReverseDnsEntries
 **/
exports.getServerReverseDns = function(id) {
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
 * Resend Server Welcome Email
 * Resends the welcome email for the order.
 *
 * id Integer Server ID number
 * returns SuccessTextResponse
 **/
exports.getServersWelcomeEmail = function(id) {
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
 * Place Buy Now Server Order
 * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
 *
 * body Order_buy_now_server_body  (optional)
 * returns ServersBuyNowResponse
 **/
exports.placeBuyNowServer = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Server order is placed.",
  "order_details" : {
    "service_id" : 1234,
    "invoice_id" : 2342355
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
 * Update Reverse DNS
 * Updates the reverse DNS (PTR record) entries for the server's IP addresses.
 *
 * body ReverseDnsEntries 
 * id Integer Server ID number
 * returns TextResponse
 **/
exports.postServerReverseDns = function(body,id) {
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
 * Updates the reverse DNS (PTR record) entries for the server's IP addresses.
 *
 * body ReverseDnsEntries 
 * id Integer Server ID number
 * returns TextResponse
 **/
exports.postServerReverseDns = function(body,id) {
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
 * Validate Server Order
 * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
 *
 * no response value expected for this operation
 **/
exports.putServers = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Server IPMI Live Information
 * Returns the current IPMI live connection information for the server.
 *
 * id Integer Server ID number
 * returns ServerIpmiLiveInfo
 **/
exports.serverIpmiLiveGet = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Setup Complete",
  "public_ip" : "1.2.3.4",
  "allowed_ip" : "1.2.3.4",
  "client_username" : "user",
  "client_password" : "pass"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Server IPMI Live Setup
 * Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
 *
 * body ServerIpmiLiveRequest 
 * id Integer Server ID number
 * returns ServerIpmiLiveInfo
 **/
exports.serverIpmiLivePost = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Setup Complete",
  "public_ip" : "1.2.3.4",
  "allowed_ip" : "1.2.3.4",
  "client_username" : "user",
  "client_password" : "pass"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Server IPMI Live Setup
 * Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
 *
 * body ServerIpmiLiveRequest 
 * id Integer Server ID number
 * returns ServerIpmiLiveInfo
 **/
exports.serverIpmiLivePost = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "text" : "Setup Complete",
  "public_ip" : "1.2.3.4",
  "allowed_ip" : "1.2.3.4",
  "client_username" : "user",
  "client_password" : "pass"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get IPMI Power Status
 * Returns the chassis power status from ipmi.
 *
 * id Integer Server ID number
 * returns TextResponse
 **/
exports.serverIpmiPowerGet = function(id) {
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
 * Server IPMI Power
 * Uses the IPMI interface to set the Power status on the server.
 *
 * body ServerIpmiPowerRequest 
 * id Integer Server ID number
 * returns TextResponse
 **/
exports.serverIpmiPowerPost = function(body,id) {
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
 * Server IPMI Power
 * Uses the IPMI interface to set the Power status on the server.
 *
 * body ServerIpmiPowerRequest 
 * id Integer Server ID number
 * returns TextResponse
 **/
exports.serverIpmiPowerPost = function(body,id) {
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
 * Cancel Server Service
 * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 *
 * id Integer Server ID number
 * returns inline_response_200_20
 **/
exports.serversCancel = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Servers is canceled."
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Server Order
 * Updates settings on a dedicated server order.
 *
 * id String Server ID number.
 * returns SuccessTextResponse
 **/
exports.updateServerInfo = function(id) {
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

