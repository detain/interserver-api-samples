package io.swagger.model;

import io.swagger.model.HomeDetails;
import io.swagger.model.HomeServices;
import io.swagger.model.HomeTicketStatus;
import io.swagger.model.HomeTicketStatusView;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class Home   {

  private @Valid String lastLoginIp = null;

  private @Valid String lastLogin = null;

  private @Valid String currency = null;

  private @Valid String amount = null;

  private @Valid Integer invoiceList = null;

  private @Valid String balance = null;

  private @Valid String fullName = null;

  private @Valid String email = null;

  private @Valid List<String> tickets = new ArrayList<String>();

  private @Valid HomeTicketStatus ticketStatus = null;

  private @Valid HomeTicketStatusView ticketStatusView = null;

  private @Valid HomeDetails details = null;

  private @Valid HomeServices services = null;

  private @Valid String AFFILIATE_AMOUNT = null;

  /**
   * Last login IP.
   **/
  public Home lastLoginIp(String lastLoginIp) {
    this.lastLoginIp = lastLoginIp;
    return this;
  }

  
  @ApiModelProperty(example = "99.88.77.66", required = true, value = "Last login IP.")
  @JsonProperty("last_login_ip")
  @NotNull

  public String getLastLoginIp() {
    return lastLoginIp;
  }
  public void setLastLoginIp(String lastLoginIp) {
    this.lastLoginIp = lastLoginIp;
  }

  /**
   * Last login time.
   **/
  public Home lastLogin(String lastLogin) {
    this.lastLogin = lastLogin;
    return this;
  }

  
  @ApiModelProperty(example = "14:58:pm - 17 Aug, 2023", required = true, value = "Last login time.")
  @JsonProperty("last_login")
  @NotNull

  public String getLastLogin() {
    return lastLogin;
  }
  public void setLastLogin(String lastLogin) {
    this.lastLogin = lastLogin;
  }

  /**
   * Currency symbol.
   **/
  public Home currency(String currency) {
    this.currency = currency;
    return this;
  }

  
  @ApiModelProperty(example = "$", required = true, value = "Currency symbol.")
  @JsonProperty("currency")
  @NotNull

  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   * Amount with currency.
   **/
  public Home amount(String amount) {
    this.amount = amount;
    return this;
  }

  
  @ApiModelProperty(example = "$23.50", required = true, value = "Amount with currency.")
  @JsonProperty("amount")
  @NotNull

  public String getAmount() {
    return amount;
  }
  public void setAmount(String amount) {
    this.amount = amount;
  }

  /**
   * Number of invoices.
   **/
  public Home invoiceList(Integer invoiceList) {
    this.invoiceList = invoiceList;
    return this;
  }

  
  @ApiModelProperty(example = "5", required = true, value = "Number of invoices.")
  @JsonProperty("invoice_list")
  @NotNull

  public Integer getInvoiceList() {
    return invoiceList;
  }
  public void setInvoiceList(Integer invoiceList) {
    this.invoiceList = invoiceList;
  }

  /**
   * Balance with currency.
   **/
  public Home balance(String balance) {
    this.balance = balance;
    return this;
  }

  
  @ApiModelProperty(example = "$0.60", required = true, value = "Balance with currency.")
  @JsonProperty("balance")
  @NotNull

  public String getBalance() {
    return balance;
  }
  public void setBalance(String balance) {
    this.balance = balance;
  }

  /**
   * Users full name.
   **/
  public Home fullName(String fullName) {
    this.fullName = fullName;
    return this;
  }

  
  @ApiModelProperty(example = "John", required = true, value = "Users full name.")
  @JsonProperty("full_name")
  @NotNull

  public String getFullName() {
    return fullName;
  }
  public void setFullName(String fullName) {
    this.fullName = fullName;
  }

  /**
   * User email address.
   **/
  public Home email(String email) {
    this.email = email;
    return this;
  }

  
  @ApiModelProperty(example = "user@domain.com", required = true, value = "User email address.")
  @JsonProperty("email")
  @NotNull

  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  /**
   * List of tickets.
   **/
  public Home tickets(List<String> tickets) {
    this.tickets = tickets;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "List of tickets.")
  @JsonProperty("tickets")
  @NotNull

  public List<String> getTickets() {
    return tickets;
  }
  public void setTickets(List<String> tickets) {
    this.tickets = tickets;
  }

  /**
   **/
  public Home ticketStatus(HomeTicketStatus ticketStatus) {
    this.ticketStatus = ticketStatus;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("ticketStatus")
  @NotNull

  public HomeTicketStatus getTicketStatus() {
    return ticketStatus;
  }
  public void setTicketStatus(HomeTicketStatus ticketStatus) {
    this.ticketStatus = ticketStatus;
  }

  /**
   **/
  public Home ticketStatusView(HomeTicketStatusView ticketStatusView) {
    this.ticketStatusView = ticketStatusView;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("ticketStatusView")
  @NotNull

  public HomeTicketStatusView getTicketStatusView() {
    return ticketStatusView;
  }
  public void setTicketStatusView(HomeTicketStatusView ticketStatusView) {
    this.ticketStatusView = ticketStatusView;
  }

  /**
   **/
  public Home details(HomeDetails details) {
    this.details = details;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("details")
  @NotNull

  public HomeDetails getDetails() {
    return details;
  }
  public void setDetails(HomeDetails details) {
    this.details = details;
  }

  /**
   **/
  public Home services(HomeServices services) {
    this.services = services;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("services")
  @NotNull

  public HomeServices getServices() {
    return services;
  }
  public void setServices(HomeServices services) {
    this.services = services;
  }

  /**
   * Affiliate amount with currency.
   **/
  public Home AFFILIATE_AMOUNT(String AFFILIATE_AMOUNT) {
    this.AFFILIATE_AMOUNT = AFFILIATE_AMOUNT;
    return this;
  }

  
  @ApiModelProperty(example = "100", required = true, value = "Affiliate amount with currency.")
  @JsonProperty("AFFILIATE_AMOUNT")
  @NotNull

  public String getAFFILIATEAMOUNT() {
    return AFFILIATE_AMOUNT;
  }
  public void setAFFILIATEAMOUNT(String AFFILIATE_AMOUNT) {
    this.AFFILIATE_AMOUNT = AFFILIATE_AMOUNT;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Home home = (Home) o;
    return Objects.equals(lastLoginIp, home.lastLoginIp) &&
        Objects.equals(lastLogin, home.lastLogin) &&
        Objects.equals(currency, home.currency) &&
        Objects.equals(amount, home.amount) &&
        Objects.equals(invoiceList, home.invoiceList) &&
        Objects.equals(balance, home.balance) &&
        Objects.equals(fullName, home.fullName) &&
        Objects.equals(email, home.email) &&
        Objects.equals(tickets, home.tickets) &&
        Objects.equals(ticketStatus, home.ticketStatus) &&
        Objects.equals(ticketStatusView, home.ticketStatusView) &&
        Objects.equals(details, home.details) &&
        Objects.equals(services, home.services) &&
        Objects.equals(AFFILIATE_AMOUNT, home.AFFILIATE_AMOUNT);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
