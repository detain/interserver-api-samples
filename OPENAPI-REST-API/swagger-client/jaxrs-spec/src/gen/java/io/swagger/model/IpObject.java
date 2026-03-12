package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * IP Address
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "IP Address")

public class IpObject   {

  private @Valid String ip = null;

  /**
   * IP Address
   **/
  public IpObject ip(String ip) {
    this.ip = ip;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "IP Address")
  @JsonProperty("ip")
  @NotNull

  public String getIp() {
    return ip;
  }
  public void setIp(String ip) {
    this.ip = ip;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IpObject ipObject = (IpObject) o;
    return Objects.equals(ip, ipObject.ip);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ip);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IpObject {\n");
    
    sb.append("    ip: ").append(toIndentedString(ip)).append("\n");
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
