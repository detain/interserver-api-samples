goog.provide('API.Client.ServerRow');

/**
 * A result row from the `Servers` `GET` request.
 * @record
 */
API.Client.ServerRow = function() {}

/**
 * The id of the server.
 * @type {!string}
 * @export
 */
API.Client.ServerRow.prototype.serverId;

/**
 * The account lid of the server.
 * @type {!string}
 * @export
 */
API.Client.ServerRow.prototype.accountLid;

/**
 * The hostname of the server.
 * @type {!string}
 * @export
 */
API.Client.ServerRow.prototype.serverHostname;

/**
 * The status of the server.
 * @type {!string}
 * @export
 */
API.Client.ServerRow.prototype.serverStatus;

