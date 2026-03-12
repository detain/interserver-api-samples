package io.swagger.server.model


/**
 * A single row in the mail service supplementary information table.
 *
 * @param desc The description of the extra info table row. for example: ''SMTP Server''
 * @param value The value of the extra info table row. for example: ''relay.mailbaby.net''
 */
case class MailExtraInfoTableRow (
  desc: Option[String],
  value: Option[String]
)

