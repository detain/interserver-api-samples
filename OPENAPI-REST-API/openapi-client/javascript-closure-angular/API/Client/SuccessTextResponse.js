goog.provide('API.Client.SuccessTextResponse');

/**
 * Response with success flag and text description.
 * @record
 */
API.Client.SuccessTextResponse = function() {}

/**
 * Indicates whether or not the command was successful or not.
 * @type {!boolean}
 * @export
 */
API.Client.SuccessTextResponse.prototype.success;

/**
 * Text associated with the response.
 * @type {!string}
 * @export
 */
API.Client.SuccessTextResponse.prototype.text;

/**
 * Optional Action relating to the response.
 * @type {!string}
 * @export
 */
API.Client.SuccessTextResponse.prototype.action;

