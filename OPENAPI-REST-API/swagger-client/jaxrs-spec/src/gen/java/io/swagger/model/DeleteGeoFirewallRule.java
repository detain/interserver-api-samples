package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Delete geo firewall rule for your scrub ip
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Delete geo firewall rule for your scrub ip")

public class DeleteGeoFirewallRule   {

  private @Valid Integer ruleId = null;

  /**
   **/
  public DeleteGeoFirewallRule ruleId(Integer ruleId) {
    this.ruleId = ruleId;
    return this;
  }

  
  @ApiModelProperty(example = "2045", required = true, value = "")
  @JsonProperty("rule_id")
  @NotNull

  public Integer getRuleId() {
    return ruleId;
  }
  public void setRuleId(Integer ruleId) {
    this.ruleId = ruleId;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
