package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Detailed ticket information
 **/
@Schema(description="Detailed ticket information")
public class TicketDetails   {
  
  @Schema(description = "")
  private Integer ticketid = null;
  
  @Schema(description = "")
  private String ticketmaskid = null;
  
  @Schema(description = "")
  private String department = null;
  
  @Schema(description = "")
  private String status = null;
  
  @Schema(description = "")
  private String priority = null;
  
  @Schema(description = "")
  private String subject = null;
  
  @Schema(description = "")
  private String createdOn = null;
  
  @Schema(description = "")
  private String updatedOn = null;
 /**
   * Get ticketid
   * @return ticketid
  **/
  @JsonProperty("ticketid")
  @NotNull
  public Integer getTicketid() {
    return ticketid;
  }

  public void setTicketid(Integer ticketid) {
    this.ticketid = ticketid;
  }

  public TicketDetails ticketid(Integer ticketid) {
    this.ticketid = ticketid;
    return this;
  }

 /**
   * Get ticketmaskid
   * @return ticketmaskid
  **/
  @JsonProperty("ticketmaskid")
  @NotNull
  public String getTicketmaskid() {
    return ticketmaskid;
  }

  public void setTicketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
  }

  public TicketDetails ticketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
    return this;
  }

 /**
   * Get department
   * @return department
  **/
  @JsonProperty("department")
  @NotNull
  public String getDepartment() {
    return department;
  }

  public void setDepartment(String department) {
    this.department = department;
  }

  public TicketDetails department(String department) {
    this.department = department;
    return this;
  }

 /**
   * Get status
   * @return status
  **/
  @JsonProperty("status")
  @NotNull
  public String getStatus() {
    return status;
  }

  public void setStatus(String status) {
    this.status = status;
  }

  public TicketDetails status(String status) {
    this.status = status;
    return this;
  }

 /**
   * Get priority
   * @return priority
  **/
  @JsonProperty("priority")
  @NotNull
  public String getPriority() {
    return priority;
  }

  public void setPriority(String priority) {
    this.priority = priority;
  }

  public TicketDetails priority(String priority) {
    this.priority = priority;
    return this;
  }

 /**
   * Get subject
   * @return subject
  **/
  @JsonProperty("subject")
  @NotNull
  public String getSubject() {
    return subject;
  }

  public void setSubject(String subject) {
    this.subject = subject;
  }

  public TicketDetails subject(String subject) {
    this.subject = subject;
    return this;
  }

 /**
   * Get createdOn
   * @return createdOn
  **/
  @JsonProperty("created_on")
  @NotNull
  public String getCreatedOn() {
    return createdOn;
  }

  public void setCreatedOn(String createdOn) {
    this.createdOn = createdOn;
  }

  public TicketDetails createdOn(String createdOn) {
    this.createdOn = createdOn;
    return this;
  }

 /**
   * Get updatedOn
   * @return updatedOn
  **/
  @JsonProperty("updated_on")
  @NotNull
  public String getUpdatedOn() {
    return updatedOn;
  }

  public void setUpdatedOn(String updatedOn) {
    this.updatedOn = updatedOn;
  }

  public TicketDetails updatedOn(String updatedOn) {
    this.updatedOn = updatedOn;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketDetails {\n");
    
    sb.append("    ticketid: ").append(toIndentedString(ticketid)).append("\n");
    sb.append("    ticketmaskid: ").append(toIndentedString(ticketmaskid)).append("\n");
    sb.append("    department: ").append(toIndentedString(department)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    priority: ").append(toIndentedString(priority)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    createdOn: ").append(toIndentedString(createdOn)).append("\n");
    sb.append("    updatedOn: ").append(toIndentedString(updatedOn)).append("\n");
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
