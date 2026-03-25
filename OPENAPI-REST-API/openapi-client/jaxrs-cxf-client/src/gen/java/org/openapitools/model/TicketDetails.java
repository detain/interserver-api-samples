package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Detailed ticket information
 */
@ApiModel(description="Detailed ticket information")

public class TicketDetails  {
  
  @ApiModelProperty(value = "")

  private Integer ticketid;

  @ApiModelProperty(value = "")

  private String ticketmaskid;

  @ApiModelProperty(value = "")

  private String department;

  @ApiModelProperty(value = "")

  private String status;

  @ApiModelProperty(value = "")

  private String priority;

  @ApiModelProperty(value = "")

  private String subject;

  @ApiModelProperty(value = "")

  private String createdOn;

  @ApiModelProperty(value = "")

  private String updatedOn;
 /**
   * Get ticketid
   * @return ticketid
  **/
  @JsonProperty("ticketid")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketDetails ticketDetails = (TicketDetails) o;
    return Objects.equals(this.ticketid, ticketDetails.ticketid) &&
        Objects.equals(this.ticketmaskid, ticketDetails.ticketmaskid) &&
        Objects.equals(this.department, ticketDetails.department) &&
        Objects.equals(this.status, ticketDetails.status) &&
        Objects.equals(this.priority, ticketDetails.priority) &&
        Objects.equals(this.subject, ticketDetails.subject) &&
        Objects.equals(this.createdOn, ticketDetails.createdOn) &&
        Objects.equals(this.updatedOn, ticketDetails.updatedOn);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

