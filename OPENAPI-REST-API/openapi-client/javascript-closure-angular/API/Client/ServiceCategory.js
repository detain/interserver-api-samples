goog.provide('API.Client.ServiceCategory');

/**
 * A Category of Services.  This is the broadest grouping within a module.
 * @record
 */
API.Client.ServiceCategory = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.ServiceCategory.prototype.categoryId;

/**
 * @type {!string}
 * @export
 */
API.Client.ServiceCategory.prototype.categoryName;

/**
 * @type {!string}
 * @export
 */
API.Client.ServiceCategory.prototype.categoryTag;

/**
 * @type {!string}
 * @export
 */
API.Client.ServiceCategory.prototype.categoryModule;

