package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20012FilterFirewallFilters;
import io.swagger.model.InlineResponse20012FilterFirewallRules;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * InlineResponse20012FilterFirewall
 */
@Validated
@Introspected

public class InlineResponse20012FilterFirewall   {
  @JsonProperty("rules")
  @Valid
  private List<InlineResponse20012FilterFirewallRules> rules = null;

  @JsonProperty("filters")
  @Valid
  private List<InlineResponse20012FilterFirewallFilters> filters = null;

  @JsonProperty("scrub_enabled")
  private Integer scrubEnabled = null;

  public InlineResponse20012FilterFirewall rules(List<InlineResponse20012FilterFirewallRules> rules) {
    this.rules = rules;
    return this;
  }

  public InlineResponse20012FilterFirewall addRulesItem(InlineResponse20012FilterFirewallRules rulesItem) {
    if (this.rules == null) {
      this.rules = new ArrayList<InlineResponse20012FilterFirewallRules>();
    }
    this.rules.add(rulesItem);
    return this;
  }

  /**
   * Get rules
   * @return rules
  **/
  @Schema(description = "")
  @NotNull
  @Valid
  public List<InlineResponse20012FilterFirewallRules> getRules() {
    return rules;
  }

  public void setRules(List<InlineResponse20012FilterFirewallRules> rules) {
    this.rules = rules;
  }

  public InlineResponse20012FilterFirewall filters(List<InlineResponse20012FilterFirewallFilters> filters) {
    this.filters = filters;
    return this;
  }

  public InlineResponse20012FilterFirewall addFiltersItem(InlineResponse20012FilterFirewallFilters filtersItem) {
    if (this.filters == null) {
      this.filters = new ArrayList<InlineResponse20012FilterFirewallFilters>();
    }
    this.filters.add(filtersItem);
    return this;
  }

  /**
   * Get filters
   * @return filters
  **/
  @Schema(description = "")
  @NotNull
  @Valid
  public List<InlineResponse20012FilterFirewallFilters> getFilters() {
    return filters;
  }

  public void setFilters(List<InlineResponse20012FilterFirewallFilters> filters) {
    this.filters = filters;
  }

  public InlineResponse20012FilterFirewall scrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
    return this;
  }

  /**
   * Get scrubEnabled
   * @return scrubEnabled
  **/
  @Schema(description = "")
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
    return Objects.equals(this.rules, inlineResponse20012FilterFirewall.rules) &&
        Objects.equals(this.filters, inlineResponse20012FilterFirewall.filters) &&
        Objects.equals(this.scrubEnabled, inlineResponse20012FilterFirewall.scrubEnabled);
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
