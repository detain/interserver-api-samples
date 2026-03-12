goog.provide('API.Client.DomainDnssecRequest');

/**
 * Request payload for adding DNSSEC DS records to a domain.
 * @record
 */
API.Client.DomainDnssecRequest = function() {}

/**
 * List of DNSSEC algorithm IDs for each record.
 * @type {!Array<!number>}
 * @export
 */
API.Client.DomainDnssecRequest.prototype.algorithm;

/**
 * List of digest type IDs for each record.
 * @type {!Array<!number>}
 * @export
 */
API.Client.DomainDnssecRequest.prototype.digestType;

/**
 * List of hex digests for each record.
 * @type {!Array<!string>}
 * @export
 */
API.Client.DomainDnssecRequest.prototype.digest;

/**
 * List of key tag values corresponding to each record.
 * @type {!Array<!number>}
 * @export
 */
API.Client.DomainDnssecRequest.prototype.keyTag;

