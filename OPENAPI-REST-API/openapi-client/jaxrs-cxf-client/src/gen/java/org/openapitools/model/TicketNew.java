package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * New helpdesk ticket request.  
 */
@ApiModel(description="New helpdesk ticket request.  ")

public class TicketNew  {
  
  @ApiModelProperty(required = true, value = "")

  private String subject;

  @ApiModelProperty(required = true, value = "")

  private String body;

  @ApiModelProperty(value = "")

  private Integer serviceId;

  @ApiModelProperty(value = "")

  private String serviceModule;
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

  public TicketNew subject(String subject) {
    this.subject = subject;
    return this;
  }

 /**
   * Get body
   * @return body
  **/
  @JsonProperty("body")
  public String getBody() {
    return body;
  }

  public void setBody(String body) {
    this.body = body;
  }

  public TicketNew body(String body) {
    this.body = body;
    return this;
  }

 /**
   * Get serviceId
   * @return serviceId
  **/
  @JsonProperty("service_id")
  public Integer getServiceId() {
    return serviceId;
  }

  public void setServiceId(Integer serviceId) {
    this.serviceId = serviceId;
  }

  public TicketNew serviceId(Integer serviceId) {
    this.serviceId = serviceId;
    return this;
  }

 /**
   * Get serviceModule
   * @return serviceModule
  **/
  @JsonProperty("service_module")
  public String getServiceModule() {
    return serviceModule;
  }

  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  public TicketNew serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
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
    TicketNew ticketNew = (TicketNew) o;
    return Objects.equals(this.subject, ticketNew.subject) &&
        Objects.equals(this.body, ticketNew.body) &&
        Objects.equals(this.serviceId, ticketNew.serviceId) &&
        Objects.equals(this.serviceModule, ticketNew.serviceModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(subject, body, serviceId, serviceModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketNew {\n");
    
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    body: ").append(toIndentedString(body)).append("\n");
    sb.append("    serviceId: ").append(toIndentedString(serviceId)).append("\n");
    sb.append("    serviceModule: ").append(toIndentedString(serviceModule)).append("\n");
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

