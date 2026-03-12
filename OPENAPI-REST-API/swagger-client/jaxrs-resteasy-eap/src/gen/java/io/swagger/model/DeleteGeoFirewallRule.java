package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Delete geo firewall rule for your scrub ip")

public class DeleteGeoFirewallRule   {
  private Integer ruleId = null;

  /**
   **/
  
  @Schema(example = "2045", required = true, description = "")
  @JsonProperty("rule_id")
  @NotNull
  public Integer getRuleId() {
    return ruleId;
  }
  public void setRuleId(Integer ruleId) {
    this.ruleId = ruleId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DeleteGeoFirewallRule deleteGeoFirewallRule = (DeleteGeoFirewallRule) o;
    return Objects.equals(ruleId, deleteGeoFirewallRule.ruleId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ruleId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DeleteGeoFirewallRule {\n");
    
    sb.append("    ruleId: ").append(toIndentedString(ruleId)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
