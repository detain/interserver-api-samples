
package org.openapitools.client.model


case class BackupExtraInfoTables (
    _ip_info: Option[BackupIPInfo]
)
object BackupExtraInfoTables {
    def toStringBody(var_ip_info: Object) =
        s"""
        | {
        | "ip_info":$var_ip_info
        | }
        """.stripMargin
}
