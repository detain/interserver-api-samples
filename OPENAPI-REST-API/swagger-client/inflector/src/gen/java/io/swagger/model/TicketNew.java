package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * New helpdesk ticket request.  
 **/
@Schema(description = "New helpdesk ticket request.  ")


public class TicketNew   {
  @JsonProperty("subject")
  private String subject = null;
  @JsonProperty("body")
  private String body = null;
  @JsonProperty("service_id")
  private Integer serviceId = null;
  @JsonProperty("service_module")
  private String serviceModule = null;
  /**
   **/
  public TicketNew subject(String subject) {
    this.subject = subject;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("subject")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("body")
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

  
  @Schema(description = "")
  @JsonProperty("service_id")
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

  
  @Schema(description = "")
  @JsonProperty("service_module")
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
