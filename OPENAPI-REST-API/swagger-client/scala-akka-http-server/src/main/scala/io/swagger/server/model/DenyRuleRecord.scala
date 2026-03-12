package io.swagger.server.model


/**
 * = DenyRuleRecord =
 *
 * The data for a email deny rule record.
 *
 * @param id The deny rule Id number. for example: ''41124''
 * @param created the date the rule was created. for example: ''2022-03-22 19:16:35''
 * @param user Mail account username that will be tied to this rule.  If not specified the first active mail order will be used. for example: ''mb20682''
 * @param `type` The type of deny rule. for example: ''email''
 * @param data The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com. for example: ''domeinwo@server.guesshost.net''
 */
case class DenyRuleRecord (
  id: Int,
  created: String,
  user: Option[String],
  `type`: String,
  data: String
)

