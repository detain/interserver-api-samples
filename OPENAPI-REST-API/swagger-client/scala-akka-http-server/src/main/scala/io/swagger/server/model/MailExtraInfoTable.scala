package io.swagger.server.model


/**
 * A supplementary information table for a mail service (e.g., connection details).
 *
 * @param title The title of the extra info table. for example: ''Connection Information''
 * @param rows The rows of the extra info table.
 */
case class MailExtraInfoTable (
  title: Option[String],
  rows: Option[List[MailExtraInfoTableRow]]
)

