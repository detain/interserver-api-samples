package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20012ExtraInfoTablesScrubIps;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class InlineResponse20012ExtraInfoTables   {
  private InlineResponse20012ExtraInfoTablesScrubIps scrubIps = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ips")
  @NotNull
  public InlineResponse20012ExtraInfoTablesScrubIps getScrubIps() {
    return scrubIps;
  }
  public void setScrubIps(InlineResponse20012ExtraInfoTablesScrubIps scrubIps) {
    this.scrubIps = scrubIps;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20012ExtraInfoTables inlineResponse20012ExtraInfoTables = (InlineResponse20012ExtraInfoTables) o;
    return Objects.equals(scrubIps, inlineResponse20012ExtraInfoTables.scrubIps);
  }

  @Override
  public int hashCode() {
    return Objects.hash(scrubIps);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012ExtraInfoTables {\n");
    
    sb.append("    scrubIps: ").append(toIndentedString(scrubIps)).append("\n");
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
