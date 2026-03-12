package io.swagger.server.model


/**
 * Contact details used for domain registrant/admin/technical/billing records.
 *
 * @param status Contact status reported by the registrar.
 * @param state State or region for the contact address.
 * @param org_name Organization name for the contact.
 * @param country Two-letter country code for the contact.
 * @param postal_code Postal or ZIP code for the contact address.
 * @param email Email address for the contact.
 * @param fax Fax number for the contact, if available.
 * @param address2 Secondary street address line.
 * @param address3 Tertiary street address line.
 * @param address1 Primary street address line.
 * @param city City for the contact address.
 * @param phone Phone number for the contact.
 * @param first_name First name for the contact.
 * @param last_name Last name for the contact.
 */
case class DomainContactDetails (
  status: Option[String],
  state: Option[String],
  org_name: Option[String],
  country: Option[String],
  postal_code: Option[String],
  email: Option[String],
  fax: Option[String],
  address2: Option[String],
  address3: Option[String],
  address1: Option[String],
  city: Option[String],
  phone: Option[String],
  first_name: Option[String],
  last_name: Option[String]
)

