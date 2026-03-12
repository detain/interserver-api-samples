package io.swagger.model;

import io.swagger.model.DomainAdminContact;
import io.swagger.model.DomainOwnerContact;
import io.swagger.model.DomainTechContact;

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

public class DomainAllInfoAttributesContactSet   {
  
  @Schema(description = "")
  private DomainOwnerContact owner = null;
  
  @Schema(description = "")
  private DomainAdminContact admin = null;
  
  @Schema(description = "")
  private DomainTechContact tech = null;
 /**
   * Get owner
   * @return owner
  **/
  @JsonProperty("owner")
  public DomainOwnerContact getOwner() {
    return owner;
  }

  public void setOwner(DomainOwnerContact owner) {
    this.owner = owner;
  }

  public DomainAllInfoAttributesContactSet owner(DomainOwnerContact owner) {
    this.owner = owner;
    return this;
  }

 /**
   * Get admin
   * @return admin
  **/
  @JsonProperty("admin")
  public DomainAdminContact getAdmin() {
    return admin;
  }

  public void setAdmin(DomainAdminContact admin) {
    this.admin = admin;
  }

  public DomainAllInfoAttributesContactSet admin(DomainAdminContact admin) {
    this.admin = admin;
    return this;
  }

 /**
   * Get tech
   * @return tech
  **/
  @JsonProperty("tech")
  public DomainTechContact getTech() {
    return tech;
  }

  public void setTech(DomainTechContact tech) {
    this.tech = tech;
  }

  public DomainAllInfoAttributesContactSet tech(DomainTechContact tech) {
    this.tech = tech;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
