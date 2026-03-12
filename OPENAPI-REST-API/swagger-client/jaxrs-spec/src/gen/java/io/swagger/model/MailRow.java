package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A result row from the &#x60;Mail&#x60; &#x60;GET&#x60; request.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A result row from the `Mail` `GET` request.")

public class MailRow   {

  private @Valid String mailId = null;

  private @Valid String repeatInvoicesCost = null;

  private @Valid String mailUsername = null;

  private @Valid String mailStatus = null;

  private @Valid String servicesName = null;

  /**
   * The id of the mail.
   **/
  public MailRow mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

  
  @ApiModelProperty(example = "5652", value = "The id of the mail.")
  @JsonProperty("mail_id")
  @NotNull

  public String getMailId() {
    return mailId;
  }
  public void setMailId(String mailId) {
    this.mailId = mailId;
  }

  /**
   * The repeat invoices cost of the mail.
   **/
  public MailRow repeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

  
  @ApiModelProperty(example = "5.99", value = "The repeat invoices cost of the mail.")
  @JsonProperty("repeat_invoices_cost")
  @NotNull

  public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }
  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  /**
   * The username of the mail.
   **/
  public MailRow mailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
    return this;
  }

  
  @ApiModelProperty(example = "mb5652", value = "The username of the mail.")
  @JsonProperty("mail_username")
  @NotNull

  public String getMailUsername() {
    return mailUsername;
  }
  public void setMailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
  }

  /**
   * The status of the mail.
   **/
  public MailRow mailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
    return this;
  }

  
  @ApiModelProperty(example = "expired", value = "The status of the mail.")
  @JsonProperty("mail_status")
  @NotNull

  public String getMailStatus() {
    return mailStatus;
  }
  public void setMailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
  }

  /**
   * The services name of the mail.
   **/
  public MailRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @ApiModelProperty(example = "MailBaby Mail", value = "The services name of the mail.")
  @JsonProperty("services_name")
  @NotNull

  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailRow mailRow = (MailRow) o;
    return Objects.equals(mailId, mailRow.mailId) &&
        Objects.equals(repeatInvoicesCost, mailRow.repeatInvoicesCost) &&
        Objects.equals(mailUsername, mailRow.mailUsername) &&
        Objects.equals(mailStatus, mailRow.mailStatus) &&
        Objects.equals(servicesName, mailRow.servicesName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mailId, repeatInvoicesCost, mailUsername, mailStatus, servicesName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailRow {\n");
    
    sb.append("    mailId: ").append(toIndentedString(mailId)).append("\n");
    sb.append("    repeatInvoicesCost: ").append(toIndentedString(repeatInvoicesCost)).append("\n");
    sb.append("    mailUsername: ").append(toIndentedString(mailUsername)).append("\n");
    sb.append("    mailStatus: ").append(toIndentedString(mailStatus)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
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
