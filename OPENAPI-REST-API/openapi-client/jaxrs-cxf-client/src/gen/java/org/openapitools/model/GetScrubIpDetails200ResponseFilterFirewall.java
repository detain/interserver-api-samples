package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.GetScrubIpDetails200ResponseFilterFirewallFiltersInner;
import org.openapitools.model.GetScrubIpDetails200ResponseFilterFirewallRulesInner;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetScrubIpDetails200ResponseFilterFirewall  {
  
  @ApiModelProperty(value = "")

  private List<GetScrubIpDetails200ResponseFilterFirewallRulesInner> rules = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<GetScrubIpDetails200ResponseFilterFirewallFiltersInner> filters = new ArrayList<>();

  @ApiModelProperty(value = "")

  private Integer scrubEnabled;
 /**
   * Get rules
   * @return rules
  **/
  @JsonProperty("rules")
  public List<GetScrubIpDetails200ResponseFilterFirewallRulesInner> getRules() {
    return rules;
  }

  public void setRules(List<GetScrubIpDetails200ResponseFilterFirewallRulesInner> rules) {
    this.rules = rules;
  }

  public GetScrubIpDetails200ResponseFilterFirewall rules(List<GetScrubIpDetails200ResponseFilterFirewallRulesInner> rules) {
    this.rules = rules;
    return this;
  }

  public GetScrubIpDetails200ResponseFilterFirewall addRulesItem(GetScrubIpDetails200ResponseFilterFirewallRulesInner rulesItem) {
    this.rules.add(rulesItem);
    return this;
  }

 /**
   * Get filters
   * @return filters
  **/
  @JsonProperty("filters")
  public List<GetScrubIpDetails200ResponseFilterFirewallFiltersInner> getFilters() {
    return filters;
  }

  public void setFilters(List<GetScrubIpDetails200ResponseFilterFirewallFiltersInner> filters) {
    this.filters = filters;
  }

  public GetScrubIpDetails200ResponseFilterFirewall filters(List<GetScrubIpDetails200ResponseFilterFirewallFiltersInner> filters) {
    this.filters = filters;
    return this;
  }

  public GetScrubIpDetails200ResponseFilterFirewall addFiltersItem(GetScrubIpDetails200ResponseFilterFirewallFiltersInner filtersItem) {
    this.filters.add(filtersItem);
    return this;
  }

 /**
   * Get scrubEnabled
   * @return scrubEnabled
  **/
  @JsonProperty("scrub_enabled")
  public Integer getScrubEnabled() {
    return scrubEnabled;
  }

  public void setScrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
  }

  public GetScrubIpDetails200ResponseFilterFirewall scrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
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
    GetScrubIpDetails200ResponseFilterFirewall getScrubIpDetails200ResponseFilterFirewall = (GetScrubIpDetails200ResponseFilterFirewall) o;
    return Objects.equals(this.rules, getScrubIpDetails200ResponseFilterFirewall.rules) &&
        Objects.equals(this.filters, getScrubIpDetails200ResponseFilterFirewall.filters) &&
        Objects.equals(this.scrubEnabled, getScrubIpDetails200ResponseFilterFirewall.scrubEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(rules, filters, scrubEnabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetScrubIpDetails200ResponseFilterFirewall {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

