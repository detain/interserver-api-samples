goog.provide('API.Client.SendMailAdv');

/**
 * Details for an Email
 * @record
 */
API.Client.SendMailAdv = function() {}

/**
 * The subject or title of the email
 * @type {!string}
 * @export
 */
API.Client.SendMailAdv.prototype.subject;

/**
 * The main email contents.
 * @type {!string}
 * @export
 */
API.Client.SendMailAdv.prototype.body;

/**
 * @type {!API.Client.EmailAddressName}
 * @export
 */
API.Client.SendMailAdv.prototype.from;

/**
 * A list of destionation email addresses to send this to
 * @type {!Array<!API.Client.EmailAddressName>}
 * @export
 */
API.Client.SendMailAdv.prototype.to;

/**
 * (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
 * @type {!Array<!API.Client.EmailAddressName>}
 * @export
 */
API.Client.SendMailAdv.prototype.replyto;

/**
 * (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
 * @type {!Array<!API.Client.EmailAddressName>}
 * @export
 */
API.Client.SendMailAdv.prototype.cc;

/**
 * (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
 * @type {!Array<!API.Client.EmailAddressName>}
 * @export
 */
API.Client.SendMailAdv.prototype.bcc;

/**
 * (optional) File attachments to include in the email.  The file contents must be base64 encoded!
 * @type {!Array<!API.Client.MailAttachment>}
 * @export
 */
API.Client.SendMailAdv.prototype.attachments;

/**
 * (optional)  ID of the Mail order within our system to use as the Mail Account.
 * @type {!number}
 * @export
 */
API.Client.SendMailAdv.prototype.id;

