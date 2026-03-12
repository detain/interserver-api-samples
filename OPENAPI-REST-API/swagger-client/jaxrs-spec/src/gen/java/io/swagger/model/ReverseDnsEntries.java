package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The Reverse DNS entries.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The Reverse DNS entries.")

public class ReverseDnsEntries   {

  private @Valid Map<String, Object> ips = new HashMap<String, Object>();

  /**
   * The IPs you have access to and their current reverse dns mapping.
   **/
  public ReverseDnsEntries ips(Map<String, Object> ips) {
    this.ips = ips;
    return this;
  }

  
  @ApiModelProperty(value = "The IPs you have access to and their current reverse dns mapping.")
  @JsonProperty("ips")
  @NotNull

  public Map<String, Object> getIps() {
    return ips;
  }
  public void setIps(Map<String, Object> ips) {
    this.ips = ips;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ReverseDnsEntries reverseDnsEntries = (ReverseDnsEntries) o;
    return Objects.equals(ips, reverseDnsEntries.ips);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ips);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ReverseDnsEntries {\n");
    
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
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
