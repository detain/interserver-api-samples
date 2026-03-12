
package org.openapitools.client.model


case class DomainContactDetails (
    /* Contact status reported by the registrar. */
    _status: Option[String],
    /* State or region for the contact address. */
    _state: Option[String],
    /* Organization name for the contact. */
    _org_name: Option[String],
    /* Two-letter country code for the contact. */
    _country: Option[String],
    /* Postal or ZIP code for the contact address. */
    _postal_code: Option[String],
    /* Email address for the contact. */
    _email: Option[String],
    /* Fax number for the contact, if available. */
    _fax: Option[String],
    /* Secondary street address line. */
    _address2: Option[String],
    /* Tertiary street address line. */
    _address3: Option[String],
    /* Primary street address line. */
    _address1: Option[String],
    /* City for the contact address. */
    _city: Option[String],
    /* Phone number for the contact. */
    _phone: Option[String],
    /* First name for the contact. */
    _first_name: Option[String],
    /* Last name for the contact. */
    _last_name: Option[String]
)
object DomainContactDetails {
    def toStringBody(var_status: Object, var_state: Object, var_org_name: Object, var_country: Object, var_postal_code: Object, var_email: Object, var_fax: Object, var_address2: Object, var_address3: Object, var_address1: Object, var_city: Object, var_phone: Object, var_first_name: Object, var_last_name: Object) =
        s"""
        | {
        | "status":$var_status,"state":$var_state,"org_name":$var_org_name,"country":$var_country,"postal_code":$var_postal_code,"email":$var_email,"fax":$var_fax,"address2":$var_address2,"address3":$var_address3,"address1":$var_address1,"city":$var_city,"phone":$var_phone,"first_name":$var_first_name,"last_name":$var_last_name
        | }
        """.stripMargin
}
