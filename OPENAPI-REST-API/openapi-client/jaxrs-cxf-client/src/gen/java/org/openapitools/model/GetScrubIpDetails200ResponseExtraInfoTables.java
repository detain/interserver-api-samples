package org.openapitools.model;

import org.openapitools.model.GetScrubIpDetails200ResponseExtraInfoTablesScrubIps;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetScrubIpDetails200ResponseExtraInfoTables  {
  
  @ApiModelProperty(value = "")

  private GetScrubIpDetails200ResponseExtraInfoTablesScrubIps scrubIps;
 /**
   * Get scrubIps
   * @return scrubIps
  **/
  @JsonProperty("scrub_ips")
  public GetScrubIpDetails200ResponseExtraInfoTablesScrubIps getScrubIps() {
    return scrubIps;
  }

  public void setScrubIps(GetScrubIpDetails200ResponseExtraInfoTablesScrubIps scrubIps) {
    this.scrubIps = scrubIps;
  }

  public GetScrubIpDetails200ResponseExtraInfoTables scrubIps(GetScrubIpDetails200ResponseExtraInfoTablesScrubIps scrubIps) {
    this.scrubIps = scrubIps;
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
    GetScrubIpDetails200ResponseExtraInfoTables getScrubIpDetails200ResponseExtraInfoTables = (GetScrubIpDetails200ResponseExtraInfoTables) o;
    return Objects.equals(this.scrubIps, getScrubIpDetails200ResponseExtraInfoTables.scrubIps);
  }

  @Override
  public int hashCode() {
    return Objects.hash(scrubIps);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetScrubIpDetails200ResponseExtraInfoTables {\n");
    
    sb.append("    scrubIps: ").append(toIndentedString(scrubIps)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

