
package org.openapitools.client.model


case class MailStatsTypeVolume (
    _to: Option[MailStatsTypeVolumeTo],
    _from: Option[MailStatsTypeVolumeFrom],
    _ip: Option[MailStatsTypeVolumeIp]
)
object MailStatsTypeVolume {
    def toStringBody(var_to: Object, var_from: Object, var_ip: Object) =
        s"""
        | {
        | "to":$var_to,"from":$var_from,"ip":$var_ip
        | }
        """.stripMargin
}
