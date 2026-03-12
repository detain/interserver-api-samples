goog.provide('API.Client.MailServiceType');

/**
 * Service type definition for a mail service, including name, pricing, and category.
 * @record
 */
API.Client.MailServiceType = function() {}

/**
 * The ID of the service type.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesId;

/**
 * The name of the service type.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesName;

/**
 * The cost of the service type.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesCost;

/**
 * The category of the service type.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesCategory;

/**
 * Whether the service type is buyable.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesBuyable;

/**
 * The type of the service type.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesType;

/**
 * Additional field for the service type.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesField1;

/**
 * Additional field for the service type.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesField2;

/**
 * The module of the service type.
 * @type {!string}
 * @export
 */
API.Client.MailServiceType.prototype.servicesModule;

