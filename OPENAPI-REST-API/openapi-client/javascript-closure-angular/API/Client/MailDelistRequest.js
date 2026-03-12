goog.provide('API.Client.MailDelistRequest');

/**
 * Payload for removing a sender from mail blocklists.
 * @record
 */
API.Client.MailDelistRequest = function() {}

/**
 * Email address to delist.
 * @type {!string}
 * @export
 */
API.Client.MailDelistRequest.prototype.unblock;

