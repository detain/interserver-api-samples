package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request specifying the hostname.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Request specifying the hostname.")

public class HostnameObject   {

  private @Valid String hostname = null;

  /**
   **/
  public HostnameObject hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("hostname")
  @NotNull

  public String getHostname() {
    return hostname;
  }
  public void setHostname(String hostname) {
    this.hostname = hostname;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HostnameObject hostnameObject = (HostnameObject) o;
    return Objects.equals(hostname, hostnameObject.hostname);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hostname);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HostnameObject {\n");
    
    sb.append("    hostname: ").append(toIndentedString(hostname)).append("\n");
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
