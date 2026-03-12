
package org.openapitools.client.model


case class MailAttachment (
    /* The filename of the attached file. */
    _filename: String,
    /* The file contents base64 encoded */
    _data: String
)
object MailAttachment {
    def toStringBody(var_filename: Object, var_data: Object) =
        s"""
        | {
        | "filename":$var_filename,"data":$var_data
        | }
        """.stripMargin
}
