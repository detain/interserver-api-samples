goog.provide('API.Client.MailStatsType');

/**
 * Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 * @record
 */
API.Client.MailStatsType = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.MailStatsType.prototype.time;

/**
 * @type {!number}
 * @export
 */
API.Client.MailStatsType.prototype.usage;

/**
 * @type {!string}
 * @export
 */
API.Client.MailStatsType.prototype.currency;

/**
 * @type {!string}
 * @export
 */
API.Client.MailStatsType.prototype.currencySymbol;

/**
 * @type {!number}
 * @export
 */
API.Client.MailStatsType.prototype.cost;

/**
 * @type {!number}
 * @export
 */
API.Client.MailStatsType.prototype.received;

/**
 * @type {!number}
 * @export
 */
API.Client.MailStatsType.prototype.sent;

/**
 * @type {!API.Client.MailStatsType_volume}
 * @export
 */
API.Client.MailStatsType.prototype.volume;

/** @enum {string} */
API.Client.MailStatsType.TimeEnum = { 
  all: 'all',
  billing: 'billing',
  month: 'month',
  7d: '7d',
  24h: '24h',
  today: 'today',
  1h: '1h',
}
