goog.provide('API.Client.QuickserverRow');

/**
 * A result row from the `Quickservers` `GET` request.
 * @record
 */
API.Client.QuickserverRow = function() {}

/**
 * The id of the qs.
 * @type {!string}
 * @export
 */
API.Client.QuickserverRow.prototype.qsId;

/**
 * The name of the qs.
 * @type {!string}
 * @export
 */
API.Client.QuickserverRow.prototype.qsName;

/**
 * The cost of the qs.
 * @type {!string}
 * @export
 */
API.Client.QuickserverRow.prototype.cost;

/**
 * The hostname of the qs.
 * @type {!string}
 * @export
 */
API.Client.QuickserverRow.prototype.qsHostname;

/**
 * The status of the qs.
 * @type {!string}
 * @export
 */
API.Client.QuickserverRow.prototype.qsStatus;

/**
 * The comment of the qs.
 * @type {!string}
 * @export
 */
API.Client.QuickserverRow.prototype.qsComment;

