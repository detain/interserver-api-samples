package io.swagger.server.model


/**
 * @param custPortal URL of the customer's current hosting portal.
 * @param regEmail Registered email address at the current host.
 * @param password Password for the current hosting account.
 * @param ctrlPanel URL of the current control panel.
 * @param ftpUsername FTP username at the current host.
 * @param ftpPassword FTP password at the current host.
 * @param siteBusyMig Information about site traffic during migration.
 * @param splReqMig Special requirements for the migration.
 * @param domainReg Whether domain registration assistance is needed.
 * @param dataMig Data migration timing preference.
 * @param domainRegPortal Domain registrar portal URL.
 * @param domainRegEmail Email for the domain registrar account.
 * @param domainRegPassword Password for the domain registrar account.
 */
case class Id_migration_body (
  custPortal: Option[String],
  regEmail: Option[String],
  password: Option[String],
  ctrlPanel: Option[String],
  ftpUsername: Option[String],
  ftpPassword: Option[String],
  siteBusyMig: Option[String],
  splReqMig: Option[String],
  domainReg: Option[String],
  dataMig: Option[String],
  domainRegPortal: Option[String],
  domainRegEmail: Option[String],
  domainRegPassword: Option[String]
)

