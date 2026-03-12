goog.provide('API.Client.DenyRuleRecord');

/**
 * The data for a email deny rule record.
 * @record
 */
API.Client.DenyRuleRecord = function() {}

/**
 * The type of deny rule.
 * @type {!string}
 * @export
 */
API.Client.DenyRuleRecord.prototype.type;

/**
 * The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
 * @type {!string}
 * @export
 */
API.Client.DenyRuleRecord.prototype.data;

/**
 * The deny rule Id number.
 * @type {!number}
 * @export
 */
API.Client.DenyRuleRecord.prototype.id;

/**
 * the date the rule was created.
 * @type {!string}
 * @export
 */
API.Client.DenyRuleRecord.prototype.created;

/**
 * Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
 * @type {!string}
 * @export
 */
API.Client.DenyRuleRecord.prototype.user;

/** @enum {string} */
API.Client.DenyRuleRecord.TypeEnum = { 
  domain: 'domain',
  email: 'email',
  startswith: 'startswith',
  destination: 'destination',
}
