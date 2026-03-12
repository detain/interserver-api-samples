goog.provide('API.Client.DomainRow');

/**
 * A result row from the `Domains` `GET` request.
 * @record
 */
API.Client.DomainRow = function() {}

/**
 * The ID number of the domain in our billing system.
 * @type {!string}
 * @export
 */
API.Client.DomainRow.prototype.domainId;

/**
 * The hostname of the domain.
 * @type {!string}
 * @export
 */
API.Client.DomainRow.prototype.domainHostname;

/**
 * The expiration date of the domain.
 * @type {!string}
 * @export
 */
API.Client.DomainRow.prototype.domainExpireDate;

/**
 * The cost of the domain.
 * @type {!string}
 * @export
 */
API.Client.DomainRow.prototype.cost;

/**
 * The billing / registration status of the domain.
 * @type {!string}
 * @export
 */
API.Client.DomainRow.prototype.domainStatus;

