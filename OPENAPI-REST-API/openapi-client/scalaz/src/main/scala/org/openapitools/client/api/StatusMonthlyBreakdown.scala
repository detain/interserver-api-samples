package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import StatusMonthlyBreakdown._

case class StatusMonthlyBreakdown (
  default: MonthlyCounts,
failed: MonthlyCounts,
rejected: MonthlyCounts,
pending: MonthlyCounts,
locked: MonthlyCounts,
paid: MonthlyCounts)

object StatusMonthlyBreakdown {
  import DateTimeCodecs._

  implicit val StatusMonthlyBreakdownCodecJson: CodecJson[StatusMonthlyBreakdown] = CodecJson.derive[StatusMonthlyBreakdown]
  implicit val StatusMonthlyBreakdownDecoder: EntityDecoder[StatusMonthlyBreakdown] = jsonOf[StatusMonthlyBreakdown]
  implicit val StatusMonthlyBreakdownEncoder: EntityEncoder[StatusMonthlyBreakdown] = jsonEncoderOf[StatusMonthlyBreakdown]
}
