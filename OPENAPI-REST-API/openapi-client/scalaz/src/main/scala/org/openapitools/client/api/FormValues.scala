package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import FormValues._

case class FormValues (
  /* Selected memory option ID. */
  memory: Option[Integer],
/* Selected bandwidth option ID. */
  bandwidth: Option[Integer],
/* Selected IP block option ID. */
  ips: Option[Integer],
/* Selected operating system option ID. */
  os: Option[Integer],
/* Selected control panel option ID. */
  cp: Option[Integer],
/* Selected RAID option ID. */
  raid: Option[Integer],
/* Selected hard drive option ID. */
  hd: Option[Integer],
/* Selected datacenter region ID. */
  region: Option[Integer])

object FormValues {
  import DateTimeCodecs._

  implicit val FormValuesCodecJson: CodecJson[FormValues] = CodecJson.derive[FormValues]
  implicit val FormValuesDecoder: EntityDecoder[FormValues] = jsonOf[FormValues]
  implicit val FormValuesEncoder: EntityEncoder[FormValues] = jsonEncoderOf[FormValues]
}
