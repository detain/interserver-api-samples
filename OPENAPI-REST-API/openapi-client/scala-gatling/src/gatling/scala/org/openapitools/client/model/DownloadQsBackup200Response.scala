
package org.openapitools.client.model


case class DownloadQsBackup200Response (
    _text: Option[String],
    /* A pre-signed download URL valid for 24 hours. */
    _url: Option[String]
)
object DownloadQsBackup200Response {
    def toStringBody(var_text: Object, var_url: Object) =
        s"""
        | {
        | "text":$var_text,"url":$var_url
        | }
        """.stripMargin
}
