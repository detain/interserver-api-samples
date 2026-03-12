goog.provide('API.Client.MailClientLink');

/**
 * A navigation link for mail service actions in the client portal.
 * @record
 */
API.Client.MailClientLink = function() {}

/**
 * The label of the client link.
 * @type {!string}
 * @export
 */
API.Client.MailClientLink.prototype.label;

/**
 * The link URL of the client link.
 * @type {!string}
 * @export
 */
API.Client.MailClientLink.prototype.link;

/**
 * The icon class of the client link.
 * @type {!string}
 * @export
 */
API.Client.MailClientLink.prototype.icon;

/**
 * The text for the icon of the client link.
 * @type {!string}
 * @export
 */
API.Client.MailClientLink.prototype.iconText;

/**
 * Help text for the client link.
 * @type {!string}
 * @export
 */
API.Client.MailClientLink.prototype.helpText;

/**
 * Additional attributes for the client link.
 * @type {!string}
 * @export
 */
API.Client.MailClientLink.prototype.otherAttr;

