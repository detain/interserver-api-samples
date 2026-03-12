package io.swagger.model;

import io.swagger.model.HomeDetails;
import io.swagger.model.HomeServices;
import io.swagger.model.HomeTicketStatus;
import io.swagger.model.HomeTicketStatusView;
import java.util.ArrayList;
import java.util.List;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class Home   {
  
  @Schema(example = "99.88.77.66", required = true, description = "Last login IP.")
 /**
   * Last login IP.  
  **/
  private String lastLoginIp = null;
  
  @Schema(example = "14:58:pm - 17 Aug, 2023", required = true, description = "Last login time.")
 /**
   * Last login time.  
  **/
  private String lastLogin = null;
  
  @Schema(example = "$", required = true, description = "Currency symbol.")
 /**
   * Currency symbol.  
  **/
  private String currency = null;
  
  @Schema(example = "$23.50", required = true, description = "Amount with currency.")
 /**
   * Amount with currency.  
  **/
  private String amount = null;
  
  @Schema(example = "5", required = true, description = "Number of invoices.")
 /**
   * Number of invoices.  
  **/
  private Integer invoiceList = null;
  
  @Schema(example = "$0.60", required = true, description = "Balance with currency.")
 /**
   * Balance with currency.  
  **/
  private String balance = null;
  
  @Schema(example = "John", required = true, description = "Users full name.")
 /**
   * Users full name.  
  **/
  private String fullName = null;
  
  @Schema(example = "user@domain.com", required = true, description = "User email address.")
 /**
   * User email address.  
  **/
  private String email = null;
  
  @Schema(required = true, description = "List of tickets.")
 /**
   * List of tickets.  
  **/
  private List<String> tickets = new ArrayList<String>();
  
  @Schema(required = true, description = "")
  private HomeTicketStatus ticketStatus = null;
  
  @Schema(required = true, description = "")
  private HomeTicketStatusView ticketStatusView = null;
  
  @Schema(required = true, description = "")
  private HomeDetails details = null;
  
  @Schema(required = true, description = "")
  private HomeServices services = null;
  
  @Schema(example = "100", required = true, description = "Affiliate amount with currency.")
 /**
   * Affiliate amount with currency.  
  **/
  private String AFFILIATE_AMOUNT = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
