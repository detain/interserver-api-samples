package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainOrderResponseAttributes  {
  
 /**
  * Registrar order ID.
  */
  @ApiModelProperty(value = "Registrar order ID.")

  private String id;

 /**
  * Administrative contact email provided for the order.
  */
  @ApiModelProperty(value = "Administrative contact email provided for the order.")

  private String adminEmail;
 /**
   * Registrar order ID.
   * @return id
  **/
  @JsonProperty("id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderResponseAttributes domainOrderResponseAttributes = (DomainOrderResponseAttributes) o;
    return Objects.equals(this.id, domainOrderResponseAttributes.id) &&
        Objects.equals(this.adminEmail, domainOrderResponseAttributes.adminEmail);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

