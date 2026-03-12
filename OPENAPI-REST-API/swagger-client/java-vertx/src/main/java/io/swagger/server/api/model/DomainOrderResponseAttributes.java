package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * DomainOrderResponseAttributes
 */




public class DomainOrderResponseAttributes   {
  private String id = null;

  private String adminEmail = null;

  public DomainOrderResponseAttributes id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Registrar order ID.
   * @return id
   **/
    public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public DomainOrderResponseAttributes adminEmail(String adminEmail) {
    this.adminEmail = adminEmail;
    return this;
  }

  /**
   * Administrative contact email provided for the order.
   * @return adminEmail
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
