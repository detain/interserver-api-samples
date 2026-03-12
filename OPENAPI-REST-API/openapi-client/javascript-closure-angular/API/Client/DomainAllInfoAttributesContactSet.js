goog.provide('API.Client.DomainAllInfo_attributes_contact_set');

/**
 * @record
 */
API.Client.DomainAllInfoAttributesContactSet = function() {}

/**
 * @type {!API.Client.DomainOwnerContact}
 * @export
 */
API.Client.DomainAllInfoAttributesContactSet.prototype.owner;

/**
 * @type {!API.Client.DomainAdminContact}
 * @export
 */
API.Client.DomainAllInfoAttributesContactSet.prototype.admin;

/**
 * @type {!API.Client.DomainTechContact}
 * @export
 */
API.Client.DomainAllInfoAttributesContactSet.prototype.tech;

