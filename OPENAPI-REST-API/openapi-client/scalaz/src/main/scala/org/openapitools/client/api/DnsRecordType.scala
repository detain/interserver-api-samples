package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DnsRecordType._

case class DnsRecordType (
  
object DnsRecordType {
  import DateTimeCodecs._

  implicit val DnsRecordTypeCodecJson: CodecJson[DnsRecordType] = CodecJson.derive[DnsRecordType]
  implicit val DnsRecordTypeDecoder: EntityDecoder[DnsRecordType] = jsonOf[DnsRecordType]
  implicit val DnsRecordTypeEncoder: EntityEncoder[DnsRecordType] = jsonEncoderOf[DnsRecordType]
}
