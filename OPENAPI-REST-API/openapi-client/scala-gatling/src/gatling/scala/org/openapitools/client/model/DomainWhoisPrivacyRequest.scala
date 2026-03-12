
package org.openapitools.client.model


case class DomainWhoisPrivacyRequest (
    /* Action to perform (enable or disableCancel). */
    _func: Option[String],
    /* CSRF token if the API requires it for the account. */
    _csrf_token: Option[String],
    _domain_firstname: Option[String],
    _domain_lastname: Option[String],
    _domain_email: Option[String],
    _domain_address: Option[String],
    _domain_address2: Option[String],
    _domain_address3: Option[String],
    _domain_city: Option[String],
    _domain_state: Option[String],
    _domain_zip: Option[String],
    _domain_country: Option[String],
    _domain_phone: Option[String],
    _domain_fax: Option[String],
    _domain_company: Option[String],
    _domain_extra: Option[String]
)
object DomainWhoisPrivacyRequest {
    def toStringBody(var_func: Object, var_csrf_token: Object, var_domain_firstname: Object, var_domain_lastname: Object, var_domain_email: Object, var_domain_address: Object, var_domain_address2: Object, var_domain_address3: Object, var_domain_city: Object, var_domain_state: Object, var_domain_zip: Object, var_domain_country: Object, var_domain_phone: Object, var_domain_fax: Object, var_domain_company: Object, var_domain_extra: Object) =
        s"""
        | {
        | "func":$var_func,"csrf_token":$var_csrf_token,"domain_firstname":$var_domain_firstname,"domain_lastname":$var_domain_lastname,"domain_email":$var_domain_email,"domain_address":$var_domain_address,"domain_address2":$var_domain_address2,"domain_address3":$var_domain_address3,"domain_city":$var_domain_city,"domain_state":$var_domain_state,"domain_zip":$var_domain_zip,"domain_country":$var_domain_country,"domain_phone":$var_domain_phone,"domain_fax":$var_domain_fax,"domain_company":$var_domain_company,"domain_extra":$var_domain_extra
        | }
        """.stripMargin
}
