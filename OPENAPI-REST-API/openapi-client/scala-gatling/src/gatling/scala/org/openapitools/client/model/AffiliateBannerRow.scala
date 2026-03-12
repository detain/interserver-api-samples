
package org.openapitools.client.model


case class AffiliateBannerRow (
    _image: Option[String],
    _width: Option[String],
    _height: Option[String]
)
object AffiliateBannerRow {
    def toStringBody(var_image: Object, var_width: Object, var_height: Object) =
        s"""
        | {
        | "image":$var_image,"width":$var_width,"height":$var_height
        | }
        """.stripMargin
}
