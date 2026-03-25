package org.openapitools.model;

import org.openapitools.model.VpsPleskLicense;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsPlesk12Data  {
  
  @ApiModelProperty(value = "")

  private VpsPleskLicense admin;

  @ApiModelProperty(value = "")

  private VpsPleskLicense pro;

  @ApiModelProperty(value = "")

  private VpsPleskLicense host;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsPlesk12Data vpsPlesk12Data = (VpsPlesk12Data) o;
    return Objects.equals(this.admin, vpsPlesk12Data.admin) &&
        Objects.equals(this.pro, vpsPlesk12Data.pro) &&
        Objects.equals(this.host, vpsPlesk12Data.host);
  }

  @Override
  public int hashCode() {
    return Objects.hash(admin, pro, host);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

