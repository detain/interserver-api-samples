'use strict';


/**
 * Change Account Username
 * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
 *
 * returns TextResponse
 **/
exports.changeAccountUsername = function() {
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
 * Unlink OAuth Account
 * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
 *
 * name String 
 * returns SuccessTextResponse
 **/
exports.deleteAccountOauthName = function(name) {
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
 * Disable Two-Factor Authentication
 * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
 *
 * returns SuccessTextResponse
 **/
exports.deleteAccountTfa = function() {
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
 * Remove IP Access Restriction
 * Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
 *
 * body IpLimitRange  (optional)
 * returns GenericResponse
 **/
exports.deleteIpLimit = function(body) {
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
 * Retrieve Account Details
 * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
 *
 * returns AccountInfo
 **/
exports.getAccountInfo = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "custid" : "98651",
  "ima" : "client",
  "data" : {
    "group" : "0",
    "address" : "112 Uber St.",
    "city" : "Townsville",
    "country" : "US",
    "disable_cc" : "0",
    "fraudrecord_score" : "0",
    "ima" : "client",
    "name" : "John Doe",
    "payment_method" : "paypal",
    "phone" : "8675309",
    "pin" : "000000",
    "state" : "PA",
    "status" : "active",
    "zip" : "11111",
    "account_id" : "98651",
    "account_lid" : "user@domain.com",
    "address2" : "",
    "affiliate_dock_description" : "Use this coupon when placing an order to get the first month of hosting for only 1 penny.",
    "affiliate_dock_title" : "Exclusive offer to viewers",
    "affiliate_payment_method" : "paypal",
    "affiliate_paypal" : "user@domain.com",
    "cc" : "************1111",
    "cc_auto" : "0",
    "cc_exp" : "05/2019",
    "cc_type" : "visa",
    "cc_whitelist" : "1",
    "ccs" : {
      "1" : {
        "cc" : "************1111",
        "cc_exp" : "05/2019",
        "name" : "John Doe",
        "country" : "US",
        "verified" : true
      },
      "5" : {
        "cc" : "************2222",
        "cc_exp" : "05/2019",
        "name" : "John Doe",
        "address" : "123 Uber St",
        "city" : "Townsville",
        "state" : "PA",
        "zip" : "11122",
        "country" : "US",
        "maxmind_riskscore" : "0.25",
        "maxmind" : {
          "distance" : "0",
          "countryMatch" : "Yes",
          "countryCode" : "US",
          "freeMail" : "No",
          "anonymousProxy" : "No",
          "binMatch" : "No",
          "binCountry" : "IN",
          "err" : "",
          "proxyScore" : "0.00",
          "ip_region" : "PA",
          "ip_city" : "Townsville",
          "ip_latitude" : "40.175",
          "ip_longitude" : "-76.1817",
          "binName" : "state bank of india",
          "ip_isp" : "PenTeleData",
          "ip_org" : "PenTeleData",
          "binNameMatch" : "NA",
          "binPhoneMatch" : "NA",
          "binPhone" : "",
          "custPhoneInBillingLoc" : "NotFound",
          "highRiskCountry" : "No",
          "queriesRemaining" : "2764",
          "cityPostalMatch" : "Yes",
          "shipCityPostalMatch" : "",
          "maxmindID" : "7IVXKOVV",
          "ip_asnum" : "AS3737 AS-PTD",
          "ip_userType" : "residential",
          "ip_countryConf" : "99",
          "ip_regionConf" : "99",
          "ip_cityConf" : "30",
          "ip_postalCode" : "11122",
          "ip_postalConf" : "30",
          "ip_accuracyRadius" : "20",
          "ip_netSpeedCell" : "Cable/DSL",
          "ip_metroCode" : "566",
          "ip_areaCode" : "",
          "ip_timeZone" : "America/New_York",
          "ip_regionName" : "Pennsylvania",
          "ip_domain" : "ptd.net",
          "ip_countryName" : "United States",
          "ip_continentCode" : "NA",
          "ip_corporateProxy" : "No",
          "isTransProxy" : "No",
          "carderEmail" : "No",
          "highRiskUsername" : "No",
          "highRiskPassword" : "No",
          "riskScore" : 0.25,
          "prepaid" : "No",
          "minfraud_version" : "1.3",
          "service_level" : "premium",
          "female_name" : "no"
        },
        "verified" : true
      },
      "6" : {
        "cc" : "************1111",
        "cc_exp" : "05/2021",
        "name" : "John Doe",
        "city" : "Townsville",
        "state" : "PA",
        "zip" : "11122",
        "country" : "US",
        "maxmind_riskscore" : "0.48",
        "maxmind" : {
          "distance" : "0",
          "countryMatch" : "Yes",
          "countryCode" : "US",
          "freeMail" : "No",
          "anonymousProxy" : "No",
          "binMatch" : "Yes",
          "binCountry" : "US",
          "err" : "",
          "proxyScore" : "0.00",
          "ip_region" : "PA",
          "ip_city" : "Townsville",
          "ip_latitude" : "40.175",
          "ip_longitude" : "-76.1817",
          "binName" : "Bank of No Hope",
          "ip_isp" : "PenTeleData",
          "ip_org" : "PenTeleData",
          "binNameMatch" : "NA",
          "binPhoneMatch" : "NA",
          "binPhone" : "1234561234",
          "custPhoneInBillingLoc" : "NotFound",
          "highRiskCountry" : "No",
          "queriesRemaining" : "2765",
          "cityPostalMatch" : "Yes",
          "shipCityPostalMatch" : "",
          "maxmindID" : "AAAAAZZZZZ",
          "ip_asnum" : "AS3737 AS-PTD",
          "ip_userType" : "residential",
          "ip_countryConf" : "99",
          "ip_regionConf" : "99",
          "ip_cityConf" : "30",
          "ip_postalCode" : "11122",
          "ip_postalConf" : "30",
          "ip_accuracyRadius" : "20",
          "ip_netSpeedCell" : "Cable/DSL",
          "ip_metroCode" : "566",
          "ip_areaCode" : "",
          "ip_timeZone" : "America/New_York",
          "ip_regionName" : "Pennsylvania",
          "ip_domain" : "ptd.net",
          "ip_countryName" : "United States",
          "ip_continentCode" : "NA",
          "ip_corporateProxy" : "No",
          "isTransProxy" : "No",
          "carderEmail" : "No",
          "highRiskUsername" : "No",
          "highRiskPassword" : "No",
          "riskScore" : 0.48,
          "prepaid" : "No",
          "minfraud_version" : "1.3",
          "service_level" : "premium",
          "female_name" : "no"
        },
        "verified" : true
      }
    },
    "ccs_added" : "14",
    "company" : "InterServer, Inc.",
    "currency" : "USD",
    "disable_reinstall" : "0",
    "disable_reset" : "0",
    "email" : "user@domain.com",
    "email_abuse" : "",
    "email_settings" : {
      "admin/cc_bad_response" : "1",
      "admin/mass_communications.tpl" : "1"
    },
    "extra" : {
      "private_whois" : "0"
    },
    "facebook_id" : "111111111111111",
    "facebook_url" : "https://www.facebook.com/111111111111111",
    "firstname" : "John",
    "fraudrecord" : {
      "score" : "0",
      "count" : "0",
      "reliability" : "0.0",
      "code" : "zxcvzxcvzxcv"
    },
    "github_id" : "2222222",
    "github_url" : "https://github.com/user",
    "google_id" : "355431342512341234",
    "google_url" : "https://plus.google.com/+JohnDoe",
    "innertell_id" : "2222222",
    "lastname" : "Doe",
    "locale" : "auto",
    "maxmind" : {
      "distance" : "6146",
      "countryMatch" : "No",
      "countryCode" : "US",
      "freeMail" : "No",
      "anonymousProxy" : "No",
      "score" : "5.00",
      "binMatch" : "NotFound",
      "binCountry" : "",
      "err" : "CITY_NOT_FOUND",
      "proxyScore" : "0.00",
      "ip_region" : "PA",
      "ip_city" : "Townsville",
      "ip_latitude" : "40.1767",
      "ip_longitude" : "-76.4297",
      "binName" : "",
      "ip_isp" : "PenTeleData",
      "ip_org" : "PenTeleData",
      "binNameMatch" : "NA",
      "binPhoneMatch" : "NA",
      "binPhone" : "",
      "custPhoneInBillingLoc" : "",
      "highRiskCountry" : "No",
      "queriesRemaining" : "171",
      "cityPostalMatch" : "",
      "shipCityPostalMatch" : "",
      "maxmindID" : "HMOCUJP7",
      "ip_asnum" : "AS3737 PenTeleData Inc.",
      "ip_userType" : "residential",
      "ip_countryConf" : "99",
      "ip_regionConf" : "97",
      "ip_cityConf" : "30",
      "ip_postalCode" : "11122",
      "ip_postalConf" : "30",
      "ip_accuracyRadius" : "10",
      "ip_netSpeedCell" : "Dialup",
      "ip_metroCode" : "566",
      "ip_areaCode" : "333",
      "ip_timeZone" : "America/New_York",
      "ip_regionName" : "Pennsylvania",
      "ip_domain" : "ptd.net",
      "ip_countryName" : "United States",
      "ip_continentCode" : "NA",
      "ip_corporateProxy" : "No",
      "carderEmail" : "No",
      "highRiskUsername" : "No",
      "riskScore" : "4.82",
      "explanation" : "You should review this order carefully, as it is considered high risk. We suggest you be very cautious about accepting this order. This order is higher risk because the distance between the billing address and the user's actual location is so great. The order is higher risk because the billing country and the country in which the IP address is located don't match",
      "female_name" : "no"
    },
    "maxmind_score" : "0",
    "mb_id" : "4769",
    "modernbill_id" : "1234",
    "picture" : "https://avatars3.githubusercontent.com/u/1364504",
    "referrer_coupon" : "detainaffiliatecoupon",
    "reseller_markup" : "10",
    "username" : "user@domain.com",
    "ssh_key" : "zzzz",
    "ssh_key_wrapped" : "zzzz",
    "api_key" : "aaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbccccccccccccccccccc",
    "api_key_wrapped" : "aaaaaaaaaaaaaaaaaaaaaaa<br>bbbbbbbbbbbbb<br>ccccccccccccccccccc",
    "2fa_google_key" : "ssssssssssssssssssssssssss",
    "2fa_google_enabled" : true,
    "2fa_google" : 1,
    "2fa_google_split" : "zzzz zzzz zzzz zzzz ",
    "2fa_google_qr" : "data:image/png;base64,zzz"
  },
  "ip" : "1.2.3.4",
  "oauthproviders" : [ ],
  "oauthconfig" : {
    "callback" : "https://my.interserver.net/oauth/callback.php",
    "providers" : {
      "Twitter" : {
        "enabled" : false,
        "linked" : false
      },
      "Facebook" : {
        "enabled" : true,
        "account" : "111111111111111111111",
        "url" : "https://www.facebook.com/111111111111111111111",
        "linked" : true
      },
      "Google" : {
        "enabled" : true,
        "account" : "111111111111111111111",
        "url" : "https://plus.google.com/+UserName",
        "linked" : true
      },
      "GitHub" : {
        "enabled" : true,
        "account" : "111111111111111111111",
        "url" : "https://github.com/detain",
        "linked" : true
      }
    }
  },
  "oauthadapters" : [ ],
  "limits" : [ {
    "start" : "1.1.1.1",
    "end" : "1.1.1.254"
  }, {
    "start" : "2600:387:0:809::1b",
    "end" : "2600:387:0:809::1b"
  } ],
  "language" : "en-US",
  "countryCurrencies" : {
    "CN" : [ "USD" ],
    "BR" : [ "USD", "BRL" ],
    "RU" : [ "USD" ]
  },
  "enableLocales" : true,
  "enableCurrencies" : false,
  "gravatar" : "https://avatars3.githubusercontent.com/u/1364504"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Two-Factor Setup Data
 * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
 *
 * returns inline_response_200
 **/
exports.getAccountTfaSetup = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "2fa_google_key" : "2fa_google_key",
  "2fa_google_split" : "2fa_google_split"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Home Data
 * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
 *
 * returns Home
 **/
exports.getHome = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "amount" : "$23.50",
  "invoice_list" : 5,
  "tickets" : [ "tickets", "tickets" ],
  "last_login" : "14:58:pm - 17 Aug, 2023",
  "services" : {
    "licenses" : {
      "count" : 1,
      "links" : {
        "386522" : "1.2.3.4"
      }
    },
    "servers" : {
      "count" : 1,
      "links" : {
        "16058" : "anotherserver.com"
      }
    },
    "webhosting" : {
      "count" : 8,
      "links" : {
        "376359" : "Doefamily.com",
        "376473" : "fancytush.com",
        "386218" : "admincoded.net"
      }
    },
    "vps" : {
      "count" : 20,
      "links" : {
        "2500081" : "vps2500081",
        "465503" : "vps465503",
        "2578866" : "vps2578866"
      }
    },
    "domains" : {
      "count" : 5,
      "links" : {
        "376503" : "hostingenuity.com",
        "592337" : "detain.dev",
        "376114" : "pimpmy.website"
      }
    },
    "backups" : {
      "count" : 0,
      "links" : [ "links", "links" ]
    }
  },
  "AFFILIATE_AMOUNT" : "100",
  "ticketStatusView" : {
    "4" : "Open",
    "5" : "On Hold",
    "6" : "Closed"
  },
  "full_name" : "John",
  "balance" : "$0.60",
  "last_login_ip" : "99.88.77.66",
  "ticketStatus" : {
    "On Hold" : 5,
    "Open" : 4
  },
  "currency" : "$",
  "details" : {
    "modules" : {
      "licenses" : {
        "heading" : "Licenses",
        "buy_link" : "order_license",
        "icon" : "id-card",
        "list_link" : "view_licenses_list",
        "view_link" : "view_license"
      },
      "servers" : {
        "heading" : "Dedicated Servers",
        "buy_link" : "order_server",
        "icon" : "server",
        "list_link" : "view_servers_list",
        "view_link" : "view_server"
      },
      "quickservers" : {
        "heading" : "Quick Servers",
        "buy_link" : "order_quickserver",
        "icon" : "database",
        "list_link" : "view_quickservers_list",
        "view_link" : "view_qs"
      },
      "webhosting" : {
        "heading" : "Web Hosting",
        "buy_link" : "order_website",
        "icon" : "window-maximize",
        "list_link" : "view_websites_list",
        "view_link" : "view_website"
      },
      "vps" : {
        "heading" : "VPS",
        "buy_link" : "order_vps",
        "icon" : "cloud-meatball",
        "list_link" : "view_vps_list",
        "view_link" : "view_vps"
      },
      "domains" : {
        "heading" : "Domains",
        "buy_link" : "domain_order",
        "icon" : "globe",
        "list_link" : "view_domains_list",
        "view_link" : "view_domain"
      },
      "backups" : {
        "heading" : "Storages",
        "buy_link" : "order_storage",
        "icon" : "warehouse",
        "list_link" : "view_backups_list",
        "view_link" : "view_backup"
      }
    }
  },
  "email" : "user@domain.com"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Search Autocomplete
 * Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
 *
 * returns SearchAutocompleteResponse
 **/
exports.getSearch = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "key" : { }
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Log Out
 * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
 *
 * returns SuccessTextResponse
 **/
exports.logout = function() {
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
 * Logout of OAuth
 * Logs out of the specified OAuth provider session.
 *
 * name String 
 * returns SuccessTextResponse
 **/
exports.logoutAccountOauth = function(name) {
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
 * Generate New API Key
 * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
 *
 * returns SuccessTextResponse
 **/
exports.updateAccountApiKey = function() {
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
 * Update Account Feature Flags
 * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
 *
 * body AccountFeatures 
 * returns SuccessTextResponse
 **/
exports.updateAccountFeatures = function(body) {
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
 * Update Account Feature Flags
 * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
 *
 * body AccountFeatures 
 * returns SuccessTextResponse
 **/
exports.updateAccountFeatures = function(body) {
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
 * Update Account Information
 * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
 *
 * body AccountInfoPost 
 * returns SuccessTextResponse
 **/
exports.updateAccountInfo = function(body) {
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
 * Update Account Information
 * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
 *
 * body AccountInfoPost 
 * returns SuccessTextResponse
 **/
exports.updateAccountInfo = function(body) {
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
 * Add IP Access Restriction
 * Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
 *
 * body IpLimitRange The lower and upper bounds of an ip range.
 * returns SuccessTextResponse
 **/
exports.updateAccountIpLimits = function(body) {
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
 * Add IP Access Restriction
 * Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
 *
 * body IpLimitRange The lower and upper bounds of an ip range.
 * returns SuccessTextResponse
 **/
exports.updateAccountIpLimits = function(body) {
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
 * Change Account Password
 * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
 *
 * body PasswordRequest 
 * returns TextResponse
 **/
exports.updateAccountPassword = function(body) {
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
 * Change Account Password
 * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
 *
 * body PasswordRequest 
 * returns TextResponse
 **/
exports.updateAccountPassword = function(body) {
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
 * Update SSH Keys
 * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
 *
 * body AccountSshKey 
 * returns SuccessTextResponse
 **/
exports.updateAccountSshKey = function(body) {
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
 * Update SSH Keys
 * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
 *
 * body AccountSshKey 
 * returns SuccessTextResponse
 **/
exports.updateAccountSshKey = function(body) {
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
 * Enable Two-Factor Authentication
 * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
 *
 * body Account_2fa_body_1 
 * returns SuccessTextResponse
 **/
exports.updateAccountTfa = function(body) {
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
 * Enable Two-Factor Authentication
 * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
 *
 * body Account_2fa_body_1 
 * returns SuccessTextResponse
 **/
exports.updateAccountTfa = function(body) {
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

