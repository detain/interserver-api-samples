goog.provide('API.Client.MailAttachment');

/**
 * (optional) File attachments to include in the email.  The file contents must be base64
 * @record
 */
API.Client.MailAttachment = function() {}

/**
 * The filename of the attached file.
 * @type {!string}
 * @export
 */
API.Client.MailAttachment.prototype.filename;

/**
 * The file contents base64 encoded
 * @type {!string}
 * @export
 */
API.Client.MailAttachment.prototype.data;

