goog.provide('API.Client.ServerOrderFieldLabel');

/**
 * A display label for a field in the server order form.
 * @record
 */
API.Client.ServerOrderFieldLabel = function() {}

/**
 * Name of the field label.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderFieldLabel.prototype.name;

/**
 * Active status of the field label.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderFieldLabel.prototype.active;

