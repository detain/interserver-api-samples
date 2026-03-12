
package org.openapitools.client.model


case class WebsiteLoginResponse (
    _type: Option[String],
    _location: Option[String]
)
object WebsiteLoginResponse {
    def toStringBody(var_type: Object, var_location: Object) =
        s"""
        | {
        | "type":$var_type,"location":$var_location
        | }
        """.stripMargin
}
