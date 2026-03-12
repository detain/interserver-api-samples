package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import DomainDnssecRecords._

case class DomainDnssecRecords (
  
object DomainDnssecRecords {
  import DateTimeCodecs._

  implicit val DomainDnssecRecordsCodecJson: CodecJson[DomainDnssecRecords] = CodecJson.derive[DomainDnssecRecords]
  implicit val DomainDnssecRecordsDecoder: EntityDecoder[DomainDnssecRecords] = jsonOf[DomainDnssecRecords]
  implicit val DomainDnssecRecordsEncoder: EntityEncoder[DomainDnssecRecords] = jsonEncoderOf[DomainDnssecRecords]
}
