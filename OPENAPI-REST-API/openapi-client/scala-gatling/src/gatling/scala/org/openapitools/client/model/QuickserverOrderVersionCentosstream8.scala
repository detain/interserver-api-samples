
package org.openapitools.client.model


case class QuickserverOrderVersionCentosstream8 (
    /* Version details of CentOS Stream 8. */
    _centosstream_8: Option[String]
)
object QuickserverOrderVersionCentosstream8 {
    def toStringBody(var_centosstream_8: Object) =
        s"""
        | {
        | "centosstream_8":$var_centosstream_8
        | }
        """.stripMargin
}
