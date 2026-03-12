'use strict';

var utils = require('../utils/writer.js');
var DNS = require('../service/DNSService');

module.exports.addDnsDomain = function addDnsDomain (req, res, next, body) {
  DNS.addDnsDomain(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addDnsDomain = function addDnsDomain (req, res, next, body) {
  DNS.addDnsDomain(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addDnsRecord = function addDnsRecord (req, res, next, body, id) {
  DNS.addDnsRecord(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addDnsRecord = function addDnsRecord (req, res, next, body, id) {
  DNS.addDnsRecord(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.deleteDnsDomain = function deleteDnsDomain (req, res, next, id) {
  DNS.deleteDnsDomain(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.deleteDnsRecord = function deleteDnsRecord (req, res, next, domainId, recordId) {
  DNS.deleteDnsRecord(domainId, recordId)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getDnsDomain = function getDnsDomain (req, res, next, id) {
  DNS.getDnsDomain(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getDnsList = function getDnsList (req, res, next) {
  DNS.getDnsList()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateDnsRecord = function updateDnsRecord (req, res, next, body, domainId, recordId) {
  DNS.updateDnsRecord(body, domainId, recordId)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateDnsRecord = function updateDnsRecord (req, res, next, body, domainId, recordId) {
  DNS.updateDnsRecord(body, domainId, recordId)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};
