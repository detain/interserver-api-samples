package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="New helpdesk ticket request.  ")

public class TicketNew   {
  private String subject = null;
  private String body = null;
  private Integer serviceId = null;
  private String serviceModule = null;

  /**
   **/
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
  @JsonProperty("service_module")
  @NotNull
  public String getServiceModule() {
    return serviceModule;
  }
  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
