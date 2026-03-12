package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainDnssecRecordsInner._

case class DomainDnssecRecordsInner (
  algorithm: Option[String],
digest_type: Option[String],
digest: Option[String],
key_tag: Option[String])

object DomainDnssecRecordsInner {
  import DateTimeCodecs._

  implicit val DomainDnssecRecordsInnerCodecJson: CodecJson[DomainDnssecRecordsInner] = CodecJson.derive[DomainDnssecRecordsInner]
  implicit val DomainDnssecRecordsInnerDecoder: EntityDecoder[DomainDnssecRecordsInner] = jsonOf[DomainDnssecRecordsInner]
  implicit val DomainDnssecRecordsInnerEncoder: EntityEncoder[DomainDnssecRecordsInner] = jsonEncoderOf[DomainDnssecRecordsInner]
}
