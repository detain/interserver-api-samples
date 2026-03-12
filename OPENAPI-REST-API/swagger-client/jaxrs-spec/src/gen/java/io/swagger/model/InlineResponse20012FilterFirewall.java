package io.swagger.model;

import io.swagger.model.InlineResponse20012FilterFirewallFilters;
import io.swagger.model.InlineResponse20012FilterFirewallRules;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse20012FilterFirewall   {

  private @Valid List<InlineResponse20012FilterFirewallRules> rules = new ArrayList<InlineResponse20012FilterFirewallRules>();

  private @Valid List<InlineResponse20012FilterFirewallFilters> filters = new ArrayList<InlineResponse20012FilterFirewallFilters>();

  private @Valid Integer scrubEnabled = null;

  /**
   **/
  public InlineResponse20012FilterFirewall rules(List<InlineResponse20012FilterFirewallRules> rules) {
    this.rules = rules;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("rules")
  @NotNull

  public List<InlineResponse20012FilterFirewallRules> getRules() {
    return rules;
  }
  public void setRules(List<InlineResponse20012FilterFirewallRules> rules) {
    this.rules = rules;
  }

  /**
   **/
  public InlineResponse20012FilterFirewall filters(List<InlineResponse20012FilterFirewallFilters> filters) {
    this.filters = filters;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("filters")
  @NotNull

  public List<InlineResponse20012FilterFirewallFilters> getFilters() {
    return filters;
  }
  public void setFilters(List<InlineResponse20012FilterFirewallFilters> filters) {
    this.filters = filters;
  }

  /**
   **/
  public InlineResponse20012FilterFirewall scrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("scrub_enabled")
  @NotNull

  public Integer getScrubEnabled() {
    return scrubEnabled;
  }
  public void setScrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20012FilterFirewall inlineResponse20012FilterFirewall = (InlineResponse20012FilterFirewall) o;
    return Objects.equals(rules, inlineResponse20012FilterFirewall.rules) &&
        Objects.equals(filters, inlineResponse20012FilterFirewall.filters) &&
        Objects.equals(scrubEnabled, inlineResponse20012FilterFirewall.scrubEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(rules, filters, scrubEnabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012FilterFirewall {\n");
    
    sb.append("    rules: ").append(toIndentedString(rules)).append("\n");
    sb.append("    filters: ").append(toIndentedString(filters)).append("\n");
    sb.append("    scrubEnabled: ").append(toIndentedString(scrubEnabled)).append("\n");
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
