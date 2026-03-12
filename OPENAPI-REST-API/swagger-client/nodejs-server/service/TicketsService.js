'use strict';


/**
 * Create New Ticket
 * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
 *
 * body TicketNew 
 * returns TicketNewResponse
 **/
exports.addNewTicket = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Ticket is created!",
  "ticket_id" : 1759653
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Create New Ticket
 * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
 *
 * body TicketNew 
 * returns TicketNewResponse
 **/
exports.addNewTicket = function(body) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Ticket is created!",
  "ticket_id" : 1759653
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Close Ticket
 * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
 *
 * id String Ticket ID
 * returns CloseTicketResponseSchema
 **/
exports.closeTicket = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "text" : "Ticket is closed!"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Close Ticket
 * Closes the support ticket.
 *
 * id BigDecimal Ticket ID number.
 * returns ViewTicketResponse
 **/
exports.deleteTicketInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "ticket" : {
    "ticketid" : 123456,
    "ticketmaskid" : "UAX-553-25735",
    "department" : "General",
    "status" : "Closed",
    "priority" : "Standard",
    "subject" : "Regarding ssl doubts",
    "created_on" : "19 November, 2025 07:24 pm",
    "updated_on" : "20 November, 2025 05:41 pm"
  },
  "ticket_custom_fields" : {
    "Customer Server Access" : "y",
    "Ip Address" : "68.23.3.5",
    "Root Password" : "fsdnbfsd",
    "Sudo User" : "jjog",
    "Sudo Password" : 123,
    "Port" : 22
  },
  "ticket_posts" : [ {
    "post_id" : 24244,
    "date" : "20 November, 2025 05:41 pm",
    "contents" : "Testing ticket reply from api",
    "creator" : "User",
    "creator_email" : "abc@email.com",
    "creator_name" : "ABC DEF",
    "hasattachments" : 0
  }, {
    "post_id" : 24244,
    "date" : "21 November, 2025 05:41 pm",
    "contents" : "Test 234",
    "creator" : "User",
    "creator_email" : "john@email.com",
    "creator_name" : "John Wick",
    "hasattachments" : 1,
    "attachment_download" : "https:my.interserver.net/download_link?id=xxx"
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
 * Gets Information for creating a new ticket.
 * Returns the form data needed to create a new support ticket, such as available departments and service categories.
 *
 * no response value expected for this operation
 **/
exports.getNewTicket = function() {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Get Ticket Information
 * Returns the full details of a support ticket including its history of replies.
 *
 * id BigDecimal Ticket ID number.
 * returns ViewTicketResponse
 **/
exports.getTicketInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "ticket" : {
    "ticketid" : 123456,
    "ticketmaskid" : "UAX-553-25735",
    "department" : "General",
    "status" : "Closed",
    "priority" : "Standard",
    "subject" : "Regarding ssl doubts",
    "created_on" : "19 November, 2025 07:24 pm",
    "updated_on" : "20 November, 2025 05:41 pm"
  },
  "ticket_custom_fields" : {
    "Customer Server Access" : "y",
    "Ip Address" : "68.23.3.5",
    "Root Password" : "fsdnbfsd",
    "Sudo User" : "jjog",
    "Sudo Password" : 123,
    "Port" : 22
  },
  "ticket_posts" : [ {
    "post_id" : 24244,
    "date" : "20 November, 2025 05:41 pm",
    "contents" : "Testing ticket reply from api",
    "creator" : "User",
    "creator_email" : "abc@email.com",
    "creator_name" : "ABC DEF",
    "hasattachments" : 0
  }, {
    "post_id" : 24244,
    "date" : "21 November, 2025 05:41 pm",
    "contents" : "Test 234",
    "creator" : "User",
    "creator_email" : "john@email.com",
    "creator_name" : "John Wick",
    "hasattachments" : 1,
    "attachment_download" : "https:my.interserver.net/download_link?id=xxx"
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
 * List Support Tickets
 * Returns a paginated list of support tickets on the account. Filter by status and time period.
 *
 * page Integer Page number for paginated results. (optional)
 * period String How far back to show tickets from. Value is in days. (optional)
 * view String The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. (optional)
 * returns Tickets
 **/
exports.getTicketsList = function(page,period,view) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "ima" : "client",
  "custid" : "223513",
  "view" : "Open",
  "currentPage" : 1,
  "limit" : 50,
  "sortcol" : 6,
  "sortdir" : 1,
  "rowsOffset" : 0,
  "tickets" : [ ],
  "pages" : 7,
  "rowsTotal" : 311,
  "inboxCount" : 311,
  "countArray" : {
    "Open" : 3,
    "On Hold" : 3,
    "Closed" : 305
  },
  "viewText" : "Inbox"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Reply To Ticket
 * Adds a reply to an existing support ticket.
 *
 * id BigDecimal Ticket ID number.
 * returns ViewTicketResponse
 **/
exports.postTicketInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "ticket" : {
    "ticketid" : 123456,
    "ticketmaskid" : "UAX-553-25735",
    "department" : "General",
    "status" : "Closed",
    "priority" : "Standard",
    "subject" : "Regarding ssl doubts",
    "created_on" : "19 November, 2025 07:24 pm",
    "updated_on" : "20 November, 2025 05:41 pm"
  },
  "ticket_custom_fields" : {
    "Customer Server Access" : "y",
    "Ip Address" : "68.23.3.5",
    "Root Password" : "fsdnbfsd",
    "Sudo User" : "jjog",
    "Sudo Password" : 123,
    "Port" : 22
  },
  "ticket_posts" : [ {
    "post_id" : 24244,
    "date" : "20 November, 2025 05:41 pm",
    "contents" : "Testing ticket reply from api",
    "creator" : "User",
    "creator_email" : "abc@email.com",
    "creator_name" : "ABC DEF",
    "hasattachments" : 0
  }, {
    "post_id" : 24244,
    "date" : "21 November, 2025 05:41 pm",
    "contents" : "Test 234",
    "creator" : "User",
    "creator_email" : "john@email.com",
    "creator_name" : "John Wick",
    "hasattachments" : 1,
    "attachment_download" : "https:my.interserver.net/download_link?id=xxx"
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
 * Search Support Tickets
 * Searches support tickets by email, subject, or ticket mask ID.
 *
 * returns Tickets
 **/
exports.postTicketsList = function() {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "ima" : "client",
  "custid" : "223513",
  "view" : "Open",
  "currentPage" : 1,
  "limit" : 50,
  "sortcol" : 6,
  "sortdir" : 1,
  "rowsOffset" : 0,
  "tickets" : [ ],
  "pages" : 7,
  "rowsTotal" : 311,
  "inboxCount" : 311,
  "countArray" : {
    "Open" : 3,
    "On Hold" : 3,
    "Closed" : 305
  },
  "viewText" : "Inbox"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Ticket
 * Updates a support ticket's properties such as subject or status.
 *
 * id BigDecimal Ticket ID number.
 * returns ViewTicketResponse
 **/
exports.putTicketInfo = function(id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "ticket" : {
    "ticketid" : 123456,
    "ticketmaskid" : "UAX-553-25735",
    "department" : "General",
    "status" : "Closed",
    "priority" : "Standard",
    "subject" : "Regarding ssl doubts",
    "created_on" : "19 November, 2025 07:24 pm",
    "updated_on" : "20 November, 2025 05:41 pm"
  },
  "ticket_custom_fields" : {
    "Customer Server Access" : "y",
    "Ip Address" : "68.23.3.5",
    "Root Password" : "fsdnbfsd",
    "Sudo User" : "jjog",
    "Sudo Password" : 123,
    "Port" : 22
  },
  "ticket_posts" : [ {
    "post_id" : 24244,
    "date" : "20 November, 2025 05:41 pm",
    "contents" : "Testing ticket reply from api",
    "creator" : "User",
    "creator_email" : "abc@email.com",
    "creator_name" : "ABC DEF",
    "hasattachments" : 0
  }, {
    "post_id" : 24244,
    "date" : "21 November, 2025 05:41 pm",
    "contents" : "Test 234",
    "creator" : "User",
    "creator_email" : "john@email.com",
    "creator_name" : "John Wick",
    "hasattachments" : 1,
    "attachment_download" : "https:my.interserver.net/download_link?id=xxx"
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
 * Reply Ticket
 * Posts a reply to an existing support ticket thread.
 *
 * body ReplyTicketRequest  (optional)
 * id BigDecimal The ticket ID number.
 * returns ReplyTicketResponseSchema
 **/
exports.replyTicket = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "post_id" : 234452
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Reply Ticket
 * Posts a reply to an existing support ticket thread.
 *
 * body ReplyTicketRequest  (optional)
 * id BigDecimal The ticket ID number.
 * returns ReplyTicketResponseSchema
 **/
exports.replyTicket = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "post_id" : 234452
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Ticket
 * Updates a support ticket's subject or body content.
 *
 * body UpdateTicket  (optional)
 * id BigDecimal The ticket ID number.
 * returns UpdateTicketResponseSchema
 **/
exports.updateTicketInfo = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "message" : "Ticket is updated!"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update Ticket
 * Updates a support ticket's subject or body content.
 *
 * body UpdateTicket  (optional)
 * id BigDecimal The ticket ID number.
 * returns UpdateTicketResponseSchema
 **/
exports.updateTicketInfo = function(body,id) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "success" : true,
  "message" : "Ticket is updated!"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}

