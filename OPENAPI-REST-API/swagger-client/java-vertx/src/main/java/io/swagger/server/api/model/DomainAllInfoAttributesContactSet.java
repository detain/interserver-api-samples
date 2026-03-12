package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.DomainAdminContact;
import io.swagger.server.api.model.DomainOwnerContact;
import io.swagger.server.api.model.DomainTechContact;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * DomainAllInfoAttributesContactSet
 */




public class DomainAllInfoAttributesContactSet   {
  private DomainOwnerContact owner = null;

  private DomainAdminContact admin = null;

  private DomainTechContact tech = null;

  public DomainAllInfoAttributesContactSet owner(DomainOwnerContact owner) {
    this.owner = owner;
    return this;
  }

  /**
   * Get owner
   * @return owner
   **/
    public DomainOwnerContact getOwner() {
    return owner;
  }

  public void setOwner(DomainOwnerContact owner) {
    this.owner = owner;
  }

  public DomainAllInfoAttributesContactSet admin(DomainAdminContact admin) {
    this.admin = admin;
    return this;
  }

  /**
   * Get admin
   * @return admin
   **/
    public DomainAdminContact getAdmin() {
    return admin;
  }

  public void setAdmin(DomainAdminContact admin) {
    this.admin = admin;
  }

  public DomainAllInfoAttributesContactSet tech(DomainTechContact tech) {
    this.tech = tech;
    return this;
  }

  /**
   * Get tech
   * @return tech
   **/
    public DomainTechContact getTech() {
    return tech;
  }

  public void setTech(DomainTechContact tech) {
    this.tech = tech;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet = (DomainAllInfoAttributesContactSet) o;
    return Objects.equals(this.owner, domainAllInfoAttributesContactSet.owner) &&
        Objects.equals(this.admin, domainAllInfoAttributesContactSet.admin) &&
        Objects.equals(this.tech, domainAllInfoAttributesContactSet.tech);
  }

  @Override
  public int hashCode() {
    return Objects.hash(owner, admin, tech);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainAllInfoAttributesContactSet {\n");
    
    sb.append("    owner: ").append(toIndentedString(owner)).append("\n");
    sb.append("    admin: ").append(toIndentedString(admin)).append("\n");
    sb.append("    tech: ").append(toIndentedString(tech)).append("\n");
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
