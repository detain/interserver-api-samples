package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Detailed ticket information
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Detailed ticket information")

public class TicketDetails   {

  private @Valid Integer ticketid = null;

  private @Valid String ticketmaskid = null;

  private @Valid String department = null;

  private @Valid String status = null;

  private @Valid String priority = null;

  private @Valid String subject = null;

  private @Valid String createdOn = null;

  private @Valid String updatedOn = null;

  /**
   **/
  public TicketDetails ticketid(Integer ticketid) {
    this.ticketid = ticketid;
    return this;
  }

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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

  
  @ApiModelProperty(value = "")
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
