
package org.openapitools.client.model


case class HomeDetailsModules (
    _domains: Option[HomeDetailsModulesDomains],
    _webhosting: Option[HomeDetailsModulesWebhosting],
    _vps: Option[HomeDetailsModulesVps],
    _licenses: Option[HomeDetailsModulesLicenses],
    _backups: Option[HomeDetailsModulesBackups],
    _servers: Option[HomeDetailsModulesServers],
    _quickservers: Option[HomeDetailsModulesQuickservers]
)
object HomeDetailsModules {
    def toStringBody(var_domains: Object, var_webhosting: Object, var_vps: Object, var_licenses: Object, var_backups: Object, var_servers: Object, var_quickservers: Object) =
        s"""
        | {
        | "domains":$var_domains,"webhosting":$var_webhosting,"vps":$var_vps,"licenses":$var_licenses,"backups":$var_backups,"servers":$var_servers,"quickservers":$var_quickservers
        | }
        """.stripMargin
}
