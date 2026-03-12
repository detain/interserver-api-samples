package io.swagger.model;

import io.swagger.model.VpsPleskLicense;

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

public class VpsPlesk12Data   {
  
  @Schema(description = "")
  private VpsPleskLicense admin = null;
  
  @Schema(description = "")
  private VpsPleskLicense pro = null;
  
  @Schema(description = "")
  private VpsPleskLicense host = null;
 /**
   * Get admin
   * @return admin
  **/
  @JsonProperty("admin")
  public VpsPleskLicense getAdmin() {
    return admin;
  }

  public void setAdmin(VpsPleskLicense admin) {
    this.admin = admin;
  }

  public VpsPlesk12Data admin(VpsPleskLicense admin) {
    this.admin = admin;
    return this;
  }

 /**
   * Get pro
   * @return pro
  **/
  @JsonProperty("pro")
  public VpsPleskLicense getPro() {
    return pro;
  }

  public void setPro(VpsPleskLicense pro) {
    this.pro = pro;
  }

  public VpsPlesk12Data pro(VpsPleskLicense pro) {
    this.pro = pro;
    return this;
  }

 /**
   * Get host
   * @return host
  **/
  @JsonProperty("host")
  public VpsPleskLicense getHost() {
    return host;
  }

  public void setHost(VpsPleskLicense host) {
    this.host = host;
  }

  public VpsPlesk12Data host(VpsPleskLicense host) {
    this.host = host;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsPlesk12Data {\n");
    
    sb.append("    admin: ").append(toIndentedString(admin)).append("\n");
    sb.append("    pro: ").append(toIndentedString(pro)).append("\n");
    sb.append("    host: ").append(toIndentedString(host)).append("\n");
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
