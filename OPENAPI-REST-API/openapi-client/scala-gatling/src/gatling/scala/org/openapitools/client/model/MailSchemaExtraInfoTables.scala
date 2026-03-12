
package org.openapitools.client.model


case class MailSchemaExtraInfoTables (
    _mail: Option[MailExtraInfoTable],
    _tutorials: Option[MailTutorialsTable]
)
object MailSchemaExtraInfoTables {
    def toStringBody(var_mail: Object, var_tutorials: Object) =
        s"""
        | {
        | "mail":$var_mail,"tutorials":$var_tutorials
        | }
        """.stripMargin
}
