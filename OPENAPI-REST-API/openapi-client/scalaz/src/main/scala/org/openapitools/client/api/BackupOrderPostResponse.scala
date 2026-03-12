package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupOrderPostResponse._

case class BackupOrderPostResponse (
  continue: Option[Boolean],
errors: Option[List[String]],
total_cost: Option[String],
iid: Option[String],
iids: Option[List[String]],
real_iids: Option[List[String]],
serviceId: Option[Integer],
invoice_description: Option[String],
cj_params: Option[BackupOrderPostResponseCjParams])

object BackupOrderPostResponse {
  import DateTimeCodecs._

  implicit val BackupOrderPostResponseCodecJson: CodecJson[BackupOrderPostResponse] = CodecJson.derive[BackupOrderPostResponse]
  implicit val BackupOrderPostResponseDecoder: EntityDecoder[BackupOrderPostResponse] = jsonOf[BackupOrderPostResponse]
  implicit val BackupOrderPostResponseEncoder: EntityEncoder[BackupOrderPostResponse] = jsonEncoderOf[BackupOrderPostResponse]
}
