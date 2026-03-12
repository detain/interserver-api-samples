goog.provide('API.Client.MailAlertRequest');

/**
 * Payload for creating a mail alert.
 * @record
 */
API.Client.MailAlertRequest = function() {}

/**
 * Alert type identifier.
 * @type {!string}
 * @export
 */
API.Client.MailAlertRequest.prototype.type;

/**
 * Alert value or threshold.
 * @type {!string}
 * @export
 */
API.Client.MailAlertRequest.prototype.value;

/**
 * Email address to notify.
 * @type {!string}
 * @export
 */
API.Client.MailAlertRequest.prototype.to;

/**
 * Whether the alert is enabled.
 * @type {!string}
 * @export
 */
API.Client.MailAlertRequest.prototype.enabled;

