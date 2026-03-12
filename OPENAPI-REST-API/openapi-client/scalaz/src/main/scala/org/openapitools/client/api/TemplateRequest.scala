package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TemplateRequest._

case class TemplateRequest (
  /* OS Template Filename */
  template: String,
/* Password for this account. */
  localPassword: String,
/* Password for Root / Administrator Account. */
  password: Option[String])

object TemplateRequest {
  import DateTimeCodecs._

  implicit val TemplateRequestCodecJson: CodecJson[TemplateRequest] = CodecJson.derive[TemplateRequest]
  implicit val TemplateRequestDecoder: EntityDecoder[TemplateRequest] = jsonOf[TemplateRequest]
  implicit val TemplateRequestEncoder: EntityEncoder[TemplateRequest] = jsonEncoderOf[TemplateRequest]
}
