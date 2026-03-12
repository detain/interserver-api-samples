package io.swagger.server.model


/**
 * @param last_login_ip Last login IP. for example: ''99.88.77.66''
 * @param last_login Last login time. for example: ''14:58:pm - 17 Aug, 2023''
 * @param currency Currency symbol. for example: ''$''
 * @param amount Amount with currency. for example: ''$23.50''
 * @param invoice_list Number of invoices. for example: ''5''
 * @param balance Balance with currency. for example: ''$0.60''
 * @param full_name Users full name. for example: ''John''
 * @param email User email address. for example: ''user@domain.com''
 * @param tickets List of tickets.
 * @param ticketStatus 
 * @param ticketStatusView 
 * @param details 
 * @param services 
 * @param AFFILIATE_AMOUNT Affiliate amount with currency. for example: ''100''
 */
case class Home (
  last_login_ip: String,
  last_login: String,
  currency: String,
  amount: String,
  invoice_list: Int,
  balance: String,
  full_name: String,
  email: String,
  tickets: List[String],
  ticketStatus: Home_ticketStatus,
  ticketStatusView: Home_ticketStatusView,
  details: Home_details,
  services: Home_services,
  AFFILIATE_AMOUNT: String
)

