goog.provide('API.Client.MailDeliverabilityResponse');

/**
 * Deliverability statistics for a mail service.
 * @record
 */
API.Client.MailDeliverabilityResponse = function() {}

/**
 * Delivered and bounced counts.
 * @type {!API.Client.Object}
 * @export
 */
API.Client.MailDeliverabilityResponse.prototype.stat;

/**
 * Bounce percentage.
 * @type {!number}
 * @export
 */
API.Client.MailDeliverabilityResponse.prototype.percent;

/**
 * Detailed deliverability breakdown by sender or domain.
 * @type {!Array<!Array<!string>>}
 * @export
 */
API.Client.MailDeliverabilityResponse.prototype.tableData;

