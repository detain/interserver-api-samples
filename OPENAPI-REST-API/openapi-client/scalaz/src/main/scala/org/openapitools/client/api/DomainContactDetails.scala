package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainContactDetails._

case class DomainContactDetails (
  /* Contact status reported by the registrar. */
  status: Option[String],
/* State or region for the contact address. */
  state: Option[String],
/* Organization name for the contact. */
  org_name: Option[String],
/* Two-letter country code for the contact. */
  country: Option[String],
/* Postal or ZIP code for the contact address. */
  postal_code: Option[String],
/* Email address for the contact. */
  email: Option[String],
/* Fax number for the contact, if available. */
  fax: Option[String],
/* Secondary street address line. */
  address2: Option[String],
/* Tertiary street address line. */
  address3: Option[String],
/* Primary street address line. */
  address1: Option[String],
/* City for the contact address. */
  city: Option[String],
/* Phone number for the contact. */
  phone: Option[String],
/* First name for the contact. */
  first_name: Option[String],
/* Last name for the contact. */
  last_name: Option[String])

object DomainContactDetails {
  import DateTimeCodecs._

  implicit val DomainContactDetailsCodecJson: CodecJson[DomainContactDetails] = CodecJson.derive[DomainContactDetails]
  implicit val DomainContactDetailsDecoder: EntityDecoder[DomainContactDetails] = jsonOf[DomainContactDetails]
  implicit val DomainContactDetailsEncoder: EntityEncoder[DomainContactDetails] = jsonEncoderOf[DomainContactDetails]
}
