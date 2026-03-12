package io.swagger.server.model


/**
 * A table of tutorial links displayed for a mail service.
 *
 * @param title The title of the tutorials table. for example: ''Tutorials''
 * @param rows The rows of the tutorials table.
 */
case class MailTutorialsTable (
  title: Option[String],
  rows: Option[List[MailTutorialsTableRow]]
)

