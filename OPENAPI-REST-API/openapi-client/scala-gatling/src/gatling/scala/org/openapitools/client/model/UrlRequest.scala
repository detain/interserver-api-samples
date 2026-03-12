
package org.openapitools.client.model


case class UrlRequest (
    _url: Option[String]
)
object UrlRequest {
    def toStringBody(var_url: Object) =
        s"""
        | {
        | "url":$var_url
        | }
        """.stripMargin
}
