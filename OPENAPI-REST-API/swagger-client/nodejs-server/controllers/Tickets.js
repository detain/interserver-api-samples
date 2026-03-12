'use strict';

var utils = require('../utils/writer.js');
var Tickets = require('../service/TicketsService');

module.exports.addNewTicket = function addNewTicket (req, res, next, body) {
  Tickets.addNewTicket(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.addNewTicket = function addNewTicket (req, res, next, body) {
  Tickets.addNewTicket(body)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.closeTicket = function closeTicket (req, res, next, id) {
  Tickets.closeTicket(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.deleteTicketInfo = function deleteTicketInfo (req, res, next, id) {
  Tickets.deleteTicketInfo(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getNewTicket = function getNewTicket (req, res, next) {
  Tickets.getNewTicket()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getTicketInfo = function getTicketInfo (req, res, next, id) {
  Tickets.getTicketInfo(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getTicketsList = function getTicketsList (req, res, next, page, period, view) {
  Tickets.getTicketsList(page, period, view)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.postTicketInfo = function postTicketInfo (req, res, next, id) {
  Tickets.postTicketInfo(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.postTicketsList = function postTicketsList (req, res, next) {
  Tickets.postTicketsList()
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.putTicketInfo = function putTicketInfo (req, res, next, id) {
  Tickets.putTicketInfo(id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.replyTicket = function replyTicket (req, res, next, body, id) {
  Tickets.replyTicket(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.replyTicket = function replyTicket (req, res, next, body, id) {
  Tickets.replyTicket(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateTicketInfo = function updateTicketInfo (req, res, next, body, id) {
  Tickets.updateTicketInfo(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateTicketInfo = function updateTicketInfo (req, res, next, body, id) {
  Tickets.updateTicketInfo(body, id)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};
