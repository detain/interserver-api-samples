
package org.openapitools.client.model


case class HomeServices (
    _domains: Option[HomeServicesDomains],
    _webhosting: Option[HomeServicesWebhosting],
    _vps: Option[HomeServicesVps],
    _licenses: Option[HomeServicesLicenses],
    _servers: Option[HomeServicesServers],
    _backups: Option[HomeServicesBackups]
)
object HomeServices {
    def toStringBody(var_domains: Object, var_webhosting: Object, var_vps: Object, var_licenses: Object, var_servers: Object, var_backups: Object) =
        s"""
        | {
        | "domains":$var_domains,"webhosting":$var_webhosting,"vps":$var_vps,"licenses":$var_licenses,"servers":$var_servers,"backups":$var_backups
        | }
        """.stripMargin
}
