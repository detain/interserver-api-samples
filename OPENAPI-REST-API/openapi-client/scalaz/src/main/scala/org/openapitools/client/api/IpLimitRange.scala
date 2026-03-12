package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import IpLimitRange._

case class IpLimitRange (
  /* The begining (or first) IP address in the range. */
  start: String,
/* The ending (or last) IP address in the range. */
  end: String)

object IpLimitRange {
  import DateTimeCodecs._

  implicit val IpLimitRangeCodecJson: CodecJson[IpLimitRange] = CodecJson.derive[IpLimitRange]
  implicit val IpLimitRangeDecoder: EntityDecoder[IpLimitRange] = jsonOf[IpLimitRange]
  implicit val IpLimitRangeEncoder: EntityEncoder[IpLimitRange] = jsonEncoderOf[IpLimitRange]
}
