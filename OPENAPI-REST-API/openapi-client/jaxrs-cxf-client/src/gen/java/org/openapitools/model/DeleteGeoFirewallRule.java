package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Delete geo firewall rule for your scrub ip
 */
@ApiModel(description="Delete geo firewall rule for your scrub ip")

public class DeleteGeoFirewallRule  {
  
  @ApiModelProperty(example = "2045", required = true, value = "")

  private Integer ruleId;
 /**
   * Get ruleId
   * @return ruleId
  **/
  @JsonProperty("rule_id")
  public Integer getRuleId() {
    return ruleId;
  }

  public void setRuleId(Integer ruleId) {
    this.ruleId = ruleId;
  }

  public DeleteGeoFirewallRule ruleId(Integer ruleId) {
    this.ruleId = ruleId;
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
    DeleteGeoFirewallRule deleteGeoFirewallRule = (DeleteGeoFirewallRule) o;
    return Objects.equals(this.ruleId, deleteGeoFirewallRule.ruleId);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

