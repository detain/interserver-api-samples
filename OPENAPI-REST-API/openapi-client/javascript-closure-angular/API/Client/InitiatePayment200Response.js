goog.provide('API.Client.initiatePayment_200_response');

/**
 * @record
 */
API.Client.InitiatePayment200Response = function() {}

/**
 * The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
 * @type {!string}
 * @export
 */
API.Client.InitiatePayment200Response.prototype.type;

/**
 * URL to redirect the user to for payment (when type is `redirect`).
 * @type {!string}
 * @export
 */
API.Client.InitiatePayment200Response.prototype.redirect;

/**
 * Form action URL (when type is `submit`).
 * @type {!string}
 * @export
 */
API.Client.InitiatePayment200Response.prototype.action;

/**
 * HTTP method for the form submission (when type is `submit`).
 * @type {!string}
 * @export
 */
API.Client.InitiatePayment200Response.prototype.method;

/**
 * Form field name-value pairs to submit (when type is `submit`).
 * @type {!API.Client.Object}
 * @export
 */
API.Client.InitiatePayment200Response.prototype.items;

/**
 * Status or result text.
 * @type {!string}
 * @export
 */
API.Client.InitiatePayment200Response.prototype.text;

/** @enum {string} */
API.Client.InitiatePayment200Response.TypeEnum = { 
  redirect: 'redirect',
  submit: 'submit',
  single: 'single',
}
