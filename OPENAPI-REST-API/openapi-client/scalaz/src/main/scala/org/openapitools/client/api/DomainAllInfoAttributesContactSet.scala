package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainAllInfoAttributesContactSet._

case class DomainAllInfoAttributesContactSet (
  owner: Option[DomainOwnerContact],
admin: Option[DomainAdminContact],
tech: Option[DomainTechContact])

object DomainAllInfoAttributesContactSet {
  import DateTimeCodecs._

  implicit val DomainAllInfoAttributesContactSetCodecJson: CodecJson[DomainAllInfoAttributesContactSet] = CodecJson.derive[DomainAllInfoAttributesContactSet]
  implicit val DomainAllInfoAttributesContactSetDecoder: EntityDecoder[DomainAllInfoAttributesContactSet] = jsonOf[DomainAllInfoAttributesContactSet]
  implicit val DomainAllInfoAttributesContactSetEncoder: EntityEncoder[DomainAllInfoAttributesContactSet] = jsonEncoderOf[DomainAllInfoAttributesContactSet]
}
