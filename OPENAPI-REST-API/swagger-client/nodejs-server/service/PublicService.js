'use strict';


/**
 * Get Captcha Challenge
 * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
 *
 * returns CaptchaResponse
 **/
exports.getCaptcha = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "captcha" : "data:image/jpeg;base64,/9j/4AAQ"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Countries
 * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
 *
 * fetch_by String Get countries by iso2 or iso3 or numcode (optional)
 * returns Object
 **/
exports.getCountries = function(fetch_by) {
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
 * Get Server Info
 * Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
 *
 * returns ServicesInfo
 **/
exports.getInfo = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "modules" : {
    "domains" : {
      "SERVICE_ID_OFFSET" : 10000,
      "USE_REPEAT_INVOICE" : true,
      "USE_PACKAGES" : true,
      "BILLING_DAYS_OFFSET" : 45,
      "IMGNAME" : "domain.png",
      "REPEAT_BILLING_METHOD" : 2,
      "DELETE_PENDING_DAYS" : 45,
      "SUSPEND_DAYS" : 14,
      "SUSPEND_WARNING_DAYS" : 7,
      "TITLE" : "Domain Registrations",
      "MENUNAME" : "Domains",
      "EMAIL_FROM" : "support@interserver.net",
      "TBLNAME" : "Domains",
      "TABLE" : "domains",
      "TITLE_FIELD" : "domain_hostname",
      "PREFIX" : "domain"
    },
    "vps" : {
      "SERVICE_ID_OFFSET" : 0,
      "USE_REPEAT_INVOICE" : true,
      "USE_PACKAGES" : true,
      "BILLING_DAYS_OFFSET" : 0,
      "IMGNAME" : "root-server.png",
      "REPEAT_BILLING_METHOD" : 2,
      "DELETE_PENDING_DAYS" : 45,
      "SUSPEND_DAYS" : 14,
      "SUSPEND_WARNING_DAYS" : 7,
      "TITLE" : "VPS",
      "MENUNAME" : "VPS",
      "EMAIL_FROM" : "support@interserver.net",
      "TBLNAME" : "VPS",
      "TABLE" : "vps",
      "TITLE_FIELD" : "vps_hostname",
      "TITLE_FIELD2" : "vps_ip",
      "TITLE_FIELD3" : "vps_vzid",
      "PREFIX" : "vps"
    }
  },
  "services" : {
    "31" : {
      "services_id" : 31,
      "services_name" : "OpenVZ VPS Slice",
      "services_cost" : 6,
      "services_currency" : "USD",
      "services_category" : 1,
      "services_buyable" : true,
      "services_type" : 6,
      "services_field1" : "slice",
      "services_field2" : "",
      "services_module" : "vps"
    },
    "32" : {
      "services_id" : 32,
      "services_name" : "KVM Windows VPS Slice",
      "services_cost" : 10,
      "services_currency" : "USD",
      "services_category" : 2,
      "services_buyable" : true,
      "services_type" : 1,
      "services_field1" : "slice",
      "services_field2" : "",
      "services_module" : "vps"
    }
  },
  "serviceTypes" : {
    "1" : {
      "st_id" : 1,
      "st_name" : "KVM Windows",
      "st_category" : 2,
      "st_module" : "vps"
    },
    "2" : {
      "st_id" : 2,
      "st_name" : "KVM Linux",
      "st_category" : 2,
      "st_module" : "vps"
    },
    "3" : {
      "st_id" : 3,
      "st_name" : "Cloud KVM Windows",
      "st_category" : 3,
      "st_module" : "vps"
    }
  },
  "serviceCategories" : {
    "1" : {
      "category_id" : 1,
      "category_name" : "OpenVZ Virtual Servers",
      "category_tag" : "openvz",
      "category_module" : "vps"
    },
    "2" : {
      "category_id" : 2,
      "category_name" : "KVM Virtual Servers",
      "category_tag" : "kvm",
      "category_module" : "vps"
    },
    "3" : {
      "category_id" : 3,
      "category_name" : "Xen Virtual Servers",
      "category_tag" : "xen",
      "category_module" : "vps"
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
 * Get Login Info
 * Gets the various pieces of information useful for generating a login page.
 *
 * returns LoginInfo
 **/
exports.getLoginInfo = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "logo" : "//my.interserver.net/images/logos/mystaging.png",
  "captcha" : "data:image/jpeg;base64,/9j/",
  "language" : "en-US",
  "counts" : {
    "vps" : 290201,
    "websites" : 205172,
    "servers" : 27940
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
 * Get OAuth Redirect URL
 * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
 *
 * provider String The OAuth provider name (e.g. `Google`).
 * returns inline_response_200_5
 **/
exports.getOauthRedirect = function(provider) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "redirect_url" : "redirect_url"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Get Available Timezones
 * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
 *
 * returns List
 **/
exports.getTimezones = function() {
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
 * Complete OAuth Two-Factor Verification
 * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
 *
 * body Oauth_body_2 
 * returns inline_response_200_7
 **/
exports.patchOauthTwoFactor = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "login" : true
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Complete OAuth Two-Factor Verification
 * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
 *
 * body Oauth_body_2 
 * returns inline_response_200_7
 **/
exports.patchOauthTwoFactor = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "login" : true
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Ping Server
 * Performs a single ping/pong request to let you know if the server is up.
 *
 * returns String
 **/
exports.pingServer = function() {
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
 * OAuth Callback
 * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
 *
 * body Oauth_body  (optional)
 * provider String The OAuth provider name (e.g. `Google`).
 * returns inline_response_200_6
 **/
exports.postOauthCallback = function(body,provider) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "account_id" : 0,
  "error_code" : "error_code",
  "login" : true,
  "signup" : true,
  "linked" : true
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * OAuth Callback
 * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
 *
 * body Oauth_body  (optional)
 * provider String The OAuth provider name (e.g. `Google`).
 * returns inline_response_200_6
 **/
exports.postOauthCallback = function(body,provider) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "account_id" : 0,
  "error_code" : "error_code",
  "login" : true,
  "signup" : true,
  "linked" : true
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Submit Login Information
 * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
 *
 * body LoginSubmissionExample 
 * returns LoginSuccessResponse
 **/
exports.submitLogin = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "sessionId" : "zzzzzzzzzzzzzz",
  "account_id" : 123,
  "account_lid" : "my@user.com",
  "ima" : "client",
  "gravatar" : "https://gravatar.com/user/image.png"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Submit Login Information
 * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
 *
 * body LoginSubmissionExample 
 * returns LoginSuccessResponse
 **/
exports.submitLogin = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "sessionId" : "zzzzzzzzzzzzzz",
  "account_id" : 123,
  "account_lid" : "my@user.com",
  "ima" : "client",
  "gravatar" : "https://gravatar.com/user/image.png"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Submit Signup Information
 * Creates a new account in our system using the provided information.
 *
 * body LoginSubmissionExample  (optional)
 * no response value expected for this operation
 **/
exports.submitSignup = function(body) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}

