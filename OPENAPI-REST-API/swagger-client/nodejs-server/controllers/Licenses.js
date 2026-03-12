'use strict';

var utils = require('../utils/writer.js');
var Licenses = require('../service/LicensesService');

module.exports.addLicense = function addLicense (req, res, next) {
  Licenses.addLicense()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getLicenseInfo = function getLicenseInfo (req, res, next, id) {
  Licenses.getLicenseInfo(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getLicenseInvoices = function getLicenseInvoices (req, res, next, id) {
  Licenses.getLicenseInvoices(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getLicenseList = function getLicenseList (req, res, next) {
  Licenses.getLicenseList()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getLicenseOrderCatTagInfo = function getLicenseOrderCatTagInfo (req, res, next, catTag) {
  Licenses.getLicenseOrderCatTagInfo(catTag)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getLicensesWelcomeEmail = function getLicensesWelcomeEmail (req, res, next, id) {
  Licenses.getLicensesWelcomeEmail(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getNewLicense = function getNewLicense (req, res, next) {
  Licenses.getNewLicense()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.licensesCancel = function licensesCancel (req, res, next, id) {
  Licenses.licensesCancel(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.postLicenseChangeIp = function postLicenseChangeIp (req, res, next, body, id) {
  Licenses.postLicenseChangeIp(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.postLicenseChangeIp = function postLicenseChangeIp (req, res, next, body, id) {
  Licenses.postLicenseChangeIp(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.putLicenses = function putLicenses (req, res, next) {
  Licenses.putLicenses()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateLicenseInfo = function updateLicenseInfo (req, res, next, id) {
  Licenses.updateLicenseInfo(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};
