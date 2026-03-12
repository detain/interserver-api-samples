package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PlaceScrubOrder201ResponseOrderDetailsCjParams._

case class PlaceScrubOrder201ResponseOrderDetailsCjParams (
  containerTagId: Option[Integer],
CID: Option[Integer],
OID: Option[String],
`TYPE`: Option[Integer],
ITEM1: Option[String],
AMT1: Option[Integer],
QTY1: Option[Integer],
CURRENCY: Option[String])

object PlaceScrubOrder201ResponseOrderDetailsCjParams {
  import DateTimeCodecs._

  implicit val PlaceScrubOrder201ResponseOrderDetailsCjParamsCodecJson: CodecJson[PlaceScrubOrder201ResponseOrderDetailsCjParams] = CodecJson.derive[PlaceScrubOrder201ResponseOrderDetailsCjParams]
  implicit val PlaceScrubOrder201ResponseOrderDetailsCjParamsDecoder: EntityDecoder[PlaceScrubOrder201ResponseOrderDetailsCjParams] = jsonOf[PlaceScrubOrder201ResponseOrderDetailsCjParams]
  implicit val PlaceScrubOrder201ResponseOrderDetailsCjParamsEncoder: EntityEncoder[PlaceScrubOrder201ResponseOrderDetailsCjParams] = jsonEncoderOf[PlaceScrubOrder201ResponseOrderDetailsCjParams]
}
