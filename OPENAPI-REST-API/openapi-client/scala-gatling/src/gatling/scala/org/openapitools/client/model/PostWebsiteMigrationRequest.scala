
package org.openapitools.client.model


case class PostWebsiteMigrationRequest (
    /* URL of the customer's current hosting portal. */
    _custPortal: Option[String],
    /* Registered email address at the current host. */
    _regEmail: Option[String],
    /* Password for the current hosting account. */
    _password: Option[String],
    /* URL of the current control panel. */
    _ctrlPanel: Option[String],
    /* FTP username at the current host. */
    _ftpUsername: Option[String],
    /* FTP password at the current host. */
    _ftpPassword: Option[String],
    /* Information about site traffic during migration. */
    _siteBusyMig: Option[String],
    /* Special requirements for the migration. */
    _splReqMig: Option[String],
    /* Whether domain registration assistance is needed. */
    _domainReg: Option[String],
    /* Data migration timing preference. */
    _dataMig: Option[String],
    /* Domain registrar portal URL. */
    _domainRegPortal: Option[String],
    /* Email for the domain registrar account. */
    _domainRegEmail: Option[String],
    /* Password for the domain registrar account. */
    _domainRegPassword: Option[String]
)
object PostWebsiteMigrationRequest {
    def toStringBody(var_custPortal: Object, var_regEmail: Object, var_password: Object, var_ctrlPanel: Object, var_ftpUsername: Object, var_ftpPassword: Object, var_siteBusyMig: Object, var_splReqMig: Object, var_domainReg: Object, var_dataMig: Object, var_domainRegPortal: Object, var_domainRegEmail: Object, var_domainRegPassword: Object) =
        s"""
        | {
        | "custPortal":$var_custPortal,"regEmail":$var_regEmail,"password":$var_password,"ctrlPanel":$var_ctrlPanel,"ftpUsername":$var_ftpUsername,"ftpPassword":$var_ftpPassword,"siteBusyMig":$var_siteBusyMig,"splReqMig":$var_splReqMig,"domainReg":$var_domainReg,"dataMig":$var_dataMig,"domainRegPortal":$var_domainRegPortal,"domainRegEmail":$var_domainRegEmail,"domainRegPassword":$var_domainRegPassword
        | }
        """.stripMargin
}
