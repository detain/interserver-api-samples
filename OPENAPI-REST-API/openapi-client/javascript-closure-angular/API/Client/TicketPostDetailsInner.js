goog.provide('API.Client.TicketPostDetails_inner');

/**
 * @record
 */
API.Client.TicketPostDetailsInner = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.TicketPostDetailsInner.prototype.postId;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketPostDetailsInner.prototype.date;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketPostDetailsInner.prototype.contents;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketPostDetailsInner.prototype.creator;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketPostDetailsInner.prototype.creatorEmail;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketPostDetailsInner.prototype.creatorName;

/**
 * @type {!number}
 * @export
 */
API.Client.TicketPostDetailsInner.prototype.hasattachments;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketPostDetailsInner.prototype.attachmentDownload;

/** @enum {string} */
API.Client.TicketPostDetailsInner.CreatorEnum = { 
  User: 'User',
  Staff: 'Staff',
}
