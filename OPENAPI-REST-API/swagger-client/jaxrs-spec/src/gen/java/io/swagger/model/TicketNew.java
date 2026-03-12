package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * New helpdesk ticket request.  
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "New helpdesk ticket request.  ")

public class TicketNew   {

  private @Valid String subject = null;

  private @Valid String body = null;

  private @Valid Integer serviceId = null;

  private @Valid String serviceModule = null;

  /**
   **/
  public TicketNew subject(String subject) {
    this.subject = subject;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
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
  public TicketNew body(String body) {
    this.body = body;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("body")
  @NotNull

  public String getBody() {
    return body;
  }
  public void setBody(String body) {
    this.body = body;
  }

  /**
   **/
  public TicketNew serviceId(Integer serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("service_id")
  @NotNull

  public Integer getServiceId() {
    return serviceId;
  }
  public void setServiceId(Integer serviceId) {
    this.serviceId = serviceId;
  }

  /**
   **/
  public TicketNew serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("service_module")
  @NotNull

  public String getServiceModule() {
    return serviceModule;
  }
  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketNew ticketNew = (TicketNew) o;
    return Objects.equals(subject, ticketNew.subject) &&
        Objects.equals(body, ticketNew.body) &&
        Objects.equals(serviceId, ticketNew.serviceId) &&
        Objects.equals(serviceModule, ticketNew.serviceModule);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
