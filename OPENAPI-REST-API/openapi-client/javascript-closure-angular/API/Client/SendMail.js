goog.provide('API.Client.SendMail');

/**
 * Details for an Email
 * @record
 */
API.Client.SendMail = function() {}

/**
 * The Contact whom is the primary recipient of this email.
 * @type {!string}
 * @export
 */
API.Client.SendMail.prototype.to;

/**
 * The contact whom is the this email is from.
 * @type {!string}
 * @export
 */
API.Client.SendMail.prototype.from;

/**
 * The subject or title of the email
 * @type {!string}
 * @export
 */
API.Client.SendMail.prototype.subject;

/**
 * The main email contents.
 * @type {!string}
 * @export
 */
API.Client.SendMail.prototype.body;

