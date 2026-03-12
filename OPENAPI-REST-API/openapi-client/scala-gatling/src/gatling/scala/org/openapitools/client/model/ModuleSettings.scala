
package org.openapitools.client.model


case class ModuleSettings (
    _SERVICE_ID_OFFSET: Integer,
    _USE_REPEAT_INVOICE: Boolean,
    _USE_PACKAGES: Boolean,
    _BILLING_DAYS_OFFSET: Integer,
    _IMGNAME: String,
    _REPEAT_BILLING_METHOD: Integer,
    _DELETE_PENDING_DAYS: Integer,
    _SUSPEND_DAYS: Integer,
    _SUSPEND_WARNING_DAYS: Integer,
    _TITLE: String,
    _MENUNAME: String,
    _EMAIL_FROM: String,
    _TBLNAME: String,
    _TABLE: String,
    _TITLE_FIELD: String,
    _PREFIX: String,
    _TITLE_FIELD2: Option[String],
    _TITLE_FIELD3: Option[String]
)
object ModuleSettings {
    def toStringBody(var_SERVICE_ID_OFFSET: Object, var_USE_REPEAT_INVOICE: Object, var_USE_PACKAGES: Object, var_BILLING_DAYS_OFFSET: Object, var_IMGNAME: Object, var_REPEAT_BILLING_METHOD: Object, var_DELETE_PENDING_DAYS: Object, var_SUSPEND_DAYS: Object, var_SUSPEND_WARNING_DAYS: Object, var_TITLE: Object, var_MENUNAME: Object, var_EMAIL_FROM: Object, var_TBLNAME: Object, var_TABLE: Object, var_TITLE_FIELD: Object, var_PREFIX: Object, var_TITLE_FIELD2: Object, var_TITLE_FIELD3: Object) =
        s"""
        | {
        | "SERVICE_ID_OFFSET":$var_SERVICE_ID_OFFSET,"USE_REPEAT_INVOICE":$var_USE_REPEAT_INVOICE,"USE_PACKAGES":$var_USE_PACKAGES,"BILLING_DAYS_OFFSET":$var_BILLING_DAYS_OFFSET,"IMGNAME":$var_IMGNAME,"REPEAT_BILLING_METHOD":$var_REPEAT_BILLING_METHOD,"DELETE_PENDING_DAYS":$var_DELETE_PENDING_DAYS,"SUSPEND_DAYS":$var_SUSPEND_DAYS,"SUSPEND_WARNING_DAYS":$var_SUSPEND_WARNING_DAYS,"TITLE":$var_TITLE,"MENUNAME":$var_MENUNAME,"EMAIL_FROM":$var_EMAIL_FROM,"TBLNAME":$var_TBLNAME,"TABLE":$var_TABLE,"TITLE_FIELD":$var_TITLE_FIELD,"PREFIX":$var_PREFIX,"TITLE_FIELD2":$var_TITLE_FIELD2,"TITLE_FIELD3":$var_TITLE_FIELD3
        | }
        """.stripMargin
}
