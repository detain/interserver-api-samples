
package org.openapitools.client.model


case class QuickserverOrderVersion (
    _centosstream_8: Option[QuickserverOrderVersionCentosstream8]
)
object QuickserverOrderVersion {
    def toStringBody(var_centosstream_8: Object) =
        s"""
        | {
        | "centosstream_8":$var_centosstream_8
        | }
        """.stripMargin
}
