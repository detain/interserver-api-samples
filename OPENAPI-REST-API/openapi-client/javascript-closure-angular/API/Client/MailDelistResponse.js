goog.provide('API.Client.MailDelistResponse');

/**
 * Blocklist status information for a mail service.
 * @record
 */
API.Client.MailDelistResponse = function() {}

/**
 * Mail service ID.
 * @type {!number}
 * @export
 */
API.Client.MailDelistResponse.prototype.id;

/**
 * Local blocklist entries.
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.MailDelistResponse.prototype.local;

/**
 * MailBaby trap block entries.
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.MailDelistResponse.prototype.mbtrap;

/**
 * Subject-based block entries.
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.MailDelistResponse.prototype.subject;

/**
 * Manually blocked entries.
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.MailDelistResponse.prototype.manual;

