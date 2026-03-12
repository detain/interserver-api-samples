package io.swagger.server.model


/**
 * Additional information tables for the mail service.
 *
 * @param mail 
 * @param tutorials 
 */
case class MailSchema_extraInfoTables (
  mail: Option[MailExtraInfoTable],
  tutorials: Option[MailTutorialsTable]
)

