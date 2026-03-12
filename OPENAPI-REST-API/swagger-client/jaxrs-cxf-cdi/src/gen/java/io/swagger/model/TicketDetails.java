package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Detailed ticket information
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Detailed ticket information")

public class TicketDetails   {
  private Integer ticketid = null;
  private String ticketmaskid = null;
  private String department = null;
  private String status = null;
  private String priority = null;
  private String subject = null;
  private String createdOn = null;
  private String updatedOn = null;

  /**
   **/
  public TicketDetails ticketid(Integer ticketid) {
    this.ticketid = ticketid;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ticketid")
  @NotNull
  public Integer getTicketid() {
    return ticketid;
  }
  public void setTicketid(Integer ticketid) {
    this.ticketid = ticketid;
  }

  /**
   **/
  public TicketDetails ticketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ticketmaskid")
  @NotNull
  public String getTicketmaskid() {
    return ticketmaskid;
  }
  public void setTicketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
  }

  /**
   **/
  public TicketDetails department(String department) {
    this.department = department;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("department")
  @NotNull
  public String getDepartment() {
    return department;
  }
  public void setDepartment(String department) {
    this.department = department;
  }

  /**
   **/
  public TicketDetails status(String status) {
    this.status = status;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("status")
  @NotNull
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   **/
  public TicketDetails priority(String priority) {
    this.priority = priority;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("priority")
  @NotNull
  public String getPriority() {
    return priority;
  }
  public void setPriority(String priority) {
    this.priority = priority;
  }

  /**
   **/
  public TicketDetails subject(String subject) {
    this.subject = subject;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("subject")
  @NotNull
  public String getSubject() {
    return subject;
  }
  public void setSubject(String subject) {
    this.subject = subject;
  }

  /**
   **/
  public TicketDetails createdOn(String createdOn) {
    this.createdOn = createdOn;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("created_on")
  @NotNull
  public String getCreatedOn() {
    return createdOn;
  }
  public void setCreatedOn(String createdOn) {
    this.createdOn = createdOn;
  }

  /**
   **/
  public TicketDetails updatedOn(String updatedOn) {
    this.updatedOn = updatedOn;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("updated_on")
  @NotNull
  public String getUpdatedOn() {
    return updatedOn;
  }
  public void setUpdatedOn(String updatedOn) {
    this.updatedOn = updatedOn;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketDetails ticketDetails = (TicketDetails) o;
    return Objects.equals(ticketid, ticketDetails.ticketid) &&
        Objects.equals(ticketmaskid, ticketDetails.ticketmaskid) &&
        Objects.equals(department, ticketDetails.department) &&
        Objects.equals(status, ticketDetails.status) &&
        Objects.equals(priority, ticketDetails.priority) &&
        Objects.equals(subject, ticketDetails.subject) &&
        Objects.equals(createdOn, ticketDetails.createdOn) &&
        Objects.equals(updatedOn, ticketDetails.updatedOn);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ticketid, ticketmaskid, department, status, priority, subject, createdOn, updatedOn);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
