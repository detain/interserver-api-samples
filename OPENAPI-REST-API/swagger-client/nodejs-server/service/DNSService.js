'use strict';


/**
 * Create DNS Domain
 * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
 *
 * body DnsNewDomain 
 * returns SuccessTextResponse
 **/
exports.addDnsDomain = function(body) {
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
 * Create DNS Domain
 * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
 *
 * body DnsNewDomain 
 * returns SuccessTextResponse
 **/
exports.addDnsDomain = function(body) {
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
 * Add DNS Record to Domain
 * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
 *
 * body DnsNewRecord 
 * id String The DNS Domain ID.
 * no response value expected for this operation
 **/
exports.addDnsRecord = function(body,id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Add DNS Record to Domain
 * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
 *
 * body DnsNewRecord 
 * id String The DNS Domain ID.
 * no response value expected for this operation
 **/
exports.addDnsRecord = function(body,id) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Delete DNS Domain
 * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
 *
 * id String The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
 * returns SuccessTextResponse
 **/
exports.deleteDnsDomain = function(id) {
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
 * Delete DNS Record
 * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
 *
 * domainId Integer The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
 * recordId Integer The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
 * returns SuccessTextResponse
 **/
exports.deleteDnsRecord = function(domainId,recordId) {
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
 * List Domain DNS Records
 * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
 *
 * id Integer The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
 * returns List
 **/
exports.getDnsDomain = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "id" : "473",
  "domain_id" : "68",
  "name" : "hussfamily.com",
  "type" : "NS",
  "content" : "cdns1.interserver.net",
  "ttl" : "86400",
  "prio" : "0",
  "disabled" : "0",
  "ordername" : "",
  "auth" : "1"
}, {
  "id" : "473",
  "domain_id" : "68",
  "name" : "hussfamily.com",
  "type" : "NS",
  "content" : "cdns1.interserver.net",
  "ttl" : "86400",
  "prio" : "0",
  "disabled" : "0",
  "ordername" : "",
  "auth" : "1"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * List DNS Domains
 * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
 *
 * returns List
 **/
exports.getDnsList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = [ {
  "id" : 68,
  "name" : "hussfamily.com",
  "content" : "64.20.35.186"
}, {
  "id" : 68,
  "name" : "hussfamily.com",
  "content" : "64.20.35.186"
} ];
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update DNS Record
 * Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
 *
 * body DnsUpdateRecord The request data to update a dns record.
 * domainId Integer The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
 * recordId Integer The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
 * returns SuccessTextResponse
 **/
exports.updateDnsRecord = function(body,domainId,recordId) {
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
 * Update DNS Record
 * Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
 *
 * body DnsUpdateRecord The request data to update a dns record.
 * domainId Integer The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
 * recordId Integer The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
 * returns SuccessTextResponse
 **/
exports.updateDnsRecord = function(body,domainId,recordId) {
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

