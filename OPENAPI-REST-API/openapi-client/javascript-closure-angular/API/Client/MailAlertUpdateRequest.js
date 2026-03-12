goog.provide('API.Client.MailAlertUpdateRequest');

/**
 * Payload for updating an existing mail alert.
 * @record
 */
API.Client.MailAlertUpdateRequest = function() {}

/**
 * Alert ID to update.
 * @type {!number}
 * @export
 */
API.Client.MailAlertUpdateRequest.prototype.alertId;

/**
 * Alert type identifier.
 * @type {!string}
 * @export
 */
API.Client.MailAlertUpdateRequest.prototype.type;

/**
 * Alert value or threshold.
 * @type {!string}
 * @export
 */
API.Client.MailAlertUpdateRequest.prototype.value;

/**
 * Email address to notify.
 * @type {!string}
 * @export
 */
API.Client.MailAlertUpdateRequest.prototype.to;

/**
 * Whether the alert is enabled.
 * @type {!string}
 * @export
 */
API.Client.MailAlertUpdateRequest.prototype.enabled;

