goog.provide('API.Client.MailLogEntry');

/**
 * An email record
 * @record
 */
API.Client.MailLogEntry = function() {}

/**
 * internal db id
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.id;

/**
 * mail id
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.id;

/**
 * from address
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.from;

/**
 * to address
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.to;

/**
 * email subject
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.subject;

/**
 * creation date
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.created;

/**
 * creation timestamp
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.time;

/**
 * user account
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.user;

/**
 * transaction type
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.transtype;

/**
 * origin ip
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.origin;

/**
 * interface name
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype._interface;

/**
 * sending zone
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.sendingZone;

/**
 * email body size in bytes
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.bodySize;

/**
 * index of email in the to adderess list
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.seq;

/**
 * to address this email is being sent to
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.recipient;

/**
 * to address domain
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.domain;

/**
 * locked status
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.locked;

/**
 * lock timestamp
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.lockTime;

/**
 * assigned server
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.assigned;

/**
 * queued timestamp
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.queued;

/**
 * mx hostname
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.mxHostname;

/**
 * mail delivery response
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.response;

/**
 * message id
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.messageId;

