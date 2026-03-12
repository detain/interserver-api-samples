package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.HashMap;
import java.util.List;
import java.util.Map;





public class IdBuyIpBody1   {
  @JsonProperty("ips")
  private Map<String, String> ips = null;
  /**
   * A map of IP addresses to their desired reverse DNS hostnames.
   **/
  public IdBuyIpBody1 ips(Map<String, String> ips) {
    this.ips = ips;
    return this;
  }

  
  @Schema(description = "A map of IP addresses to their desired reverse DNS hostnames.")
  @JsonProperty("ips")
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
    IdBuyIpBody1 idBuyIpBody1 = (IdBuyIpBody1) o;
    return Objects.equals(ips, idBuyIpBody1.ips);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ips);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IdBuyIpBody1 {\n");
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
