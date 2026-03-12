goog.provide('API.Client.MailOrder');

/**
 * A mail order record
 * @record
 */
API.Client.MailOrder = function() {}

/**
 * The ID of the order.
 * @type {!number}
 * @export
 */
API.Client.MailOrder.prototype.id;

/**
 * The order status.
 * @type {!string}
 * @export
 */
API.Client.MailOrder.prototype.status;

/**
 * The username to use for this order.
 * @type {!string}
 * @export
 */
API.Client.MailOrder.prototype.username;

/**
 * Optional order comment.
 * @type {!string}
 * @export
 */
API.Client.MailOrder.prototype.comment;

