goog.provide('API.Client.AccountInfoPost');

/**
 * Request to update account information.
 * @record
 */
API.Client.AccountInfoPost = function() {}

/**
 * Your name.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.name;

/**
 * Your address.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.address;

/**
 * Your city.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.city;

/**
 * Your state.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.state;

/**
 * Your ZIP code.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.zip;

/**
 * Your country.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.country;

/**
 * Your phone number.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.phone;

/**
 * Your company name.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.company;

/**
 * Additional address information.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.address2;

/**
 * Your preferred locale.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.locale;

/**
 * Your email for invoice notifications.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.emailInvoices;

/**
 * Your email for abuse notifications.
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.emailAbuse;

/**
 * Set to `true` to disable account resets, or `false` to enable them.
 * @type {!boolean}
 * @export
 */
API.Client.AccountInfoPost.prototype.disableReset;

/**
 * Set to `true` to disable server reinstalls, or `false` to enable them.
 * @type {!boolean}
 * @export
 */
API.Client.AccountInfoPost.prototype.disableReinstall;

/**
 * Set to `true` to disable server notifications, or `false` to enable them.
 * @type {!boolean}
 * @export
 */
API.Client.AccountInfoPost.prototype.disableServerNotifications;

/**
 * Set to `true` to disable email notifications, or `false` to enable them.
 * @type {!boolean}
 * @export
 */
API.Client.AccountInfoPost.prototype.disableEmailNotifications;

/**
 * Your GST identification number (if applicable).
 * @type {!string}
 * @export
 */
API.Client.AccountInfoPost.prototype.gstin;

