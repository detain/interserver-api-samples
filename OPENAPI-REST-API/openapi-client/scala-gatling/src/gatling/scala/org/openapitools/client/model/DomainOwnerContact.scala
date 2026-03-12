
package org.openapitools.client.model


case class DomainOwnerContact (
    _postal_code: Option[String],
    _org_name: Option[String],
    _country: Option[String],
    _status: Option[String],
    _state: Option[String],
    _first_name: Option[String],
    _last_name: Option[String],
    _address3: Option[String],
    _fax: Option[String],
    _address2: Option[String],
    _email: Option[String],
    _city: Option[String],
    _phone: Option[String],
    _address1: Option[String]
)
object DomainOwnerContact {
    def toStringBody(var_postal_code: Object, var_org_name: Object, var_country: Object, var_status: Object, var_state: Object, var_first_name: Object, var_last_name: Object, var_address3: Object, var_fax: Object, var_address2: Object, var_email: Object, var_city: Object, var_phone: Object, var_address1: Object) =
        s"""
        | {
        | "postal_code":$var_postal_code,"org_name":$var_org_name,"country":$var_country,"status":$var_status,"state":$var_state,"first_name":$var_first_name,"last_name":$var_last_name,"address3":$var_address3,"fax":$var_fax,"address2":$var_address2,"email":$var_email,"city":$var_city,"phone":$var_phone,"address1":$var_address1
        | }
        """.stripMargin
}
