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
  * New helpdesk ticket request.  
 **/
@Schema(description="New helpdesk ticket request.  ")
public class TicketNew   {
  
  @Schema(required = true, description = "")
  private String subject = null;
  
  @Schema(required = true, description = "")
  private String body = null;
  
  @Schema(description = "")
  private Integer serviceId = null;
  
  @Schema(description = "")
  private String serviceModule = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
