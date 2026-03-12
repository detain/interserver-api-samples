'use strict';

var utils = require('../utils/writer.js');
var Billing = require('../service/BillingService');

module.exports.addAccountCreditCard = function addAccountCreditCard (req, res, next, body) {
  Billing.addAccountCreditCard(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addAccountCreditCard = function addAccountCreditCard (req, res, next, body) {
  Billing.addAccountCreditCard(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addBillingCreditCard = function addBillingCreditCard (req, res, next, body) {
  Billing.addBillingCreditCard(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addBillingCreditCard = function addBillingCreditCard (req, res, next, body) {
  Billing.addBillingCreditCard(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addBillingPrepay = function addBillingPrepay (req, res, next, body) {
  Billing.addBillingPrepay(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addBillingPrepay = function addBillingPrepay (req, res, next, body) {
  Billing.addBillingPrepay(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.deleteAccountCreditCard = function deleteAccountCreditCard (req, res, next, id) {
  Billing.deleteAccountCreditCard(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.deleteBillingCreditCard = function deleteBillingCreditCard (req, res, next, id) {
  Billing.deleteBillingCreditCard(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.deleteBillingInvoice = function deleteBillingInvoice (req, res, next, id) {
  Billing.deleteBillingInvoice(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.deleteBillingPrepay = function deleteBillingPrepay (req, res, next, id) {
  Billing.deleteBillingPrepay(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getAffiliateBanners = function getAffiliateBanners (req, res, next) {
  Billing.getAffiliateBanners()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getAffiliateRichReport = function getAffiliateRichReport (req, res, next) {
  Billing.getAffiliateRichReport()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getAffiliateSalesGraph = function getAffiliateSalesGraph (req, res, next, days) {
  Billing.getAffiliateSalesGraph(days)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getAffiliateSalesReport = function getAffiliateSalesReport (req, res, next) {
  Billing.getAffiliateSalesReport()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getAffiliateTrafficGraph = function getAffiliateTrafficGraph (req, res, next, days) {
  Billing.getAffiliateTrafficGraph(days)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getAffiliateWebTraffic = function getAffiliateWebTraffic (req, res, next) {
  Billing.getAffiliateWebTraffic()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBillingCart = function getBillingCart (req, res, next) {
  Billing.getBillingCart()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBillingCreditCardVerify = function getBillingCreditCardVerify (req, res, next, id) {
  Billing.getBillingCreditCardVerify(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBillingInvoice = function getBillingInvoice (req, res, next, id) {
  Billing.getBillingInvoice(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBillingInvoices = function getBillingInvoices (req, res, next) {
  Billing.getBillingInvoices()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getBillingPrePays = function getBillingPrePays (req, res, next) {
  Billing.getBillingPrePays()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getInvoices = function getInvoices (req, res, next, searchString, skip, limit) {
  Billing.getInvoices(searchString, skip, limit)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.initiatePayment = function initiatePayment (req, res, next, method, invoices) {
  Billing.initiatePayment(method, invoices)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.postBillingCreditCardVerify = function postBillingCreditCardVerify (req, res, next, body, id) {
  Billing.postBillingCreditCardVerify(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.postBillingCreditCardVerify = function postBillingCreditCardVerify (req, res, next, body, id) {
  Billing.postBillingCreditCardVerify(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateAccountCreditCard = function updateAccountCreditCard (req, res, next, id) {
  Billing.updateAccountCreditCard(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateAffiliateDockSetup = function updateAffiliateDockSetup (req, res, next, body) {
  Billing.updateAffiliateDockSetup(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateAffiliateDockSetup = function updateAffiliateDockSetup (req, res, next, body) {
  Billing.updateAffiliateDockSetup(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateAffiliateLandingPage = function updateAffiliateLandingPage (req, res, next, body) {
  Billing.updateAffiliateLandingPage(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateAffiliateLandingPage = function updateAffiliateLandingPage (req, res, next, body) {
  Billing.updateAffiliateLandingPage(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateAffiliatePaymentSetup = function updateAffiliatePaymentSetup (req, res, next, body) {
  Billing.updateAffiliatePaymentSetup(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateAffiliatePaymentSetup = function updateAffiliatePaymentSetup (req, res, next, body) {
  Billing.updateAffiliatePaymentSetup(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateBillingCreditCard = function updateBillingCreditCard (req, res, next, id) {
  Billing.updateBillingCreditCard(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateBillingPaymentMethod = function updateBillingPaymentMethod (req, res, next, body) {
  Billing.updateBillingPaymentMethod(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateBillingPaymentMethod = function updateBillingPaymentMethod (req, res, next, body) {
  Billing.updateBillingPaymentMethod(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};
