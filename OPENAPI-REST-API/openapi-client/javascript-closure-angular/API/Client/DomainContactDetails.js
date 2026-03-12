goog.provide('API.Client.DomainContactDetails');

/**
 * Contact details used for domain registrant/admin/technical/billing records.
 * @record
 */
API.Client.DomainContactDetails = function() {}

/**
 * Contact status reported by the registrar.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.status;

/**
 * State or region for the contact address.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.state;

/**
 * Organization name for the contact.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.orgName;

/**
 * Two-letter country code for the contact.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.country;

/**
 * Postal or ZIP code for the contact address.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.postalCode;

/**
 * Email address for the contact.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.email;

/**
 * Fax number for the contact, if available.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.fax;

/**
 * Secondary street address line.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.address2;

/**
 * Tertiary street address line.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.address3;

/**
 * Primary street address line.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.address1;

/**
 * City for the contact address.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.city;

/**
 * Phone number for the contact.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.phone;

/**
 * First name for the contact.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.firstName;

/**
 * Last name for the contact.
 * @type {!string}
 * @export
 */
API.Client.DomainContactDetails.prototype.lastName;

