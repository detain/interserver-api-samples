goog.provide('API.Client.VpsTemplatesList');

/**
 * A listing of the OS Templates available for use.
 * @record
 */
API.Client.VpsTemplatesList = function() {}

/**
 * A listing of the templates.
 * @type {!Array<!API.Client.VpsTemplateRow>}
 * @export
 */
API.Client.VpsTemplatesList.prototype.templates;

