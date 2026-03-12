'use strict';

var utils = require('../utils/writer.js');
var Backups = require('../service/BackupsService');

module.exports.addBackup = function addBackup (req, res, next, body) {
  Backups.addBackup(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addBackup = function addBackup (req, res, next, body) {
  Backups.addBackup(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.cancelBackup = function cancelBackup (req, res, next, id) {
  Backups.cancelBackup(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBackupInfo = function getBackupInfo (req, res, next, id) {
  Backups.getBackupInfo(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBackupInvoices = function getBackupInvoices (req, res, next, id) {
  Backups.getBackupInvoices(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBackupLogin = function getBackupLogin (req, res, next, id) {
  Backups.getBackupLogin(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBackupsList = function getBackupsList (req, res, next) {
  Backups.getBackupsList()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBackupsWelcomeEmail = function getBackupsWelcomeEmail (req, res, next, id) {
  Backups.getBackupsWelcomeEmail(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getNewBackup = function getNewBackup (req, res, next) {
  Backups.getNewBackup()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateBackupInfo = function updateBackupInfo (req, res, next, id) {
  Backups.updateBackupInfo(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.validateBackupOrder = function validateBackupOrder (req, res, next, body) {
  Backups.validateBackupOrder(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.validateBackupOrder = function validateBackupOrder (req, res, next, body) {
  Backups.validateBackupOrder(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};
