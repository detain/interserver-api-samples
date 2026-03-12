package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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

/**
  * A result row from the `Mail` `GET` request.
 **/
@Schema(description="A result row from the `Mail` `GET` request.")
public class MailRow   {
  
  @Schema(example = "5652", description = "The id of the mail.")
 /**
   * The id of the mail.  
  **/
  private String mailId = null;
  
  @Schema(example = "5.99", description = "The repeat invoices cost of the mail.")
 /**
   * The repeat invoices cost of the mail.  
  **/
  private String repeatInvoicesCost = null;
  
  @Schema(example = "mb5652", description = "The username of the mail.")
 /**
   * The username of the mail.  
  **/
  private String mailUsername = null;
  
  @Schema(example = "expired", description = "The status of the mail.")
 /**
   * The status of the mail.  
  **/
  private String mailStatus = null;
  
  @Schema(example = "MailBaby Mail", description = "The services name of the mail.")
 /**
   * The services name of the mail.  
  **/
  private String servicesName = null;
 /**
   * The id of the mail.
   * @return mailId
  **/
  @JsonProperty("mail_id")
  public String getMailId() {
    return mailId;
  }

  public void setMailId(String mailId) {
    this.mailId = mailId;
  }

  public MailRow mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

 /**
   * The repeat invoices cost of the mail.
   * @return repeatInvoicesCost
  **/
  @JsonProperty("repeat_invoices_cost")
  public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }

  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  public MailRow repeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

 /**
   * The username of the mail.
   * @return mailUsername
  **/
  @JsonProperty("mail_username")
  public String getMailUsername() {
    return mailUsername;
  }

  public void setMailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
  }

  public MailRow mailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
    return this;
  }

 /**
   * The status of the mail.
   * @return mailStatus
  **/
  @JsonProperty("mail_status")
  public String getMailStatus() {
    return mailStatus;
  }

  public void setMailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
  }

  public MailRow mailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
    return this;
  }

 /**
   * The services name of the mail.
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public MailRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
