
package org.openapitools.client.model


case class PostWebsiteBuyIp200Response (
    _message: Option[String],
    _success: Option[Boolean]
)
object PostWebsiteBuyIp200Response {
    def toStringBody(var_message: Object, var_success: Object) =
        s"""
        | {
        | "message":$var_message,"success":$var_success
        | }
        """.stripMargin
}
