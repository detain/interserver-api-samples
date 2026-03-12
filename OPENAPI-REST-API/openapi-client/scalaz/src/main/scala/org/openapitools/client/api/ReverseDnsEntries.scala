package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ReverseDnsEntries._

case class ReverseDnsEntries (
  /* The IPs you have access to and their current reverse dns mapping. */
  ips: Option[Map[String, AnyType]])

object ReverseDnsEntries {
  import DateTimeCodecs._

  implicit val ReverseDnsEntriesCodecJson: CodecJson[ReverseDnsEntries] = CodecJson.derive[ReverseDnsEntries]
  implicit val ReverseDnsEntriesDecoder: EntityDecoder[ReverseDnsEntries] = jsonOf[ReverseDnsEntries]
  implicit val ReverseDnsEntriesEncoder: EntityEncoder[ReverseDnsEntries] = jsonEncoderOf[ReverseDnsEntries]
}
