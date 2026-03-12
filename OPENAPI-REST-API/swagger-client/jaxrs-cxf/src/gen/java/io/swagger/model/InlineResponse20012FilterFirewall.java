package io.swagger.model;

import io.swagger.model.InlineResponse20012FilterFirewallFilters;
import io.swagger.model.InlineResponse20012FilterFirewallRules;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class InlineResponse20012FilterFirewall   {
  
  @Schema(description = "")
  private List<InlineResponse20012FilterFirewallRules> rules = null;
  
  @Schema(description = "")
  private List<InlineResponse20012FilterFirewallFilters> filters = null;
  
  @Schema(description = "")
  private Integer scrubEnabled = null;
 /**
   * Get rules
   * @return rules
  **/
  @JsonProperty("rules")
  @NotNull
  public List<InlineResponse20012FilterFirewallRules> getRules() {
    return rules;
  }

  public void setRules(List<InlineResponse20012FilterFirewallRules> rules) {
    this.rules = rules;
  }

  public InlineResponse20012FilterFirewall rules(List<InlineResponse20012FilterFirewallRules> rules) {
    this.rules = rules;
    return this;
  }

  public InlineResponse20012FilterFirewall addRulesItem(InlineResponse20012FilterFirewallRules rulesItem) {
    this.rules.add(rulesItem);
    return this;
  }

 /**
   * Get filters
   * @return filters
  **/
  @JsonProperty("filters")
  @NotNull
  public List<InlineResponse20012FilterFirewallFilters> getFilters() {
    return filters;
  }

  public void setFilters(List<InlineResponse20012FilterFirewallFilters> filters) {
    this.filters = filters;
  }

  public InlineResponse20012FilterFirewall filters(List<InlineResponse20012FilterFirewallFilters> filters) {
    this.filters = filters;
    return this;
  }

  public InlineResponse20012FilterFirewall addFiltersItem(InlineResponse20012FilterFirewallFilters filtersItem) {
    this.filters.add(filtersItem);
    return this;
  }

 /**
   * Get scrubEnabled
   * @return scrubEnabled
  **/
  @JsonProperty("scrub_enabled")
  @NotNull
  public Integer getScrubEnabled() {
    return scrubEnabled;
  }

  public void setScrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
  }

  public InlineResponse20012FilterFirewall scrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
