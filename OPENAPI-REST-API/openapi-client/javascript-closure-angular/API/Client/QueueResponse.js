goog.provide('API.Client.QueueResponse');

/**
 * Response after sending an action queue to a service.
 * @record
 */
API.Client.QueueResponse = function() {}

/**
 * Response text
 * @type {!string}
 * @export
 */
API.Client.QueueResponse.prototype.text;

/**
 * The Queue ID attached to the action.
 * @type {!number}
 * @export
 */
API.Client.QueueResponse.prototype.queueId;

