
package org.openapitools.client.model


case class DenyRuleRecord (
    /* The type of deny rule. */
    _type: String,
    /* The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com. */
    _data: String,
    /* The deny rule Id number. */
    _id: Integer,
    /* the date the rule was created. */
    _created: String,
    /* Mail account username that will be tied to this rule.  If not specified the first active mail order will be used. */
    _user: Option[String]
)
object DenyRuleRecord {
    def toStringBody(var_type: Object, var_data: Object, var_id: Object, var_created: Object, var_user: Object) =
        s"""
        | {
        | "type":$var_type,"data":$var_data,"id":$var_id,"created":$var_created,"user":$var_user
        | }
        """.stripMargin
}
