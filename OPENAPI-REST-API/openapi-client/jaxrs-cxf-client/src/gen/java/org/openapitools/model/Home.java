package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.HomeDetails;
import org.openapitools.model.HomeServices;
import org.openapitools.model.HomeTicketStatus;
import org.openapitools.model.HomeTicketStatusView;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class Home  {
  
 /**
  * Last login IP.
  */
  @ApiModelProperty(example = "99.88.77.66", required = true, value = "Last login IP.")

  private String lastLoginIp;

 /**
  * Last login time.
  */
  @ApiModelProperty(example = "14:58:pm - 17 Aug, 2023", required = true, value = "Last login time.")

  private String lastLogin;

 /**
  * Currency symbol.
  */
  @ApiModelProperty(example = "$", required = true, value = "Currency symbol.")

  private String currency;

 /**
  * Amount with currency.
  */
  @ApiModelProperty(example = "$23.50", required = true, value = "Amount with currency.")

  private String amount;

 /**
  * Number of invoices.
  */
  @ApiModelProperty(example = "5", required = true, value = "Number of invoices.")

  private Integer invoiceList;

 /**
  * Balance with currency.
  */
  @ApiModelProperty(example = "$0.60", required = true, value = "Balance with currency.")

  private String balance;

 /**
  * Users full name.
  */
  @ApiModelProperty(example = "John", required = true, value = "Users full name.")

  private String fullName;

 /**
  * User email address.
  */
  @ApiModelProperty(example = "user@domain.com", required = true, value = "User email address.")

  private String email;

 /**
  * List of tickets.
  */
  @ApiModelProperty(required = true, value = "List of tickets.")

  private List<String> tickets = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private HomeTicketStatus ticketStatus;

  @ApiModelProperty(required = true, value = "")

  private HomeTicketStatusView ticketStatusView;

  @ApiModelProperty(required = true, value = "")

  private HomeDetails details;

  @ApiModelProperty(required = true, value = "")

  private HomeServices services;

 /**
  * Affiliate amount with currency.
  */
  @ApiModelProperty(example = "100", required = true, value = "Affiliate amount with currency.")

  private String AFFILIATE_AMOUNT;
 /**
   * Last login IP.
   * @return lastLoginIp
  **/
  @JsonProperty("last_login_ip")
  public String getLastLoginIp() {
    return lastLoginIp;
  }

  public void setLastLoginIp(String lastLoginIp) {
    this.lastLoginIp = lastLoginIp;
  }

  public Home lastLoginIp(String lastLoginIp) {
    this.lastLoginIp = lastLoginIp;
    return this;
  }

 /**
   * Last login time.
   * @return lastLogin
  **/
  @JsonProperty("last_login")
  public String getLastLogin() {
    return lastLogin;
  }

  public void setLastLogin(String lastLogin) {
    this.lastLogin = lastLogin;
  }

  public Home lastLogin(String lastLogin) {
    this.lastLogin = lastLogin;
    return this;
  }

 /**
   * Currency symbol.
   * @return currency
  **/
  @JsonProperty("currency")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public Home currency(String currency) {
    this.currency = currency;
    return this;
  }

 /**
   * Amount with currency.
   * @return amount
  **/
  @JsonProperty("amount")
  public String getAmount() {
    return amount;
  }

  public void setAmount(String amount) {
    this.amount = amount;
  }

  public Home amount(String amount) {
    this.amount = amount;
    return this;
  }

 /**
   * Number of invoices.
   * @return invoiceList
  **/
  @JsonProperty("invoice_list")
  public Integer getInvoiceList() {
    return invoiceList;
  }

  public void setInvoiceList(Integer invoiceList) {
    this.invoiceList = invoiceList;
  }

  public Home invoiceList(Integer invoiceList) {
    this.invoiceList = invoiceList;
    return this;
  }

 /**
   * Balance with currency.
   * @return balance
  **/
  @JsonProperty("balance")
  public String getBalance() {
    return balance;
  }

  public void setBalance(String balance) {
    this.balance = balance;
  }

  public Home balance(String balance) {
    this.balance = balance;
    return this;
  }

 /**
   * Users full name.
   * @return fullName
  **/
  @JsonProperty("full_name")
  public String getFullName() {
    return fullName;
  }

  public void setFullName(String fullName) {
    this.fullName = fullName;
  }

  public Home fullName(String fullName) {
    this.fullName = fullName;
    return this;
  }

 /**
   * User email address.
   * @return email
  **/
  @JsonProperty("email")
  public String getEmail() {
    return email;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  public Home email(String email) {
    this.email = email;
    return this;
  }

 /**
   * List of tickets.
   * @return tickets
  **/
  @JsonProperty("tickets")
  public List<String> getTickets() {
    return tickets;
  }

  public void setTickets(List<String> tickets) {
    this.tickets = tickets;
  }

  public Home tickets(List<String> tickets) {
    this.tickets = tickets;
    return this;
  }

  public Home addTicketsItem(String ticketsItem) {
    this.tickets.add(ticketsItem);
    return this;
  }

 /**
   * Get ticketStatus
   * @return ticketStatus
  **/
  @JsonProperty("ticketStatus")
  public HomeTicketStatus getTicketStatus() {
    return ticketStatus;
  }

  public void setTicketStatus(HomeTicketStatus ticketStatus) {
    this.ticketStatus = ticketStatus;
  }

  public Home ticketStatus(HomeTicketStatus ticketStatus) {
    this.ticketStatus = ticketStatus;
    return this;
  }

 /**
   * Get ticketStatusView
   * @return ticketStatusView
  **/
  @JsonProperty("ticketStatusView")
  public HomeTicketStatusView getTicketStatusView() {
    return ticketStatusView;
  }

  public void setTicketStatusView(HomeTicketStatusView ticketStatusView) {
    this.ticketStatusView = ticketStatusView;
  }

  public Home ticketStatusView(HomeTicketStatusView ticketStatusView) {
    this.ticketStatusView = ticketStatusView;
    return this;
  }

 /**
   * Get details
   * @return details
  **/
  @JsonProperty("details")
  public HomeDetails getDetails() {
    return details;
  }

  public void setDetails(HomeDetails details) {
    this.details = details;
  }

  public Home details(HomeDetails details) {
    this.details = details;
    return this;
  }

 /**
   * Get services
   * @return services
  **/
  @JsonProperty("services")
  public HomeServices getServices() {
    return services;
  }

  public void setServices(HomeServices services) {
    this.services = services;
  }

  public Home services(HomeServices services) {
    this.services = services;
    return this;
  }

 /**
   * Affiliate amount with currency.
   * @return AFFILIATE_AMOUNT
  **/
  @JsonProperty("AFFILIATE_AMOUNT")
  public String getAFFILIATEAMOUNT() {
    return AFFILIATE_AMOUNT;
  }

  public void setAFFILIATEAMOUNT(String AFFILIATE_AMOUNT) {
    this.AFFILIATE_AMOUNT = AFFILIATE_AMOUNT;
  }

  public Home AFFILIATE_AMOUNT(String AFFILIATE_AMOUNT) {
    this.AFFILIATE_AMOUNT = AFFILIATE_AMOUNT;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Home home = (Home) o;
    return Objects.equals(this.lastLoginIp, home.lastLoginIp) &&
        Objects.equals(this.lastLogin, home.lastLogin) &&
        Objects.equals(this.currency, home.currency) &&
        Objects.equals(this.amount, home.amount) &&
        Objects.equals(this.invoiceList, home.invoiceList) &&
        Objects.equals(this.balance, home.balance) &&
        Objects.equals(this.fullName, home.fullName) &&
        Objects.equals(this.email, home.email) &&
        Objects.equals(this.tickets, home.tickets) &&
        Objects.equals(this.ticketStatus, home.ticketStatus) &&
        Objects.equals(this.ticketStatusView, home.ticketStatusView) &&
        Objects.equals(this.details, home.details) &&
        Objects.equals(this.services, home.services) &&
        Objects.equals(this.AFFILIATE_AMOUNT, home.AFFILIATE_AMOUNT);
  }

  @Override
  public int hashCode() {
    return Objects.hash(lastLoginIp, lastLogin, currency, amount, invoiceList, balance, fullName, email, tickets, ticketStatus, ticketStatusView, details, services, AFFILIATE_AMOUNT);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Home {\n");
    
    sb.append("    lastLoginIp: ").append(toIndentedString(lastLoginIp)).append("\n");
    sb.append("    lastLogin: ").append(toIndentedString(lastLogin)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    invoiceList: ").append(toIndentedString(invoiceList)).append("\n");
    sb.append("    balance: ").append(toIndentedString(balance)).append("\n");
    sb.append("    fullName: ").append(toIndentedString(fullName)).append("\n");
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
    sb.append("    tickets: ").append(toIndentedString(tickets)).append("\n");
    sb.append("    ticketStatus: ").append(toIndentedString(ticketStatus)).append("\n");
    sb.append("    ticketStatusView: ").append(toIndentedString(ticketStatusView)).append("\n");
    sb.append("    details: ").append(toIndentedString(details)).append("\n");
    sb.append("    services: ").append(toIndentedString(services)).append("\n");
    sb.append("    AFFILIATE_AMOUNT: ").append(toIndentedString(AFFILIATE_AMOUNT)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

