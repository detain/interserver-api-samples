package io.swagger.server.model


/**
 * Ordering metadata for domain registration and transfers.
 *
 * @param whoisPrivacyCost Cost of Whois Privacy for example: ''5''
 * @param services 
 * @param tldServices Map of TLDs to domain service IDs.
 */
case class DomainOrder (
  whoisPrivacyCost: Option[String],
  services: Option[DomainOrder_services],
  tldServices: Option[Object]
)

