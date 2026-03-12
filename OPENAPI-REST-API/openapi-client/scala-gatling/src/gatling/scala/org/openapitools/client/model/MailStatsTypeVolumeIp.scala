
package org.openapitools.client.model


case class MailStatsTypeVolumeIp (
    _1_1_1_1: Option[Integer],
    _2_2_2_2: Option[Integer],
    _3_3_3_3: Option[Integer],
    _4_4_4_4: Option[Integer]
)
object MailStatsTypeVolumeIp {
    def toStringBody(var_1_1_1_1: Object, var_2_2_2_2: Object, var_3_3_3_3: Object, var_4_4_4_4: Object) =
        s"""
        | {
        | "1_1_1_1":$var_1_1_1_1,"2_2_2_2":$var_2_2_2_2,"3_3_3_3":$var_3_3_3_3,"4_4_4_4":$var_4_4_4_4
        | }
        """.stripMargin
}
