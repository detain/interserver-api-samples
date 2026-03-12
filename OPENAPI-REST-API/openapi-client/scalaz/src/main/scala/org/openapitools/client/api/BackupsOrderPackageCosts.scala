package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupsOrderPackageCosts._

case class BackupsOrderPackageCosts (
  /* The cost associated with package 11006. */
  `11006`: Integer)

object BackupsOrderPackageCosts {
  import DateTimeCodecs._

  implicit val BackupsOrderPackageCostsCodecJson: CodecJson[BackupsOrderPackageCosts] = CodecJson.derive[BackupsOrderPackageCosts]
  implicit val BackupsOrderPackageCostsDecoder: EntityDecoder[BackupsOrderPackageCosts] = jsonOf[BackupsOrderPackageCosts]
  implicit val BackupsOrderPackageCostsEncoder: EntityEncoder[BackupsOrderPackageCosts] = jsonEncoderOf[BackupsOrderPackageCosts]
}
