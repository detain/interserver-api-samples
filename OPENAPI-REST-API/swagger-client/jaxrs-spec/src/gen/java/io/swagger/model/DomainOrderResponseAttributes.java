package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainOrderResponseAttributes   {

  private @Valid String id = null;

  private @Valid String adminEmail = null;

  /**
   * Registrar order ID.
   **/
  public DomainOrderResponseAttributes id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(value = "Registrar order ID.")
  @JsonProperty("id")
  @NotNull

  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Administrative contact email provided for the order.
   **/
  public DomainOrderResponseAttributes adminEmail(String adminEmail) {
    this.adminEmail = adminEmail;
    return this;
  }

  
  @ApiModelProperty(value = "Administrative contact email provided for the order.")
  @JsonProperty("admin_email")
  @NotNull

  public String getAdminEmail() {
    return adminEmail;
  }
  public void setAdminEmail(String adminEmail) {
    this.adminEmail = adminEmail;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderResponseAttributes domainOrderResponseAttributes = (DomainOrderResponseAttributes) o;
    return Objects.equals(id, domainOrderResponseAttributes.id) &&
        Objects.equals(adminEmail, domainOrderResponseAttributes.adminEmail);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, adminEmail);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
