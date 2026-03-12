goog.provide('API.Client.postWebsiteMigration_200_response');

/**
 * @record
 */
API.Client.PostWebsiteMigration200Response = function() {}

/**
 * Confirmation message.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigration200Response.prototype.text;

/**
 * The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
 * @type {!number}
 * @export
 */
API.Client.PostWebsiteMigration200Response.prototype.ticket;

