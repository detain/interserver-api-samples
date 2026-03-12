goog.provide('API.Client.downloadQsBackup_200_response');

/**
 * @record
 */
API.Client.DownloadQsBackup200Response = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.DownloadQsBackup200Response.prototype.text;

/**
 * A pre-signed download URL valid for 24 hours.
 * @type {!string}
 * @export
 */
API.Client.DownloadQsBackup200Response.prototype.url;

