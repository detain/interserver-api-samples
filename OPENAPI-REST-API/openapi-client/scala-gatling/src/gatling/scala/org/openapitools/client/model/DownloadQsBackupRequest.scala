
package org.openapitools.client.model


case class DownloadQsBackupRequest (
    /* The backup filename to download. */
    _file: String
)
object DownloadQsBackupRequest {
    def toStringBody(var_file: Object) =
        s"""
        | {
        | "file":$var_file
        | }
        """.stripMargin
}
