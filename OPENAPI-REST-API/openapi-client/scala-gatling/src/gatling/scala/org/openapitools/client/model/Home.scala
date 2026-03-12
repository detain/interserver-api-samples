
package org.openapitools.client.model


case class Home (
    /* Last login IP. */
    _last_login_ip: String,
    /* Last login time. */
    _last_login: String,
    /* Currency symbol. */
    _currency: String,
    /* Amount with currency. */
    _amount: String,
    /* Number of invoices. */
    _invoice_list: Integer,
    /* Balance with currency. */
    _balance: String,
    /* Users full name. */
    _full_name: String,
    /* User email address. */
    _email: String,
    /* List of tickets. */
    _tickets: List[String],
    _ticketStatus: HomeTicketStatus,
    _ticketStatusView: HomeTicketStatusView,
    _details: HomeDetails,
    _services: HomeServices,
    /* Affiliate amount with currency. */
    _AFFILIATE_AMOUNT: String
)
object Home {
    def toStringBody(var_last_login_ip: Object, var_last_login: Object, var_currency: Object, var_amount: Object, var_invoice_list: Object, var_balance: Object, var_full_name: Object, var_email: Object, var_tickets: Object, var_ticketStatus: Object, var_ticketStatusView: Object, var_details: Object, var_services: Object, var_AFFILIATE_AMOUNT: Object) =
        s"""
        | {
        | "last_login_ip":$var_last_login_ip,"last_login":$var_last_login,"currency":$var_currency,"amount":$var_amount,"invoice_list":$var_invoice_list,"balance":$var_balance,"full_name":$var_full_name,"email":$var_email,"tickets":$var_tickets,"ticketStatus":$var_ticketStatus,"ticketStatusView":$var_ticketStatusView,"details":$var_details,"services":$var_services,"AFFILIATE_AMOUNT":$var_AFFILIATE_AMOUNT
        | }
        """.stripMargin
}
