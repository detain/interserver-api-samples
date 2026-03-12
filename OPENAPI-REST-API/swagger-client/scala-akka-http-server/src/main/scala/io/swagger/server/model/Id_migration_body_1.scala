package io.swagger.server.model


/**
 * @param custPortal 
 * @param regEmail 
 * @param password 
 * @param ctrlPanel 
 * @param ftpUsername 
 * @param ftpPassword 
 * @param siteBusyMig 
 * @param splReqMig 
 * @param domainReg 
 * @param dataMig 
 * @param domainRegPortal 
 * @param domainRegEmail 
 * @param domainRegPassword 
 */
case class Id_migration_body_1 (
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

