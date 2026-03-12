package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupOrderPostResponseCjParams._

case class BackupOrderPostResponseCjParams (
  containerTagId: Option[String],
CID: Option[String],
OID: Option[String],
`TYPE`: Option[String],
ITEM1: Option[String],
AMT1: Option[String],
QTY1: Option[Integer],
CURRENCY: Option[String])

object BackupOrderPostResponseCjParams {
  import DateTimeCodecs._

  implicit val BackupOrderPostResponseCjParamsCodecJson: CodecJson[BackupOrderPostResponseCjParams] = CodecJson.derive[BackupOrderPostResponseCjParams]
  implicit val BackupOrderPostResponseCjParamsDecoder: EntityDecoder[BackupOrderPostResponseCjParams] = jsonOf[BackupOrderPostResponseCjParams]
  implicit val BackupOrderPostResponseCjParamsEncoder: EntityEncoder[BackupOrderPostResponseCjParams] = jsonEncoderOf[BackupOrderPostResponseCjParams]
}
