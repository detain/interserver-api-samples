package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsPlesk12Data._

case class VpsPlesk12Data (
  admin: Option[VpsPleskLicense],
pro: Option[VpsPleskLicense],
host: Option[VpsPleskLicense])

object VpsPlesk12Data {
  import DateTimeCodecs._

  implicit val VpsPlesk12DataCodecJson: CodecJson[VpsPlesk12Data] = CodecJson.derive[VpsPlesk12Data]
  implicit val VpsPlesk12DataDecoder: EntityDecoder[VpsPlesk12Data] = jsonOf[VpsPlesk12Data]
  implicit val VpsPlesk12DataEncoder: EntityEncoder[VpsPlesk12Data] = jsonEncoderOf[VpsPlesk12Data]
}
