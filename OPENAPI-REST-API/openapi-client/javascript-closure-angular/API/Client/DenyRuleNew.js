goog.provide('API.Client.DenyRuleNew');

/**
 * The data for a email deny rule record.
 * @record
 */
API.Client.DenyRuleNew = function() {}

/**
 * The type of deny rule.
 * @type {!string}
 * @export
 */
API.Client.DenyRuleNew.prototype.type;

/**
 * The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
 * @type {!string}
 * @export
 */
API.Client.DenyRuleNew.prototype.data;

/**
 * Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
 * @type {!string}
 * @export
 */
API.Client.DenyRuleNew.prototype.user;

/** @enum {string} */
API.Client.DenyRuleNew.TypeEnum = { 
  domain: 'domain',
  email: 'email',
  startswith: 'startswith',
  destination: 'destination',
}
