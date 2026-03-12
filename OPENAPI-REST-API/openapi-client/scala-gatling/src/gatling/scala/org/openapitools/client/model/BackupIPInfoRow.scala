
package org.openapitools.client.model


case class BackupIPInfoRow (
    /* Description of the IP information. */
    _desc: Option[String],
    /* Value of the IP information. */
    _value: Option[String]
)
object BackupIPInfoRow {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}
