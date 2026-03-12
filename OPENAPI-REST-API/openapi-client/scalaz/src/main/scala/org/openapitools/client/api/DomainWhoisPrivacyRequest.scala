package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainWhoisPrivacyRequest._

case class DomainWhoisPrivacyRequest (
  /* Action to perform (enable or disableCancel). */
  func: Option[String],
/* CSRF token if the API requires it for the account. */
  csrf_token: Option[String],
domain_firstname: Option[String],
domain_lastname: Option[String],
domain_email: Option[String],
domain_address: Option[String],
domain_address2: Option[String],
domain_address3: Option[String],
domain_city: Option[String],
domain_state: Option[String],
domain_zip: Option[String],
domain_country: Option[String],
domain_phone: Option[String],
domain_fax: Option[String],
domain_company: Option[String],
domain_extra: Option[String])

object DomainWhoisPrivacyRequest {
  import DateTimeCodecs._

  implicit val DomainWhoisPrivacyRequestCodecJson: CodecJson[DomainWhoisPrivacyRequest] = CodecJson.derive[DomainWhoisPrivacyRequest]
  implicit val DomainWhoisPrivacyRequestDecoder: EntityDecoder[DomainWhoisPrivacyRequest] = jsonOf[DomainWhoisPrivacyRequest]
  implicit val DomainWhoisPrivacyRequestEncoder: EntityEncoder[DomainWhoisPrivacyRequest] = jsonEncoderOf[DomainWhoisPrivacyRequest]
}
