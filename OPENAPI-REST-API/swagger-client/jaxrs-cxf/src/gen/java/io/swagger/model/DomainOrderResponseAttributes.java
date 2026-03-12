package io.swagger.model;

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

public class DomainOrderResponseAttributes   {
  
  @Schema(description = "Registrar order ID.")
 /**
   * Registrar order ID.  
  **/
  private String id = null;
  
  @Schema(description = "Administrative contact email provided for the order.")
 /**
   * Administrative contact email provided for the order.  
  **/
  private String adminEmail = null;
 /**
   * Registrar order ID.
   * @return id
  **/
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public DomainOrderResponseAttributes id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Administrative contact email provided for the order.
   * @return adminEmail
  **/
  @JsonProperty("admin_email")
  @NotNull
  public String getAdminEmail() {
    return adminEmail;
  }

  public void setAdminEmail(String adminEmail) {
    this.adminEmail = adminEmail;
  }

  public DomainOrderResponseAttributes adminEmail(String adminEmail) {
    this.adminEmail = adminEmail;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderResponseAttributes {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    adminEmail: ").append(toIndentedString(adminEmail)).append("\n");
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
