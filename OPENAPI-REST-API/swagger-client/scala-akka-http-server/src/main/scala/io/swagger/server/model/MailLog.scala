package io.swagger.server.model


/**
 * = MailLog =
 *
 * Mail log records
 *
 * @param total total number of mail log entries for example: ''10234''
 * @param skip number of emails skipped in listing for example: ''0''
 * @param limit number of emails to return for example: ''100''
 * @param emails  for example: ''[{"_id":103172,"id":"17c7eda538e0005d03","from":"person@mysite.com","to":"client@isp.com","subject":"sell 0.005 shares","messageId":"<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>","created":"2021-10-14 08:50:10","time":1634215809,"user":"mb5658","transtype":"ESMTPSA","origin":"199.231.189.154","interface":"feeder","sendingZone":"interserver","bodySize":63,"seq":1,"recipient":"client@isp.com","domain":"interserver.net","locked":1,"lockTime":1634215818533,"assigned":"relay1","queued":"2021-10-14T12:50:15.487Z","mxHostname":"mx.j.is.cc","response":"250 2.0.0 Ok queued as C91D83E128C"}]''
 */
case class MailLog (
  total: Int,
  skip: Int,
  limit: Int,
  emails: List[MailLogEntry]
)

