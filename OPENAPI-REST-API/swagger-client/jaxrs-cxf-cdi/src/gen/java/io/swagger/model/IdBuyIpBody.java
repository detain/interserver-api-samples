package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class IdBuyIpBody   {
  private Map<String, String> ips = new HashMap<String, String>();

  /**
   * A map of IP addresses to their desired reverse DNS hostnames.
   **/
  public IdBuyIpBody ips(Map<String, String> ips) {
    this.ips = ips;
    return this;
  }

  
  
  @Schema(description = "A map of IP addresses to their desired reverse DNS hostnames.")
  @JsonProperty("ips")
  @NotNull
  public Map<String, String> getIps() {
    return ips;
  }
  public void setIps(Map<String, String> ips) {
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
    IdBuyIpBody idBuyIpBody = (IdBuyIpBody) o;
    return Objects.equals(ips, idBuyIpBody.ips);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ips);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IdBuyIpBody {\n");
    
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
