package io.swagger.model;

import io.swagger.model.VpsPleskLicense;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsPlesk12Data   {

  private @Valid VpsPleskLicense admin = null;

  private @Valid VpsPleskLicense pro = null;

  private @Valid VpsPleskLicense host = null;

  /**
   **/
  public VpsPlesk12Data admin(VpsPleskLicense admin) {
    this.admin = admin;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("admin")
  @NotNull

  public VpsPleskLicense getAdmin() {
    return admin;
  }
  public void setAdmin(VpsPleskLicense admin) {
    this.admin = admin;
  }

  /**
   **/
  public VpsPlesk12Data pro(VpsPleskLicense pro) {
    this.pro = pro;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("pro")
  @NotNull

  public VpsPleskLicense getPro() {
    return pro;
  }
  public void setPro(VpsPleskLicense pro) {
    this.pro = pro;
  }

  /**
   **/
  public VpsPlesk12Data host(VpsPleskLicense host) {
    this.host = host;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("host")
  @NotNull

  public VpsPleskLicense getHost() {
    return host;
  }
  public void setHost(VpsPleskLicense host) {
    this.host = host;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsPlesk12Data vpsPlesk12Data = (VpsPlesk12Data) o;
    return Objects.equals(admin, vpsPlesk12Data.admin) &&
        Objects.equals(pro, vpsPlesk12Data.pro) &&
        Objects.equals(host, vpsPlesk12Data.host);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
