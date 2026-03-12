package io.swagger.server.model


/**
 * Availability, pricing, and order-field metadata for a domain lookup.
 *
 * @param available Whether the domain is available to register.
 * @param premium Whether the domain is marked as premium by the registrar.
 * @param website Indicates if the domain is already used by a website service.
 * @param domain_service Indicates if the domain already exists as a domain service on the account.
 * @param service Service catalog details for the domain's TLD.
 * @param whois_privacy Whether Whois privacy is available for the TLD.
 * @param `new` Calculated registration price, when available.
 * @param renewal Calculated renewal price, when available.
 * @param transfer Calculated transfer price, when available.
 * @param fields Registrar field requirements for this domain/TLD.
 * @param currencies Pricing information normalized to supported currencies.
 */
case class DomainLookupResponse (
  available: Option[Boolean],
  premium: Option[Boolean],
  website: Option[Boolean],
  domain_service: Option[Boolean],
  service: Option[Object],
  whois_privacy: Option[Boolean],
  `new`: Option[String],
  renewal: Option[String],
  transfer: Option[String],
  fields: Option[Object],
  currencies: Option[Object]
)

